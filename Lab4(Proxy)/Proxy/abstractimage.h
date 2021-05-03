#ifndef ABSTRACTIMAGE_H
#define ABSTRACTIMAGE_H

#include <QObject>

class AbstractImage
{
public:
    virtual void draw() = 0;
    virtual int getId() = 0;
    virtual QSize getSize() = 0;
    virtual QString getPath() = 0;
};

#endif // ABSTRACTIMAGE_H
