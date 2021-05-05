#pragma once
#include "IReplacing.h"
#include <QStringList>

class QuotationMarksReplacing : public IReplacing
{
public:
    QuotationMarksReplacing(){};
    int interpret(QString* context);
};

