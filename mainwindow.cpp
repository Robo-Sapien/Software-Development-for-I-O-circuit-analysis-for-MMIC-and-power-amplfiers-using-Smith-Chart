#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    this->ui->renderArea->Rs = arg1;
}

void MainWindow::on_rp_valueChanged(double arg1)
{
    this->ui->renderArea->Rp = arg1;
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
    this->ui->renderArea->iFlag= true;
    this->ui->renderArea->repaint();


}

void MainWindow::on_X1L_valueChanged(double arg1)
{
    this->ui->renderArea->tFlag = true;
    this->ui->renderArea->X1L = arg1;
    this->ui->renderArea->repaint();
    this->ui->renderArea->tFlag = false;
}

void MainWindow::on_X2L_valueChanged(double arg1)
{
    this->ui->renderArea->tFlag = true;
    this->ui->renderArea->X2L = arg1;
    this->ui->renderArea->repaint();
    this->ui->renderArea->tFlag = false;
}
