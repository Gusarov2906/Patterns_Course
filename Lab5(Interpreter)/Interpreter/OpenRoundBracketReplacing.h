#pragma once
#include "IReplacing.h"

class OpenRoundBracketReplacing : public IReplacing
{
public:
    OpenRoundBracketReplacing(){};
    int interpret(QString* context);
};

