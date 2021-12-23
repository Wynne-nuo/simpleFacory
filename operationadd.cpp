#include "operationadd.h"
#include <QDebug>

OperationAdd::OperationAdd()
{
    qDebug()<<"111";
}

double OperationAdd::getResult()
{
    qDebug()<<"进入加法算法"<<"A = "<<m_dNumberA<<"B = "<<m_dNumberB;
    return m_dNumberA + m_dNumberB;
}
