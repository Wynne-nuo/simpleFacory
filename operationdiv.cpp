#include "operationdiv.h"
#include <QMessageBox>
#include <QDebug>
OperationDiv::OperationDiv()
{

}

double OperationDiv::getResult()
{
    qDebug()<<"进入除法算法";
    double result;
    if(m_dNumberB == 0){
        QMessageBox::warning(NULL,"警告框", "除数不能为0,请重新输入",QMessageBox::Yes);
        return -1;
    }else {
        result = m_dNumberA / m_dNumberB;
    }
    return result;
}
