#include "mainwindow.h"
#include <QApplication>
#include <QVector>
#include <QDesktopWidget>
#include "global.h"

QVector<QPointF> points(4);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   w.setFixedSize(1024,700);
   w.showMaximized();
   w.show();

    return a.exec();
}

