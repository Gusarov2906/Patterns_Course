#include "DoubleSpaceReplacing.h"

int DoubleSpaceReplacing::interpret(QString *context)
{
    int size = context->size();
    *context = context->replace("  ", " ");
    return size - context->size();
}
