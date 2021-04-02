#include "mainwindow.h"

#include <QApplication>
#include <QtGui>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QGraphicsView w;
    QGraphicsScene *scene = new QGraphicsScene(0, 0, 300, 300, &w);
    scene->setBackgroundBrush(Qt::blue);
    scene->addText("Hello World!");

    w.setScene(scene);

    w.show();

    return a.exec();
}
