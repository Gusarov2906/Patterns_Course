#pragma once
#include "IReplacing.h"
#include "CloseRoundBracketReplacing.h"
#include "OpenRoundBracketReplacing.h"
#include "HyphenReplacing.h"
#include "TabReplacing.h"
#include "NewLinesReplacing.h"
#include "QuotationMarksReplacing.h"
#include "DoubleSpaceReplacing.h"
#include <QVector>

class TextReplacing : public IReplacing
{
public:
    TextReplacing(){};
    QVector<IReplacing*> replacings;
    int interpret(QString* context);
};

