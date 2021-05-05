#include "CloseRoundBracketReplacing.h"

int CloseRoundBracketReplacing::interpret(QString* context)
{
    int size = context->size();
    *context = context->replace(" )", ")");
    return size - context->size();
}
