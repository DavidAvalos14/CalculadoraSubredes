/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_3;
    QFrame *frame_2;
    QFrame *line;
    QFrame *line_2;
    QRadioButton *RB_Subredes;
    QRadioButton *RB_Hosts;
    QLabel *label;
    QLineEdit *LE_IP;
    QLabel *label_2;
    QSpinBox *SB_Mascara;
    QFrame *frame_3;
    QFrame *line_3;
    QLabel *label_4;
    QSpinBox *SB_CantidadRedes;
    QSpinBox *SB_CantidadHosts;
    QLabel *label_5;
    QLabel *lab_numSubred;
    QPushButton *Btn_Agregar;
    QPushButton *Btc_Calcular;
    QTableWidget *tablaMascaras;
    QTableWidget *tablaSubRedes;
    QPushButton *Btc_Calcular_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 680);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 255, 176);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 800, 50));
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 127);\n"
"border: 2px solid black;"));
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        frame->setLineWidth(2);
        frame->setMidLineWidth(2);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(2, 2, 796, 46));
        label_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 50, 800, 60));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"border: 2px solid black;\n"
""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        line = new QFrame(frame_2);
        line->setObjectName("line");
        line->setGeometry(QRect(400, 0, 3, 30));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(frame_2);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 30, 800, 3));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        RB_Subredes = new QRadioButton(frame_2);
        RB_Subredes->setObjectName("RB_Subredes");
        RB_Subredes->setGeometry(QRect(100, 2, 200, 26));
        RB_Subredes->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        RB_Subredes->setChecked(false);
        RB_Hosts = new QRadioButton(frame_2);
        RB_Hosts->setObjectName("RB_Hosts");
        RB_Hosts->setGeometry(QRect(500, 2, 200, 26));
        RB_Hosts->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        RB_Hosts->setChecked(true);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 33, 150, 24));
        label->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        LE_IP = new QLineEdit(frame_2);
        LE_IP->setObjectName("LE_IP");
        LE_IP->setGeometry(QRect(230, 35, 150, 20));
        LE_IP->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: rgb(248, 255, 176);\n"
"color: rgb(0, 0, 0);"));
        LE_IP->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 33, 150, 24));
        label_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SB_Mascara = new QSpinBox(frame_2);
        SB_Mascara->setObjectName("SB_Mascara");
        SB_Mascara->setEnabled(true);
        SB_Mascara->setGeometry(QRect(610, 33, 150, 24));
        SB_Mascara->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgb(255, 255, 153);\n"
"	border: none;\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    width: 16px;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    width: 16px;\n"
"}\n"
""));
        SB_Mascara->setWrapping(true);
        SB_Mascara->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SB_Mascara->setProperty("showGroupSeparator", QVariant(false));
        SB_Mascara->setMinimum(8);
        SB_Mascara->setMaximum(31);
        SB_Mascara->setValue(24);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 110, 800, 100));
        frame_3->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"background-color: rgb(255, 255, 127);\n"
"color: rgb(0, 0, 0);"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        line_3 = new QFrame(frame_3);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(400, 0, 3, 100));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(68, 38, 120, 24));
        label_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SB_CantidadRedes = new QSpinBox(frame_3);
        SB_CantidadRedes->setObjectName("SB_CantidadRedes");
        SB_CantidadRedes->setGeometry(QRect(212, 38, 100, 24));
        SB_CantidadRedes->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgb(255, 255, 153);\n"
"	border: none;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    width: 16px;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    width: 16px;\n"
"}\n"
""));
        SB_CantidadRedes->setWrapping(true);
        SB_CantidadRedes->setProperty("showGroupSeparator", QVariant(false));
        SB_CantidadHosts = new QSpinBox(frame_3);
        SB_CantidadHosts->setObjectName("SB_CantidadHosts");
        SB_CantidadHosts->setEnabled(true);
        SB_CantidadHosts->setGeometry(QRect(610, 18, 75, 24));
        SB_CantidadHosts->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: rgb(255, 255, 153);\n"
"	border: none;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    width: 16px;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    width: 16px;\n"
"}\n"
""));
        SB_CantidadHosts->setWrapping(true);
        SB_CantidadHosts->setProperty("showGroupSeparator", QVariant(false));
        SB_CantidadHosts->setMinimum(0);
        SB_CantidadHosts->setMaximum(999999999);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(445, 18, 120, 24));
        label_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lab_numSubred = new QLabel(frame_3);
        lab_numSubred->setObjectName("lab_numSubred");
        lab_numSubred->setGeometry(QRect(730, 18, 25, 24));
        lab_numSubred->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(0, 0, 0);"));
        lab_numSubred->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Btn_Agregar = new QPushButton(frame_3);
        Btn_Agregar->setObjectName("Btn_Agregar");
        Btn_Agregar->setEnabled(true);
        Btn_Agregar->setGeometry(QRect(550, 58, 100, 24));
        Btn_Agregar->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color: rgb(248, 255, 176);"));
        Btc_Calcular = new QPushButton(centralwidget);
        Btc_Calcular->setObjectName("Btc_Calcular");
        Btc_Calcular->setGeometry(QRect(300, 220, 200, 24));
        Btc_Calcular->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color: rgb(255, 255, 127);\n"
"color: rgb(0,0,0);\n"
""));
        tablaMascaras = new QTableWidget(centralwidget);
        if (tablaMascaras->columnCount() < 2)
            tablaMascaras->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaMascaras->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaMascaras->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tablaMascaras->rowCount() < 1)
            tablaMascaras->setRowCount(1);
        tablaMascaras->setObjectName("tablaMascaras");
        tablaMascaras->setGeometry(QRect(10, 260, 780, 200));
        tablaMascaras->setTabletTracking(false);
        tablaMascaras->setAcceptDrops(false);
        tablaMascaras->setAutoFillBackground(false);
        tablaMascaras->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: rgb(255, 255, 153); /* mismo amarillo */\n"
"    color: black;\n"
"    font-weight: bold;\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTableWidget { color: black; }\n"
"\n"
""));
        tablaMascaras->setFrameShape(QFrame::Shape::NoFrame);
        tablaMascaras->setFrameShadow(QFrame::Shadow::Plain);
        tablaMascaras->setAlternatingRowColors(false);
        tablaMascaras->setSortingEnabled(false);
        tablaMascaras->setRowCount(1);
        tablaMascaras->setColumnCount(2);
        tablaMascaras->horizontalHeader()->setCascadingSectionResizes(false);
        tablaMascaras->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablaMascaras->horizontalHeader()->setStretchLastSection(false);
        tablaMascaras->verticalHeader()->setCascadingSectionResizes(false);
        tablaMascaras->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablaMascaras->verticalHeader()->setStretchLastSection(false);
        tablaSubRedes = new QTableWidget(centralwidget);
        if (tablaSubRedes->columnCount() < 7)
            tablaSubRedes->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tablaSubRedes->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        if (tablaSubRedes->rowCount() < 1)
            tablaSubRedes->setRowCount(1);
        tablaSubRedes->setObjectName("tablaSubRedes");
        tablaSubRedes->setGeometry(QRect(10, 470, 780, 200));
        tablaSubRedes->setTabletTracking(false);
        tablaSubRedes->setAcceptDrops(false);
        tablaSubRedes->setAutoFillBackground(false);
        tablaSubRedes->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: rgb(255, 255, 153); /* mismo amarillo */\n"
"    color: black;\n"
"    font-weight: bold;\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTableWidget { color: black; }\n"
"\n"
""));
        tablaSubRedes->setFrameShape(QFrame::Shape::NoFrame);
        tablaSubRedes->setFrameShadow(QFrame::Shadow::Plain);
        tablaSubRedes->setAlternatingRowColors(false);
        tablaSubRedes->setSortingEnabled(false);
        tablaSubRedes->setRowCount(1);
        tablaSubRedes->setColumnCount(7);
        tablaSubRedes->horizontalHeader()->setCascadingSectionResizes(false);
        tablaSubRedes->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablaSubRedes->horizontalHeader()->setStretchLastSection(false);
        tablaSubRedes->verticalHeader()->setCascadingSectionResizes(false);
        tablaSubRedes->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablaSubRedes->verticalHeader()->setStretchLastSection(false);
        Btc_Calcular_2 = new QPushButton(centralwidget);
        Btc_Calcular_2->setObjectName("Btc_Calcular_2");
        Btc_Calcular_2->setGeometry(QRect(510, 220, 100, 24));
        Btc_Calcular_2->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"background-color: rgb(255, 255, 127);\n"
"color: rgb(0,0,0);\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CALCULADORA DE SUBREDES", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CALCULADORA DE SUBREDES", nullptr));
        RB_Subredes->setText(QCoreApplication::translate("MainWindow", "POR SUBREDES", nullptr));
        RB_Hosts->setText(QCoreApplication::translate("MainWindow", "POR HOSTS (VLSM)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        LE_IP->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0.0.0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "M\303\241scara de subred: /", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Cantidad:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cantidad:", nullptr));
        lab_numSubred->setText(QCoreApplication::translate("MainWindow", "[1]", nullptr));
        Btn_Agregar->setText(QCoreApplication::translate("MainWindow", "AGREGAR", nullptr));
        Btc_Calcular->setText(QCoreApplication::translate("MainWindow", "CALCULAR", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaMascaras->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "MASCARA DECIMAL", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaMascaras->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "MASCARA RECORTADA", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaSubRedes->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "IP RED", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaSubRedes->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "IP 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaSubRedes->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "IP FINAL", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablaSubRedes->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "IP BROADCAST", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tablaSubRedes->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "HOSTS", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tablaSubRedes->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "USADOS", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tablaSubRedes->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "DESPERDICIO", nullptr));
        Btc_Calcular_2->setText(QCoreApplication::translate("MainWindow", "LIMPIAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
