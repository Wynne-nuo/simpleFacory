#include "operationfactory.h"
#include "operationadd.h"
#include "operationsub.h"
#include "operationmul.h"
#include "operationdiv.h"
#include <QDebug>

operationFactory::operationFactory()
{

}

Operation* operationFactory::createOperation(char operation)
{
    qDebug()<<"createOperation中获取符号为："<<operation;

    Operation *oper;
    switch (operation) {
    case '+':{
        qDebug()<<"进入加法运算case";
        oper = new OperationAdd();
        break;}
    case '-':{
        qDebug()<<"进入减法运算case";
        oper = new OPerationSub();
        break;}
    case '*':{
        qDebug()<<"进入乘法运算case";
        oper = new OPerationMul();
        break;}
    case '/':{
        qDebug()<<"进入除法运算case";
        oper = new OperationDiv();
        break;}
    }
    return oper;
}
