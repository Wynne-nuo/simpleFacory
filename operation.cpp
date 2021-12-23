#include "operation.h"
#include <QDebug>

Operation::Operation(QObject *parent) : QObject(parent)
{
     m_dNumberA = 0;
     m_dNumberB = 0;

}

double Operation::getResult()
{

}

void Operation::setNumber(double numberA, double numberB)
{
    m_dNumberA = numberA;
    m_dNumberB = numberB;
}
