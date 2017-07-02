#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "global.h"
#include "dialogmat.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnReal_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Impedence);
   // this->ui->renderArea->setBackgroundColor(QColor (0,0,255));
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnImaginary_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Admittance);
   // this->ui->renderArea->setBackgroundColor(QColor (0,255,0));
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnSuperimpose_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Superimpose);
   // this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}



void MainWindow::on_pushButton_2_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Hide);
    this->ui->renderArea->repaint();
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{

    points[0].setX(arg1);
    this->ui->renderArea->flag[0]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{


    points[0].setY(arg1);
    this->ui->renderArea->flag[0]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{

    points[1].setX(arg1);
    this->ui->renderArea->flag[1]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_4_valueChanged(double arg1)
{

    points[1].setY(arg1);
    this->ui->renderArea->flag[1]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_5_valueChanged(double arg1)
{

    points[2].setX(arg1);
    this->ui->renderArea->flag[2]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_6_valueChanged(double arg1)
{

    points[2].setY(arg1);
    this->ui->renderArea->flag[2]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_7_valueChanged(double arg1)
{

    points[3].setX(arg1);
    this->ui->renderArea->flag[3]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_doubleSpinBox_8_valueChanged(double arg1)
{

    points[3].setY(arg1);
    this->ui->renderArea->flag[3]= true;
    this->ui->renderArea->repaint();


}


void MainWindow::on_rs_valueChanged(double arg1)
{
    this->ui->renderArea->Rs = arg1/50;
}

void MainWindow::on_rp_valueChanged(double arg1)
{
    this->ui->renderArea->Rp = arg1/50;
}

void MainWindow::on_frequency_valueChanged(double arg1)
{
    this->ui->renderArea->f = arg1;
}

void MainWindow::on_pushButton_3_clicked()
{
    dialogmat mat;
     mat.setModal(true);
     mat.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->ui->renderArea->flag[4]= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_X1L_valueChanged(double arg1)
{
    this->ui->renderArea->flag[5] = true;
    this->ui->renderArea->X1L = arg1;
    this->ui->renderArea->repaint();
    this->ui->renderArea->flag[5] = false;
}

void MainWindow::on_X2L_valueChanged(double arg1)
{
    this->ui->renderArea->flag[5] = true;
    this->ui->renderArea->X2L = arg1;
    this->ui->renderArea->repaint();
    this->ui->renderArea->flag[5] = false;
}

void MainWindow::on_Zinput_valueChanged(double arg1)
{
    this->ui->renderArea->Zin2.setX(arg1/50);
    this->ui->renderArea->flag[6] = true;
    if(this->ui->renderArea->flag[7]) this->ui->renderArea->repaint();
}

void MainWindow::on_ZinputY_valueChanged(double arg1)
{
    this->ui->renderArea->Zin2.setY(arg1/50);
    this->ui->renderArea->flag[7] = true;
    this->ui->renderArea->repaint();

}

void MainWindow::on_frequency2_valueChanged(double arg1)
{
    this->ui->renderArea->w = arg1;//*pow(10, 9);

}

void MainWindow::on_Inductance_valueChanged(double arg1)
{
    this->ui->renderArea->Lin = arg1;
    this->ui->renderArea->Ztemp.setY(((this->ui->renderArea->w)*arg1)/double(50));
    this->ui->renderArea->Ztemp.setX(double(1));
    this->ui->renderArea->flag[8] = true;
    this->ui->renderArea->repaint();

    if(arg1 >= this->ui->renderArea->L) {
        this->ui->renderArea->flag[9] = true;
        QMessageBox::information(0, "Stop", "Desired L value reached!"
                                                                            "Use the C tuner to proceed!");

}
}


void MainWindow::on_Capacitance_valueChanged(double arg1)
{
    if(this->ui->renderArea->flag[9]) {
        this->ui->renderArea->flag[10] = true;
        this->ui->renderArea->Cin = arg1;
        double w = this->ui->renderArea->w;
        double L = this->ui->renderArea->L;
        double y = 50*(((-w*L)/(2500 + w*w*L*L)) + w*arg1);
        this->ui->renderArea->Ytemp.setY(y);
        this->ui->renderArea->repaint();

    }
    else QMessageBox::information(0, "Error!", "Use the Inductance Tuner!");

        if(arg1 >= this->ui->renderArea->C) QMessageBox::information(0, "Stop", "Desired C value reached!");

}

void MainWindow::on_btn_path_clicked()
{
    this->ui->renderArea->flag[12] = true;
    this->ui->renderArea->repaint();
    this->ui->Lvalue->setText( QString::number(this->ui->renderArea->L));
    this->ui->Cvalue->setText( QString::number(this->ui->renderArea->C));
    this->ui->renderArea->flag[12] = false;
}

void MainWindow::on_pathButton_clicked()
{
    this->ui->renderArea->Val=this->ui->LCvalue->value();
    this->ui->renderArea->w=this->ui->frequencyLC->value();
    if(this->ui->cSeriesRadioButton->isChecked()){
        this->ui->renderArea->flag[13]=true;
    }
    else if(this->ui->cShuntRadioButton->isChecked()){
        this->ui->renderArea->flag[14]=true;
    }
    else if(this->ui->lSeriesRadioButton->isChecked()){
        this->ui->renderArea->flag[15]=true;
    }
    else if(this->ui->lShuntRadioButton->isChecked()){
        this->ui->renderArea->flag[16]=true;
    }
    else
        QMessageBox::information(0,"Error!","Unselected Arguments");
    this->ui->renderArea->flag[13]=false;
    this->ui->renderArea->flag[14]=false;
    this->ui->renderArea->flag[15]=false;
    this->ui->renderArea->flag[16]=false;
}



void MainWindow::on_pathStopButton_clicked()
{
    this->ui->renderArea->repaint();
}

void MainWindow::on_cSeriesRadioButton_clicked()
{
    this->ui->LClabel->setText("Capacitance Value:");
}

void MainWindow::on_cShuntRadioButton_clicked()
{
    this->ui->LClabel->setText("Capacitance Value:");
}


void MainWindow::on_lSeriesRadioButton_clicked()
{
    this->ui->LClabel->setText("Inductance Value:");
}


void MainWindow::on_lShuntRadioButton_clicked()
{
    this->ui->LClabel->setText("Inductance Value:");
}
