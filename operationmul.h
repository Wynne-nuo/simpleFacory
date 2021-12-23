#ifndef OPERATIONMUL_H
#define OPERATIONMUL_H
#include "operation.h"

class OPerationMul : public Operation
{
public:
    OPerationMul();
    double getResult() override;
};

#endif // OPERATIONMUL_H
