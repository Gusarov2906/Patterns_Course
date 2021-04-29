#ifndef IMAGE_H
#define IMAGE_H

#include <QWidget>
#include <QLabel>
#include "realimage.h"

class Image : public QLabel
{
public:
    Image(int id, QSize size, QString path, QWidget *parent = nullptr);
    Image(int id, QSize size, QPixmap pixmap, QString path, QWidget *parent = nullptr);
    void draw(int x, int y);
    QPixmap getPixmap();
    int getId();
    QSize getSize();
    QString getPath();
    bool isReal = false;
    bool isShown = false;
protected:
    int id;
    QPixmap pixmap;
    QSize size;
    QString path;
    RealImage* realImage;
signals:

};

#endif // IMAGE_H
