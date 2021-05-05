#include "HyphenReplacing.h"

int HyphenReplacing::interpret(QString *context)
{
    int size = context->size();
    *context = context->replace("-", "—");
    return size - context->size();
}
