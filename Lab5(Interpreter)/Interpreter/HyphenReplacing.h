#pragma once
#include "IReplacing.h"

class HyphenReplacing : public IReplacing
{
public:
    HyphenReplacing(){};
    int interpret(QString* context);
};

