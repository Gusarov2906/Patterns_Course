#include "image.h"
#include <QtWidgets>

//Image::Image(QSize size, QString path, QFrame *parent) : QFrame(parent)
//{
//    this->setMaximumSize(size.width(), size.height());
//    this->setMinimumSize(size.width(), size.height());
//    this->setGeometry(100,100, size.width(), size.height());
//    this->move(100, 100);
//    //this->realImage = new RealImage(path);
//}

Image::Image(QWidget* parent) : QFrame(parent)
{
    this->setMaximumSize(100, 100);
    this->setMinimumSize(100, 100);
    this->setGeometry(100,100, 100, 100);
    this->move(100, 100);
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    pixmap = QPixmap(40,40);
    this->setAttribute(Qt::WA_DeleteOnClose);
  //this->realImage = new RealImage(path);
}

void Image::draw()
{

}


