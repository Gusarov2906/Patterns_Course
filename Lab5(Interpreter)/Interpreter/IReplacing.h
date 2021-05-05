#ifndef IREPLACING_H
#define IREPLACING_H

#include <QString>

class IReplacing
{
public:
    virtual int interpret(QString* context) = 0;
};

#endif // IREPLACING_H
