#include "QuotationMarksReplacing.h"
#include <QDebug>

int QuotationMarksReplacing::interpret(QString *context)
{
    //int count = 0;
    bool isEven = false;
    QString tmp;
    tmp = *context;
    while(context->indexOf("\"") != -1)
    {
        if (isEven)
        {
           *context = context->replace((*context).indexOf("\""), 1, "»");
        }
        else
        {
            *context = context->replace((*context).indexOf("\""), 1, "«");
        }
        isEven = !isEven;
        //count++;
    }
    return 0;
}

