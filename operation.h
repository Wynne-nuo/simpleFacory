#ifndef OPERATION_H
#define OPERATION_H

#include <QObject>

class Operation : public QObject
{
    Q_OBJECT
public:
    explicit Operation(QObject *parent = nullptr);
    virtual double getResult();
    void setNumber(double, double);
    double m_dNumberA;
    double m_dNumberB;
signals:
public slots:
};

#endif // OPERATION_H
