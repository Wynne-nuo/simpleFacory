#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operationfactory.h"
#include "operation.h"
#include <QDebug>

class Operation;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//点击计算
void MainWindow::on_pushButton_clicked()
{
    char *content = ui->lineEdit_2->text().toLatin1().data();
    operationFactory operFactory;
    Operation *oper = operFactory.createOperation(content[0]);

    m_numberA = ui->lineEdit->text().toDouble();
    m_numberB = ui->lineEdit_3->text().toDouble();
    oper->setNumber(m_numberA, m_numberB);

    double result = oper->getResult();

    ui->label_5->setText(QString::number(result));
}
