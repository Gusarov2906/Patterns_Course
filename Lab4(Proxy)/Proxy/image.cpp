#include "image.h"
#include <QtWidgets>

Image::Image(int id, QSize size, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->size = size;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;
    this->pixmap = QPixmap(size);
    this->pixmap.fill(QColor(255, 255, 0));
    this->setPixmap(pixmap);
    this->realImage = 0;
    //this->setAttribute(Qt::WA_DeleteOnClose);
    this->show();
}

Image::Image(int id, QSize size, QPixmap pixmap, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->size = size;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;
    this->pixmap = pixmap;
    this->setPixmap(pixmap);
    //this->setAttribute(Qt::WA_DeleteOnClose);
    this->show();
}

void Image::draw(int x, int y)
{
    if(!this->realImage)
    {
        isShown = true;
        this->realImage = new RealImage(this->id, QSize(64,64), this->path, this);
        this->realImage->draw(this->x(), this->y());
        this->setLayout(new QVBoxLayout());
        this->layout()->addWidget(realImage);
        //this->pixmap = QPixmap(0,0);
        //this->setPixmap(pixmap);
        //this->hide();
    }
}

QPixmap Image::getPixmap()
{
    return this->pixmap;
}

int Image::getId()
{
    return this->id;
}

QString Image::getPath()
{
    return this->path;
}

QSize Image::getSize()
{
    return this->size;
}


