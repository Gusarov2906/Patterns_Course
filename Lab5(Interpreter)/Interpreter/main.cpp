#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    int count = 0;
//    std::string text ="Hello  world\t!!!\n\nHello-world—!!!\"\"\"\"\"\" ( not )\n\n\n\"Hello world\"";
//    std::cout << "TEXT BEFORE:" << std::endl << text << std::endl<< std::endl;
//    QString qstring = QString::fromStdString(text);
//    count = textReplacing.interpret(&qstring);
//    std::cout << "TEXT AFTER:" << std::endl << qstring.toLocal8Bit().constData() << std::endl;
//    std::cout << "Reduced symbols: " << count;
//    std::cout << std::endl;
    return a.exec();
}
