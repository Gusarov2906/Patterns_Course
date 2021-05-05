#include "OpenRoundBracketReplacing.h"

int OpenRoundBracketReplacing::interpret(QString *context)
{
    int size = context->size();
    *context = context->replace("( ", "(");
    return size - context->size();
}
