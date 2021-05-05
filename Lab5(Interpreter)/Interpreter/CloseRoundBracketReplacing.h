#pragma once
#include "IReplacing.h"

class CloseRoundBracketReplacing : public IReplacing
{
public:
    CloseRoundBracketReplacing(){};
    int interpret(QString* context);
};

