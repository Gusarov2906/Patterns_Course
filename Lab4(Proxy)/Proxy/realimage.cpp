#include "realimage.h"

RealImage::RealImage(int id, QSize size, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;

    //this->setFocusPolicy(Qt::NoFocus);
    this->pixmap = QPixmap(size);
    this->setPixmap(pixmap);
    //this->setAttribute(Qt::WA_DeleteOnClose);
    //this->show();
}

void RealImage::draw()
{
    //this->move(x,y);
    this->pixmap = QPixmap(":/Images/moon.png");
    this->setPixmap(this->pixmap);
    this->show();
}

QPixmap RealImage::getPixmap()
{
    return this->pixmap;
}

int RealImage::getId()
{
    return this->id;
}

QString RealImage::getPath()
{
    return this->path;
}

QSize RealImage::getSize()
{
    return this->size();
}
