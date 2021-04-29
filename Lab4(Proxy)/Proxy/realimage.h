#ifndef REALIMAGE_H
#define REALIMAGE_H

#include <QWidget>
#include <QLabel>

class RealImage : public QLabel
{
public:
    RealImage(int id, QSize size, QString path, QWidget *parent = nullptr);
    RealImage(int id, QSize size, QPixmap pixmap, QString path, QWidget *parent = nullptr);
    void draw(int x, int y);
    QPixmap getPixmap();
    int getId();
    QSize getSize();
    QString getPath();
    bool isReal = true;
protected:
    int id;
    QPixmap pixmap;
    QSize size;
    QString path;
signals:
};

#endif // REALIMAGE_H
