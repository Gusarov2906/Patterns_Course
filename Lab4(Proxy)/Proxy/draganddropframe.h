#ifndef DRAGANDDROPFRAME_H
#define DRAGANDDROPFRAME_H

#include <QFrame>

QT_BEGIN_NAMESPACE
class QDragEnterEvent;
class QDropEvent;
QT_END_NAMESPACE

class DragAndDropFrame: public QFrame
{
public:
    DragAndDropFrame();
    explicit DragAndDropFrame(QWidget *parent = nullptr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // DRAGANDDROPFRAME_H
