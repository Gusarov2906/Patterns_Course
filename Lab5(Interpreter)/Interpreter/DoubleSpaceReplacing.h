#pragma once
#include "IReplacing.h"

class DoubleSpaceReplacing : public IReplacing
{
public:
    DoubleSpaceReplacing(){};
    int interpret(QString* context);
};

