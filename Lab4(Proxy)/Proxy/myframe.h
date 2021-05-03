#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>
#include "proxyimage.h"

QT_BEGIN_NAMESPACE
class QDragEnterEvent;
class QDropEvent;
QT_END_NAMESPACE

class MyFrame: public QFrame
{
    Q_OBJECT
public:
    explicit MyFrame(QWidget *parent = nullptr);
    ~MyFrame();
    void addImage(QSize size, QString path);
    void addImage(ProxyImage* img);
    void changeImage(int index,ProxyImage* img);
    void deleteImage(int index);
    ProxyImage* getImage(int index);
protected:
    int id;
    int tmpId;
    QVector<ProxyImage*> images;
    int getIndexById(int id);
};

#endif // MYFRAME_H
