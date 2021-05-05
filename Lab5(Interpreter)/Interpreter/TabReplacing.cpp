#include "TabReplacing.h"

int TabReplacing::interpret(QString *context)
{
    *context = context->replace("\t", " ");
    return 0;
}
