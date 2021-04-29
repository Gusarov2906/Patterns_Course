#include "realimage.h"

RealImage::RealImage(int id, QSize size, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->size = size;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;

    //this->setFocusPolicy(Qt::NoFocus);
    //this->pixmap = QPixmap(size);
    //this->pixmap.fill(Qt::black);
    //this->setPixmap(pixmap);
    //this->setAttribute(Qt::WA_DeleteOnClose);
    //this->show();
}

RealImage::RealImage(int id, QSize size, QPixmap pixmap, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->size = size;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;
    this->pixmap = pixmap;
    this->setPixmap(pixmap);
    //this->setAttribute(Qt::WA_DeleteOnClose);
    //this->show();
}

void RealImage::draw(int x, int y)
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
    return this->size;
}
