#include "operationmul.h"
#include <QDebug>
OPerationMul::OPerationMul()
{

}

double OPerationMul::getResult()
{
    qDebug()<<"进入乘法算法";
    double result;
    result = m_dNumberA * m_dNumberB;
    return result;
}
