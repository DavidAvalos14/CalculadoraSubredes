#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Redes o hosts segun sea el metodo
    vector<pair<int, int>> hosts;
    int subRedes;
    int numSubred;

    // Variables globales
    QString IP;
    int mascara;
    int octetos[4];


private slots:

    void on_Btc_Calcular_clicked();

    void on_LE_IP_textChanged(const QString &arg1);

    void on_RB_Hosts_toggled(bool checked);

    void on_RB_Subredes_toggled(bool checked);

    void calculoSubredes(int mascara, int subRedes);

    void calculoVLSM(QString IP, int mascara, vector<pair<int, int>> hosts);

    void on_Btn_Agregar_clicked();

    QString mascaraDecimal(int mascara);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
