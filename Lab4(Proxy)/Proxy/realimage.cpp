#include "realimage.h"

RealImage::RealImage(int id, QSize size, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->setBaseSize(size);
    this->path = path;
    this->pixmap = QPixmap(size);
    this->setPixmap(pixmap);
}

void RealImage::draw()
{
    if(path!="")
    {
        this->pixmap = QPixmap(this->path);
        this->pixmap = this->pixmap.scaled(this->size().width(),this->size().height());
        this->setPixmap(this->pixmap);
        this->show();
    }
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
