/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    RenderArea *renderArea;
    QDoubleSpinBox *frequencyLC;
    QPushButton *pathButton;
    QPushButton *pathStopButton;
    QLabel *label_8;
    QRadioButton *cSeriesRadioButton;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QPushButton *btnImaginary;
    QPushButton *btnReal;
    QPushButton *pushButton_2;
    QPushButton *btnSuperimpose;
    QPushButton *pushButton_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_7;
    QVBoxLayout *verticalLayout_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_8;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *frequency;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *rp;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *rs;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *X2L;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *X1L;
    QDoubleSpinBox *Zinput;
    QDoubleSpinBox *ZinputY;
    QLabel *Cvalue;
    QLabel *Lvalue;
    QDoubleSpinBox *frequency2;
    QDoubleSpinBox *Inductance;
    QPushButton *btn_path;
    QDoubleSpinBox *Capacitance;
    QLabel *label_10;
    QDoubleSpinBox *LCvalue;
    QRadioButton *lSeriesRadioButton;
    QRadioButton *lShuntRadioButton;
    QRadioButton *cShuntRadioButton;
    QLabel *LClabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1094, 628);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));

        gridLayout->addWidget(renderArea, 0, 0, 14, 1);

        frequencyLC = new QDoubleSpinBox(centralWidget);
        frequencyLC->setObjectName(QStringLiteral("frequencyLC"));

        gridLayout->addWidget(frequencyLC, 7, 5, 1, 1);

        pathButton = new QPushButton(centralWidget);
        pathButton->setObjectName(QStringLiteral("pathButton"));

        gridLayout->addWidget(pathButton, 8, 5, 1, 1);

        pathStopButton = new QPushButton(centralWidget);
        pathStopButton->setObjectName(QStringLiteral("pathStopButton"));

        gridLayout->addWidget(pathStopButton, 9, 5, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 6, 5, 1, 1);

        cSeriesRadioButton = new QRadioButton(centralWidget);
        cSeriesRadioButton->setObjectName(QStringLiteral("cSeriesRadioButton"));

        gridLayout->addWidget(cSeriesRadioButton, 0, 5, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnImaginary = new QPushButton(centralWidget);
        btnImaginary->setObjectName(QStringLiteral("btnImaginary"));

        verticalLayout->addWidget(btnImaginary);

        btnReal = new QPushButton(centralWidget);
        btnReal->setObjectName(QStringLiteral("btnReal"));

        verticalLayout->addWidget(btnReal);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        btnSuperimpose = new QPushButton(centralWidget);
        btnSuperimpose->setObjectName(QStringLiteral("btnSuperimpose"));

        verticalLayout->addWidget(btnSuperimpose);


        verticalLayout_6->addLayout(verticalLayout);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_6->addWidget(pushButton_3);


        verticalLayout_7->addLayout(verticalLayout_6);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_7->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox);

        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox_3);

        doubleSpinBox_5 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox_5);

        doubleSpinBox_7 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setMinimum(-99);

        verticalLayout_2->addWidget(doubleSpinBox_7);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_2);

        doubleSpinBox_4 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_4);

        doubleSpinBox_6 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_6);

        doubleSpinBox_8 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setMinimum(-99);

        verticalLayout_3->addWidget(doubleSpinBox_8);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        frequency = new QDoubleSpinBox(centralWidget);
        frequency->setObjectName(QStringLiteral("frequency"));

        horizontalLayout_3->addWidget(frequency);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        rp = new QDoubleSpinBox(centralWidget);
        rp->setObjectName(QStringLiteral("rp"));

        horizontalLayout_4->addWidget(rp);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        rs = new QDoubleSpinBox(centralWidget);
        rs->setObjectName(QStringLiteral("rs"));

        horizontalLayout_2->addWidget(rs);


        verticalLayout_5->addLayout(horizontalLayout_2);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_5->addWidget(pushButton_4);


        horizontalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        X2L = new QDoubleSpinBox(centralWidget);
        X2L->setObjectName(QStringLiteral("X2L"));
        X2L->setMinimum(-99);

        horizontalLayout_5->addWidget(X2L);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        X1L = new QDoubleSpinBox(centralWidget);
        X1L->setObjectName(QStringLiteral("X1L"));
        X1L->setMinimum(-99);

        horizontalLayout_6->addWidget(X1L);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_7, 0, 1, 13, 1);

        Zinput = new QDoubleSpinBox(centralWidget);
        Zinput->setObjectName(QStringLiteral("Zinput"));
        Zinput->setMinimum(-99);
        Zinput->setMaximum(9999);

        gridLayout->addWidget(Zinput, 0, 2, 1, 1);

        ZinputY = new QDoubleSpinBox(centralWidget);
        ZinputY->setObjectName(QStringLiteral("ZinputY"));
        ZinputY->setMaximum(9999);

        gridLayout->addWidget(ZinputY, 0, 4, 1, 1);

        Cvalue = new QLabel(centralWidget);
        Cvalue->setObjectName(QStringLiteral("Cvalue"));

        gridLayout->addWidget(Cvalue, 12, 4, 1, 1);

        Lvalue = new QLabel(centralWidget);
        Lvalue->setObjectName(QStringLiteral("Lvalue"));

        gridLayout->addWidget(Lvalue, 12, 3, 1, 1);

        frequency2 = new QDoubleSpinBox(centralWidget);
        frequency2->setObjectName(QStringLiteral("frequency2"));
        frequency2->setMaximum(9999);

        gridLayout->addWidget(frequency2, 13, 2, 1, 1);

        Inductance = new QDoubleSpinBox(centralWidget);
        Inductance->setObjectName(QStringLiteral("Inductance"));
        Inductance->setDecimals(10);
        Inductance->setMinimum(0);
        Inductance->setMaximum(99.99);
        Inductance->setSingleStep(0.1);

        gridLayout->addWidget(Inductance, 13, 4, 1, 1);

        btn_path = new QPushButton(centralWidget);
        btn_path->setObjectName(QStringLiteral("btn_path"));

        gridLayout->addWidget(btn_path, 13, 3, 1, 1);

        Capacitance = new QDoubleSpinBox(centralWidget);
        Capacitance->setObjectName(QStringLiteral("Capacitance"));
        Capacitance->setDecimals(10);
        Capacitance->setSingleStep(1e-5);

        gridLayout->addWidget(Capacitance, 13, 5, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 10, 5, 1, 1);

        LCvalue = new QDoubleSpinBox(centralWidget);
        LCvalue->setObjectName(QStringLiteral("LCvalue"));

        gridLayout->addWidget(LCvalue, 5, 5, 1, 1);

        lSeriesRadioButton = new QRadioButton(centralWidget);
        lSeriesRadioButton->setObjectName(QStringLiteral("lSeriesRadioButton"));

        gridLayout->addWidget(lSeriesRadioButton, 2, 5, 1, 1);

        lShuntRadioButton = new QRadioButton(centralWidget);
        lShuntRadioButton->setObjectName(QStringLiteral("lShuntRadioButton"));

        gridLayout->addWidget(lShuntRadioButton, 3, 5, 1, 1);

        cShuntRadioButton = new QRadioButton(centralWidget);
        cShuntRadioButton->setObjectName(QStringLiteral("cShuntRadioButton"));

        gridLayout->addWidget(cShuntRadioButton, 1, 5, 1, 1);

        LClabel = new QLabel(centralWidget);
        LClabel->setObjectName(QStringLiteral("LClabel"));

        gridLayout->addWidget(LClabel, 4, 5, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        renderArea->raise();
        Zinput->raise();
        ZinputY->raise();
        frequency2->raise();
        Inductance->raise();
        Lvalue->raise();
        Cvalue->raise();
        Capacitance->raise();
        btn_path->raise();
        cSeriesRadioButton->raise();
        lSeriesRadioButton->raise();
        cShuntRadioButton->raise();
        lShuntRadioButton->raise();
        pathStopButton->raise();
        pathButton->raise();
        frequencyLC->raise();
        LCvalue->raise();
        label_8->raise();
        LClabel->raise();
        label_10->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pathButton->setText(QApplication::translate("MainWindow", "Get Path", Q_NULLPTR));
        pathStopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Frequency:", Q_NULLPTR));
        cSeriesRadioButton->setText(QApplication::translate("MainWindow", "C series", Q_NULLPTR));
        btnImaginary->setText(QApplication::translate("MainWindow", "Admittance", Q_NULLPTR));
        btnReal->setText(QApplication::translate("MainWindow", "Impedence", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Hide", Q_NULLPTR));
        btnSuperimpose->setText(QApplication::translate("MainWindow", "Superimpose", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Matrix", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "                                         Plot Points  &  Tuner", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "                                    Impedence Matching Tuner", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Frequency", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Rp", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Rs", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Ok", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "X2L", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "X1L", Q_NULLPTR));
        Cvalue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        Lvalue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        btn_path->setText(QApplication::translate("MainWindow", "Get Path", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Final Point:", Q_NULLPTR));
        lSeriesRadioButton->setText(QApplication::translate("MainWindow", "L series", Q_NULLPTR));
        lShuntRadioButton->setText(QApplication::translate("MainWindow", "L shunt", Q_NULLPTR));
        cShuntRadioButton->setText(QApplication::translate("MainWindow", "C shunt", Q_NULLPTR));
        LClabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
