#ifndef DRAGANDDROPFRAME_H
#define DRAGANDDROPFRAME_H

#include <QFrame>
#include "proxyimage.h"

QT_BEGIN_NAMESPACE
class QDragEnterEvent;
class QDropEvent;
QT_END_NAMESPACE

class DragAndDropFrame: public QFrame
{
    Q_OBJECT
public:
    explicit DragAndDropFrame(QWidget *parent = nullptr);
    ~DragAndDropFrame();
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
    void dragEnterEvent(QDragEnterEvent *event) override{};
    void dragMoveEvent(QDragMoveEvent *event) override{};
    void dropEvent(QDropEvent *event) override{};
    void mousePressEvent(QMouseEvent *event) override{};
};

#endif // DRAGANDDROPFRAME_H
