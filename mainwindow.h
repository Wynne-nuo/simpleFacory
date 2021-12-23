#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "operation.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double m_numberA;
    double m_numberB;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
signals:
//    void signal_sendNumber(double, double);
};
#endif // MAINWINDOW_H
