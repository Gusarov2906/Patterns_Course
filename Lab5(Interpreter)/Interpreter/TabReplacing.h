#pragma once
#include "IReplacing.h"

class TabReplacing : public IReplacing
{
public:
    TabReplacing(){};
    int interpret(QString* context);
};

