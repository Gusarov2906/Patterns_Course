#include "proxyimage.h"
#include <QtWidgets>

ProxyImage::ProxyImage(int id, QSize size, QString path, QWidget* parent): QLabel(parent)
{
    this->id = id;
    this->setMinimumSize(size);
    this->setMaximumSize(size);
    this->path = path;
    //this->pixmap = QPixmap(size);
    //this->pixmap.fill(QColor(255, 255, 0));
    //this->setPixmap(pixmap);
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::black);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    this->realImage = 0;
    //this->setAttribute(Qt::WA_DeleteOnClose);
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
    //this->pixmap = pixmap;
    this->setPixmap(pixmap);
    //this->setAttribute(Qt::WA_DeleteOnClose);
    this->show();
}

void ProxyImage::draw()
{
    if(!this->realImage)
    {
        //isShown = true;
        this->realImage = new RealImage(this->id, QSize(64,64), this->path, this);
        this->realImage->draw();
        this->setLayout(new QVBoxLayout());
        this->layout()->addWidget(realImage);
        //this->pixmap = QPixmap(0,0);
        //this->setPixmap(pixmap);
        //this->hide();
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

//QPixmap Image::getPixmap()
//{
//    return this->pixmap;
//}


