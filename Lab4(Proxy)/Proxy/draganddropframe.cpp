#include "draganddropframe.h"

DragAndDropFrame::DragAndDropFrame(QWidget *parent) : QFrame(parent)
{
    setAcceptDrops(true);
}
