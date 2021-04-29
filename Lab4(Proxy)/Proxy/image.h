#ifndef IMAGE_H
#define IMAGE_H

#include <QWidget>
#include "realimage.h"
#include <QPainter>
#include <QFrame>


class Image : public QFrame
{
public:
    explicit Image(QWidget *parent = nullptr);
    //Image(QSize size, QString path, QFrame *parent = nullptr);
    QPixmap pixmap;
    QSize size;
    void draw();
protected:
    //void paintEvent(QPaintEvent *) override;
    RealImage* realImage;
signals:

};

#endif // IMAGE_H
