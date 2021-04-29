#ifndef IMAGE_H
#define IMAGE_H

#include <QWidget>
#include "realimage.h"

class Image : public QWidget
{
public:
    explicit Image(QWidget *parent = nullptr);
    void draw();
protected:
    RealImage* realImage;
signals:

};

#endif // IMAGE_H
