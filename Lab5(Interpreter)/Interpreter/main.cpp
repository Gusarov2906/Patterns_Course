#include <QCoreApplication>
#include "TextReplacing.h"
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    TextReplacing textReplacing = TextReplacing();
    textReplacing.replacings.append(new CloseRoundBracketReplacing());
    textReplacing.replacings.append(new OpenRoundBracketReplacing());
    textReplacing.replacings.append(new TabReplacing());
    textReplacing.replacings.append(new DoubleSpaceReplacing());
    textReplacing.replacings.append(new NewLinesReplacing());
    textReplacing.replacings.append(new QuotationMarksReplacing());
    textReplacing.replacings.append(new HyphenReplacing());

    int count = 0;
    std::string text ="Hello  world\t!!!\n\nHello-world—!!!\"\"\"\"\"\" ( not )\n\n\n\"Hello world\"";
    std::cout << "TEXT BEFORE:" << std::endl << text << std::endl<< std::endl;
    QString qstring = QString::fromStdString(text);
    count = textReplacing.interpret(&qstring);
    std::cout << "TEXT AFTER:" << std::endl << qstring.toLocal8Bit().constData() << std::endl;
    std::cout << "Reduced symbols: " << count;
    std::cout << std::endl;
    return a.exec();
}
