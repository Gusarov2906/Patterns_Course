#include "NewLinesReplacing.h"

int NewLinesReplacing::interpret(QString *context)
{
    int size = context->size();
    int oldSize;
    do
    {
       oldSize = context->size();
       *context = context->replace("\n\n", "\n");
    }
    while(context->size() != oldSize);
    return size - context->size();
}
