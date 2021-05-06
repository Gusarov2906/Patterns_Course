#include "CloseRoundBracketReplacing.h"

int CloseRoundBracketReplacing::interpret(QString* context)
{
    int size = context->size();
    int oldSize;
    do
    {
       oldSize = context->size();
       *context = context->replace(" )", ")");
    }
    while(context->size() != oldSize);
    return size - context->size();
}
