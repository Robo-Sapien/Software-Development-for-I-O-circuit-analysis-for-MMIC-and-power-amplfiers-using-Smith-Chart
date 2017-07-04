#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Astroid);
    this->ui->renderArea->setBackgroundColor(QColor (0,0,255));
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape( RenderArea::Cycloid);
    this->ui->renderArea->setBackgroundColor(QColor (0,255,0));
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHuygensCycloid_clicked()
{
    this->ui->renderArea->setShape( RenderArea::HuygensCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::blue);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnHypoCycloid_clicked()
{
     this->ui->renderArea->setShape( RenderArea::HypoCycloid);
    this->ui->renderArea->setBackgroundColor(Qt::yellow);
    this->ui->renderArea->repaint();
}
