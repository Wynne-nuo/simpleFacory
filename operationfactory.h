#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H
#include "operation.h"

#include<QString>

////四种运算符号
//enum OPERATION_STATUS{
//    OPERATION_ADD = 0,
//    OPERATION_SUB,
//    OPERATION_MUL,
//    OPERATION_DIV
//};

class operationFactory
{
public:
    operationFactory();
    Operation* createOperation(char);
};

#endif // OPERATIONFACTORY_H
