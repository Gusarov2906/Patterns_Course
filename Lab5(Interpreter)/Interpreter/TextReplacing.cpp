#include "TextReplacing.h"

int TextReplacing::interpret(QString *context)
{
    int count = 0;
    for(int i = 0; i < this->replacings.size(); i++)
    {
        count += this->replacings[i]->interpret(context);
    }
    return count;
}

TextReplacing::~TextReplacing()
{

}
