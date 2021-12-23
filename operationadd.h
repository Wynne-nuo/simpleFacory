#ifndef OPERATIONADD_H
#define OPERATIONADD_H
#include "operation.h"


class OperationAdd : public Operation
{
public:
    OperationAdd();
    double getResult() override;


};

#endif // OPERATIONADD_H
