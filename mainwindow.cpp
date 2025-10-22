#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
#include <bits/stdc++.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    numSubred = 1;

    // Que los encabezados cubran todo el espacio disponible
    ui->tablaMascaras->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tablaMascaras->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tablaMascaras->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tablaMascaras->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);

    // Que los encabezados cubran todo el espacio disponible
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Stretch);
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);
    ui->tablaSubRedes->horizontalHeader()->setSectionResizeMode(6, QHeaderView::Stretch);

    // La cantidad de sub redes debe estar habilitada si se selecciona ese método
    // La posibilidad de agregar subredes con n hosts solo se activa si está seleccionado el método VLSM
    if(ui->RB_Subredes->isChecked()) {
        // Método sub redes
        ui->SB_CantidadRedes->setEnabled(true);
        ui->SB_CantidadHosts->setEnabled(false);
        ui->Btn_Agregar->setEnabled(false);
    } else if(ui->RB_Hosts->isChecked()) {
        // Método VLSM
        ui->SB_CantidadRedes->setEnabled(false);
        ui->SB_CantidadHosts->setEnabled(true);
        ui->Btn_Agregar->setEnabled(true);
    }

    ui->Btc_Calcular->setStyleSheet("color: rgb(150, 150, 150); background-color: rgb(255, 255, 200); border: 1px solid black;");
    ui->Btc_Calcular->setEnabled(false);

    // Cambio de color según la regex
    connect(ui->LE_IP, &QLineEdit::textChanged, this, [=](const QString &text){
        QRegularExpression patronIP("^(?:25[0-5]|2[0-4]\\d|1\\d{2}|[1-9]?\\d)(?:\\.(?:25[0-5]|2[0-4]\\d|1\\d{2}|[1-9]?\\d)){3}$");
        QRegularExpressionMatch match = patronIP.match(text);
        if(match.hasMatch()) {
            // IP válida
            ui->LE_IP->setStyleSheet("color: rgb(0, 255, 0);");
            ui->Btc_Calcular->setEnabled(true);
            ui->Btc_Calcular->setStyleSheet("color: rgb(0, 0, 0); background-color: rgb(255, 255, 127); border: 1px solid black;");
        } else {
            // No dejarlo calcular
            ui->LE_IP->setStyleSheet("color: rgb(255, 0, 0);");
            ui->Btc_Calcular->setStyleSheet("color: rgb(150, 150, 150); background-color: rgb(255, 255, 200); border: 1px solid black;");
            ui->Btc_Calcular->setEnabled(false);
        }
    });

    QString aux = "[ " + QString::number(numSubred) + " ]";

    ui->lab_numSubred->setText(aux);

}

MainWindow::~MainWindow()
{
    delete ui;
    // Metodos para calcular las subredes
}



void MainWindow::on_Btc_Calcular_clicked()
{
    // Guardar como variables globales la IP y la mascara
    IP = ui->LE_IP->text();
    mascara = ui->SB_Mascara->text().toInt();

    QString aux;
    int oc = 0;

    // Guardo el valor de cada uno de los octetos
    for (auto i : IP) {
        if (i == '.') {
            octetos[oc++] = aux.toInt();
            aux.clear();
        } else {
            aux += i;
        }
    }
    octetos[oc] = aux.toInt();  // último octeto después del último punto


    //cout << "1: " << octetos[0] << " 2: " << octetos[1] << " 3: " << octetos[2] << " 4:" << octetos[3] << endl;

    // Mandar a llamar el método que este seleccionado
    if(ui->RB_Subredes->isChecked()) {
        subRedes = ui->SB_CantidadRedes->text().toInt();
        calculoSubredes(mascara, subRedes);
    } else if(ui->RB_Hosts->isChecked()) {
        calculoVLSM(mascara, hosts);
    }
}

// Cambiar el color de la IP según si es válida o no
void MainWindow::on_LE_IP_textChanged(const QString &arg1)
{
    QRegularExpression patronIP("^(?:25[0-5]|2[0-4]\\d|1\\d{2}|[1-9]?\\d)(?:\\.(?:25[0-5]|2[0-4]\\d|1\\d{2}|[1-9]?\\d)){3}$");
    QRegularExpressionMatch match = patronIP.match(arg1);

    if(match.hasMatch()) {
        // IP válida
        ui->LE_IP->setStyleSheet("color: rgb(0, 255, 0);");
    } else {
        // No dejarlo calcular
        ui->LE_IP->setStyleSheet("color: rgb(255, 0, 0);");
    }

}

// Habilitar/Deshabilitar según que método este seleccionado
void MainWindow::on_RB_Hosts_toggled(bool checked)
{
    if(checked) {
        ui->SB_CantidadRedes->setEnabled(false);
        ui->SB_CantidadHosts->setEnabled(true);
        ui->Btn_Agregar->setEnabled(true);
    } else {
        ui->SB_CantidadRedes->setEnabled(true);
        ui->SB_CantidadHosts->setEnabled(false);
        ui->Btn_Agregar->setEnabled(false);
    }
}

// Habilitar/Deshabilitar según que método este seleccionado
void MainWindow::on_RB_Subredes_toggled(bool checked)
{
    if(checked) {
        ui->SB_CantidadRedes->setEnabled(true);
        ui->SB_CantidadHosts->setEnabled(false);
        ui->Btn_Agregar->setEnabled(false);
    } else {
        ui->SB_CantidadRedes->setEnabled(false);
        ui->SB_CantidadHosts->setEnabled(true);
        ui->Btn_Agregar->setEnabled(true);
    }
}

// Cálculo en funcion de subredes
void MainWindow::calculoSubredes(int mascara, int subRedes)
{
    // 1. Buscar un numero N tal que 2^N - 2 sea mayor a las subredes solicitadas (subRedes)
    int N=1;
    while(pow(2,N) - 2 < subRedes) {
        N++;
    }

    // 2. Añadir ese número N a la mascara natural (bits prestados) automaticamente se hace el calculo de la mascara decimal
    mascara += N;

    // Método para calcular la máscara decimal según la recortada
    QString mascaraDec = mascaraDecimal(mascara);

    ui->tablaMascaras->setColumnCount(2);
    ui->tablaMascaras->setRowCount(1);
    ui->tablaMascaras->setItem(0, 0, new QTableWidgetItem(mascaraDec));
    ui->tablaMascaras->setItem(0, 1, new QTableWidgetItem("/" + QString::number(mascara)));

    // 3. Obtener el salto
    int salto = pow(2, 32-mascara); // Este será el rango de cada subred

    // 4. Llenar con los valores dicha tabla
    ui->tablaSubRedes->setColumnCount(7);
    ui->tablaSubRedes->setRowCount(subRedes);

    QString ips;

    //cout << (mascara-N) << endl;

    switch((mascara-N)/8) {
    case 0:
        // No se pueden subnetear con mascaras menores a 8
        break;


    case 1:
        ips = QString::number(octetos[0]) + ".";
        break;


    case 2:
        ips = QString::number(octetos[0]) + "." + QString::number(octetos[1]) + ".";
        break;


    case 3:
        ips = QString::number(octetos[0]) + "." + QString::number(octetos[1]) + "." + QString::number(octetos[2]) + ".";
        break;


    default:
        // Error
        break;


    }

    //int aux = 0;

    for(int i=0; i < subRedes; i++) {
        ui->tablaSubRedes->setItem(i, 0, new QTableWidgetItem(avance(octetos, 0)));
        ips = avance(octetos, 1);//octetos[3] += 1;
        ui->tablaSubRedes->setItem(i, 1, new QTableWidgetItem(ips));
        ips = avance(octetos, salto - 3);//octetos[3] += salto - 3;
        ui->tablaSubRedes->setItem(i, 2, new QTableWidgetItem(ips));
        ips = avance(octetos, 1);//octetos[3] += 1;
        ui->tablaSubRedes->setItem(i, 3, new QTableWidgetItem(ips));
        ips = avance(octetos, 1);//octetos[3] += 1;
    }

    // Notas: Solo falta definir que no se pase de la cantidad disponible

    // El octeto o octetos en los que te puedes mover, se definen en base 255 menos los
    // hosts que puede almacenar, no puede empezar en un numero mayor.

}

// Cálculo en función de nodos
void MainWindow::calculoVLSM(int mascara, vector<pair<int, int>> hosts)
{
    // 1. Ordenar de mayor a menor las subredes solicitadas (guardadas en hosts)
    sort(hosts.rbegin(), hosts.rend());

    //cout << hosts[hosts.size()-1] << endl;

    // 2. Para cada subred buscar un número N donde 2^N - 2 sea mayor a los hosts solicitados
    for(auto &h: hosts) {
        int N=1;
        while(pow(2,N) - 2 < h.first) {
            N++;
        }
        h.second = N;
    }

    // 3. Guardar el salto en función del número N calculado
    vector<int> saltos;

    for(auto h: hosts) {
        saltos.push_back(pow(2, h.second) - 2);
        //cout << h.second << endl;
    }

    // 4. Calcular las máscaras naturales (Podemos irlas añadiendo a la tabla)
    ui->tablaMascaras->setColumnCount(2);
    ui->tablaMascaras->setRowCount(hosts.size());

    int ren = 0;

    for(auto h: hosts) {  
        ui->tablaMascaras->setItem(ren, 0, new QTableWidgetItem(mascaraDecimal(32-h.second)));
        ui->tablaMascaras->setItem(ren++, 1, new QTableWidgetItem(QString::number(32-h.second)));
    }

    // 5. Empezar a insertar los datos en la tabla
    ui->tablaSubRedes->setColumnCount(7);
    ui->tablaSubRedes->setRowCount(hosts.size());

    QString ips;

    //cout << (mascara) << endl;

    switch((mascara)/8) {
    case 0:
        // No se pueden subnetear con mascaras menores a 8
        break;


    case 1:
        ips = QString::number(octetos[0]) + ".";
        break;


    case 2:
        ips = QString::number(octetos[0]) + "." + QString::number(octetos[1]) + ".";
        break;


    case 3:
        ips = QString::number(octetos[0]) + "." + QString::number(octetos[1]) + "." + QString::number(octetos[2]) + ".";
        break;


    default:
        // Error
        break;
    }

    int i=0;
    for(auto h: hosts) {
        ui->tablaSubRedes->setItem(i, 0, new QTableWidgetItem(avance(octetos, 0)));
        ips = avance(octetos, 1);
        ui->tablaSubRedes->setItem(i, 1, new QTableWidgetItem(ips));
        //cout << "salto: " << saltos[i] << endl;
        //cout << saltos[i] << endl;
        ips = avance(octetos, (saltos[i] - 1)); //octetos[3] += saltos[i] - 1;
        //cout << "octeto: " << octetos[3];
        ui->tablaSubRedes->setItem(i, 2, new QTableWidgetItem(ips));
        ips = avance(octetos, 1); //octetos[3] += 1;
        ui->tablaSubRedes->setItem(i, 3, new QTableWidgetItem(ips));
        ips = avance(octetos, 1); //octetos[3] += 1;
        ui->tablaSubRedes->setItem(i, 4, new QTableWidgetItem(QString::number(saltos[i])));
        ui->tablaSubRedes->setItem(i, 5, new QTableWidgetItem(QString::number(h.first)));
        ui->tablaSubRedes->setItem(i, 6, new QTableWidgetItem(QString::number(saltos[i] - h.first)));
        i++;
    }


    // Notas: Hay métodos similares que se usan en ambos métodos
    // lo ideal es tenerlos como métodos y simplemente llamarlos
    // eventualmente, en una limpieza de código así se hará

    // Ya se mueven correctamente los octetos, falta validar que
    // si quepan las subredes solicitadas

}

// Agregar a un arreglo los nodos solicitados
void MainWindow::on_Btn_Agregar_clicked()
{
    hosts.push_back({ui->SB_CantidadHosts->text().toInt(),0});
    QString aux = "[ " + QString::number(++numSubred) + " ]";
    ui->lab_numSubred->setText(aux);

    //cout << numSubred - 2 << ": " << hosts[numSubred-2] << endl;
}

QString MainWindow::mascaraDecimal(int mascara)
{
    QString mascaraDec;
    int octEnteros = mascara/8;
    int octMedios = mascara%8;
    int octNulos = 4-(octEnteros+1);

    //cout << octEnteros << octMedios << octNulos << endl;

    for(int i=0; i < octEnteros; i++) {
        mascaraDec += "255";
        if(i != 3) mascaraDec += ".";
    }

    int num = 0;
    int pot = 7;
    for(int i=0; i < octMedios; i++) {
        num += pow(2, pot--);
    }

    mascaraDec += QString::number(num);

    if(octNulos) mascaraDec += ".";

    for(int i=0; i < octNulos; i++) {
        mascaraDec += "0";
        if(i == octNulos-1) mascaraDec += ".";
    }

    return mascaraDec;
}

QString MainWindow::avance(int octetos[4], int avance)
{
    int ajuste = avance % 256;
    int avance2 = avance / 256;

    int ajuste3 = avance2 % 256;
    int avance3 = avance2 / 256;

    int ajuste4 = avance3 % 256;
    //int avance4 = avance3 / 256;

    if(octetos[3] + avance > 255) {
        //cout << "Entra a l ajuste mal";
        //ajuste = octetos[3] + avance - 255;
        if(octetos[3] + ajuste > 255) {
            octetos[3] = octetos[3] + ajuste - 256;
            avance2++;
            ajuste3 = avance2 % 256;
            avance3 = avance2 / 256;
        } else {
            octetos[3] += ajuste;
        }
        if(octetos[2] + avance2  > 255) {
            if(octetos[2] + ajuste3  > 255) {
                octetos[2] = octetos[2] + ajuste3 - 256;
                avance3++;
                ajuste4 = avance3 % 256;
            } else {
                octetos[2] += ajuste3;
            }
            if(octetos[1] + 1 > 255) {
                cout << "Clase de error" << endl;
            } else {
                //octetos[1]++;
                if(octetos[1] + ajuste4 > 255) {
                    octetos[1] = octetos[1] + ajuste4 - 256;
                    // Error, el segundo octeto no puedo avanzar mas alla de 255
                } else {
                    octetos[1] += ajuste4;
                }
            }
        } else {
            octetos[2] += avance2;
        }
    } else {
        octetos[3] += avance;
    }

    return QString::number(octetos[0]) + "." + QString::number(octetos[1]) + "." + QString::number(octetos[2]) + "." + QString::number(octetos[3]);
}


void MainWindow::on_Btc_Calcular_2_clicked()
{
    // Limpia IP y mascara
    ui->LE_IP->setText("");
    ui->SB_Mascara->setValue(8);

    // Limpia las cantidades
    ui->SB_CantidadRedes->setValue(0);
    ui->SB_CantidadHosts->setValue(0);
    numSubred = 1;
    ui->lab_numSubred->setText("[ " + QString::number(numSubred) + " ]");

    // Limpiar las tablas
    ui->tablaMascaras->setRowCount(0);
    ui->tablaMascaras->clearContents();
    ui->tablaSubRedes->setRowCount(0);
    ui->tablaSubRedes->clearContents();

    // Limpiar el vector de hosts y variables globales;
    hosts.clear();
    subRedes = 0;
    IP = "";
    mascara = 0;
}

