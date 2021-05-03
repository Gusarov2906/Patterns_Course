#ifndef REALIMAGE_H
#define REALIMAGE_H

#include <QWidget>
#include <QLabel>
#include <abstractimage.h>

class RealImage : public AbstractImage, public QLabel
{
public:
    RealImage(int id, QSize size, QString path, QWidget *parent = nullptr);
    QPixmap getPixmap();
    void draw() override;
    int getId() override;
    QSize getSize() override;
    QString getPath() override;
    const bool isReal = true;
protected:
    int id;
    QString path;
    QPixmap pixmap;
signals:
};

#endif // REALIMAGE_H
