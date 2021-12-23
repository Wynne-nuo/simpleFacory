#include "operationsub.h"
#include <QDebug>
OPerationSub::OPerationSub()
{

}

double OPerationSub::getResult()
{
    qDebug()<<"进入减法算法";
    double result;
    result = m_dNumberA - m_dNumberB;
    return result;
}
