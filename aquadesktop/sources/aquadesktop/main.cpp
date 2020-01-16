#include <QApplication>
#include "mainwindow.h"
int main (int argc, char *argv[])
{
    QApplication app(argc ,argv);
    MainWindow mainWindow;
    mainWindow.setGeometry(50,50,400,600);
    mainWindow.show();
    return app.exec();
}
//xywh
