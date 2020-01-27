#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowIcon(QIcon(global::icon::MAINLOGO));
    this->setWindowTitle("AquaDesktop");




            unBackground = new QLabel(this);
            unpixBackground = new QPixmap("C:/PROGRAMMATION/Connected-Aqua/rcs/pic/vague.jpg");
            unBackground->setPixmap(*unpixBackground);
            unBackground->setGeometry(0,0,400,600);


            wid1 =new QComboBox(this);
            wid1->addItem("gvhbj");
            wid1->addItem("yoyoyoyooy");
            wid1->setGeometry(50,50,50,50);
            wid1->setStyle("windowsxp");





            exit = new QPushButton(QObject::tr("exit"),this);
            exit-> setGeometry(100,100,150,50);
            exit->setToolTip("exit");
            QObject::connect(exit, &QPushButton::clicked, []()->void
            {
                        QSound::play(global::audio::button::HOVER);
            });
            QObject::connect(this->exit,SIGNAL(clicked()),qApp, SLOT(quit()));



}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QSound::play(global::audio::button::HOVER);

}
void MainWindow::btclick()
{


}



MainWindow::~MainWindow() noexcept
{

}
