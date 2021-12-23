#ifndef OPERATIONDIV_H
#define OPERATIONDIV_H
#include "operation.h"


class OperationDiv : public Operation
{
public:
    OperationDiv();
    double getResult() override;
};

#endif // OPERATIONDIV_H
