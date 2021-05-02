#ifndef ABSTRACTIMAGE_H
#define ABSTRACTIMAGE_H

#include <QObject>

class AbstractImage
{
public:
    virtual void draw() = 0;
};

#endif // ABSTRACTIMAGE_H
