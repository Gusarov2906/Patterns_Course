#include "NewLinesReplacing.h"

int NewLinesReplacing::interpret(QString *context)
{
    int size = context->size();
    *context = context->replace("\n\n", "\n");
    return size - context->size();
}
