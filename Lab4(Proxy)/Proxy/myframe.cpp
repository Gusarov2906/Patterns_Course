#include "myframe.h"
#include <QtWidgets>
#include <QDebug>

MyFrame::MyFrame(QWidget *parent) : QFrame(parent)
{
    this->id = 0;
    setAcceptDrops(true);
}

void MyFrame::addImage(QSize size, QString path)
{
    this->images.push_back(new ProxyImage(this->id, size, path, this));
    this->id++;
}

void MyFrame::addImage(ProxyImage* img)
{
    this->images.push_back(img);
    this->id++;
}

void MyFrame::deleteImage(int index)
{
    this->images.remove(index);
}

void MyFrame::changeImage(int index, ProxyImage *img)
{
    this->images[index] = img;
}

ProxyImage* MyFrame::getImage(int index)
{
    return this->images[index];
}

int MyFrame::getIndexById(int id)
{
    for(int i = 0; i < this->images.size(); i++)
    {
        if(this->images[i]->getId() == id)
            return i;
    }
    return -1;
}

MyFrame::~MyFrame()
{
    for(int i = 0; i < this->images.size(); i++)
    {
        delete this->images[i];
    }
}
