#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLCDNumber>
#include <QPushButton>
#include <QPixmap>
#include <QSound>
#include <QShortcut>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QLabel>
#include <QDebug>
#include "global.h"
#include <QWidget>
#include <QComboBox>



class MainWindow : public QMainWindow
{
    Q_OBJECT
    private :
    QSoundEffect *loop;
    QSoundEffect *hover;
    QLabel *unBackground;
    QPixmap *unpixBackground;
    QPushButton *exit;
    QComboBox *wid1;

    public :
        explicit MainWindow(QWidget *parent = nullptr);
        virtual void keyPressEvent(QKeyEvent *event);
        ~MainWindow() noexcept;




    public slots:
        void btclick();



};

#endif // MAINWINDOW_H
