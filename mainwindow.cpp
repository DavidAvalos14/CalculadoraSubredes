#include "mainwindow.h"
#include "ui_mainwindow.h"

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

}

MainWindow::~MainWindow()
{
    delete ui;
}
