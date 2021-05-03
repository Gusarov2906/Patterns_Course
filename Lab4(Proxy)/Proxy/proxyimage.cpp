#include "proxyimage.h"
#include <QtWidgets>

ProxyImage::ProxyImage(int id, QSize size, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    this->realImage = 0;
    this->show();
}

ProxyImage::ProxyImage(int id, QSize size, QPixmap pixmap, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    this->setPixmap(pixmap);
    this->show();
}

void ProxyImage::draw()
{
    if(!this->realImage)
    {
        this->realImage = new RealImage(this->id, this->size(), this->path, this);
        this->realImage->draw();
        this->setPalette(style()->standardPalette());
    }
}

int ProxyImage::getId()
{
    return this->id;
}

QString ProxyImage::getPath()
{
    return this->path;
}

QSize ProxyImage::getSize()
{
    return this->size();
}

RealImage* ProxyImage::getRealImage()
{
    return this->realImage;
}

void ProxyImage::mousePressEvent(QMouseEvent *event)
{
    switch (event->button()) {
       case Qt::LeftButton:
       {
           this->oldPos = event->pos();
           break;
       }
       case Qt::RightButton:
       {
           this->draw();
           break;
       }
        default:
            break;
    }
}

void ProxyImage::mouseMoveEvent(QMouseEvent *event)
{
    QPoint delta = QPoint(event->pos() - this->oldPos);
    this->move(this->x()+delta.x(),this->y()+delta.y());
}

