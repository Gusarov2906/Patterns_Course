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
    void draw() override;
    int getId() override;
    QSize getSize() override;
    QString getPath() override;
    RealImage* getRealImage();
    RealImage* realImage;
    const bool isReal = false;
protected:
    QPoint oldPos;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    int id;
    QString path;
private:
signals:

};

#endif // PROXYIMAGE_H
