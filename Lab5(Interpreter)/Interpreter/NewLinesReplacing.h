#pragma once
#include "IReplacing.h"

class NewLinesReplacing : public IReplacing
{
public:
    NewLinesReplacing(){};
    int interpret(QString* context);
};

