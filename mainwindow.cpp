#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
#include <bits/stdc++.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

    // Cambio de color según la regex
    connect(ui->LE_IP, &QLineEdit::textChanged, this, [=](const QString &text){
        QRegularExpression patronIP("^(?:25[0-5]|2[0-4]\\d|1\\d{2}|[1-9]?\\d)(?:\\.(?:25[0-5]|2[0-4]\\d|1\\d{2}|[1-9]?\\d)){3}$");
        QRegularExpressionMatch match = patronIP.match(text);

        if(match.hasMatch()) {
            // IP válida
            ui->LE_IP->setStyleSheet("color: rgb(0, 255, 0);");
            ui->Btc_Calcular->setEnabled(true);
        } else {
            // No dejarlo calcular
            ui->LE_IP->setStyleSheet("color: rgb(255, 0, 0);");
            ui->Btc_Calcular->setEnabled(false);
        }
    });

    // Que la mascara sea correcta

}

MainWindow::~MainWindow()
{
    delete ui;
    // Metodos para calcular las subredes
}



void MainWindow::on_Btc_Calcular_clicked()
{
    cout << "Funcionando" << endl;
}

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

void MainWindow::on_RB_Hosts_toggled(bool checked)
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


void MainWindow::on_RB_Subredes_toggled(bool checked)
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

