#ifndef PROXYIMAGE_H
#define PROXYIMAGE_H

#include <QWidget>
#include <QLabel>
#include "realimage.h"
#include "abstractimage.h"

class ProxyImage : public AbstractImage, public QLabel
{
public:
    ProxyImage(int id, QSize size, QString path, QWidget *parent = nullptr);
    ProxyImage(int id, QSize size, QPixmap pixmap, QString path, QWidget *parent = nullptr);
    void draw();
    int getId();
    QSize getSize();
    QString getPath();
protected:
    int id;
    QString path;
private:
    RealImage* realImage;
signals:

};

#endif // PROXYIMAGE_H
