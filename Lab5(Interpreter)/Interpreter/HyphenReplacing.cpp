#include "HyphenReplacing.h"

int HyphenReplacing::interpret(QString *context)
{
    *context = context->replace("-", "—");
    return 0;
}
