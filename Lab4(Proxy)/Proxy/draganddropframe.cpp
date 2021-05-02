#include "draganddropframe.h"
#include <QtWidgets>
#include <QDebug>

DragAndDropFrame::DragAndDropFrame(QWidget *parent) : QFrame(parent)
{
    this->id = 0;
    setAcceptDrops(true);
}

void DragAndDropFrame::addImage(QSize size, QString path)
{
    this->images.push_back(new ProxyImage(this->id, size, path, this));
    this->id++;
}

void DragAndDropFrame::addImage(ProxyImage* img)
{
    this->images.push_back(img);
    this->id++;
}

void DragAndDropFrame::deleteImage(int index)
{
    this->images.remove(index);
}

void DragAndDropFrame::changeImage(int index, ProxyImage *img)
{
    this->images[index] = img;
}

ProxyImage* DragAndDropFrame::getImage(int index)
{
    return this->images[index];
}

int DragAndDropFrame::getIndexById(int id)
{
    for(int i = 0; i < this->images.size(); i++)
    {
        if(this->images[i]->getId() == id)
            return i;
    }
    return -1;
}

DragAndDropFrame::~DragAndDropFrame()
{
    for(int i = 0; i < this->images.size(); i++)
    {
        delete this->images[i];
    }
}

/*
void DragAndDropFrame::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("application/my_img")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void DragAndDropFrame::dragMoveEvent(QDragMoveEvent *event)
{
    if (event->mimeData()->hasFormat("application/my_img")) {
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void DragAndDropFrame::dropEvent(QDropEvent *event)
{
    if (event->mimeData()->hasFormat("application/my_img")) {
        QByteArray itemData = event->mimeData()->data("application/my_img");
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        QPixmap pixmap;
        QSize size;
        QString path;
        QPoint offset;
        bool isShown;
        QPixmap realPixmap;

        dataStream >> pixmap >> size >> path >> offset;
//        this->getImage(this->getIndexById(this->tmpId));
        ProxyImage *img = new ProxyImage(this->tmpId,size,pixmap,path,this);
        img->move(event->pos() - offset);
        this->changeImage(this->tmpId,img);

//        Image* img = this->getImage(this->getIndexById(this->tmpId));
//        img->move(offset.x(), offset.y());
        //img->show();
//        this->changeImage(this->tmpId,img);
        //delete img;
        //this->addImage(img);
        //delete img;
        if (event->source() == this) {
            event->setDropAction(Qt::MoveAction);
            event->accept();
        } else {
            event->acceptProposedAction();
        }
    } else {
        event->ignore();
    }
}

void DragAndDropFrame::mousePressEvent(QMouseEvent *event)
{
    ProxyImage *child = static_cast<ProxyImage*>(childAt(event->pos()));
    if (!child)
        return;

    this->tmpId = child->getId();

    //QPixmap pixmap = child->getPixmap();
    QSize size = child->getSize();
    QString path = child->getPath();

    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    //dataStream << pixmap << size << path << QPoint(event->pos() - child->pos());

    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/my_img", itemData);

    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    //drag->setPixmap(pixmap);
    drag->setHotSpot(event->pos() - child->pos());

    //QPixmap tempPixmap = pixmap;
    QPainter painter;
    //painter.begin(&tempPixmap);
    //painter.fillRect(pixmap.rect(), QColor(239,239,239));
    painter.end();

    //child->setPixmap(tempPixmap);

    if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction) {
        //child->close();
        delete child;
        //child->show();
        //this->deleteImage(this->getIndexById(this->tmpId));
    } else {
        child->show();
       // child->setPixmap(pixmap);
    }

}
*/
