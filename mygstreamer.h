#ifndef MYGSTREAMER_H
#define MYGSTREAMER_H

#include <QObject>

class MyGstreamer : public QObject
{
    Q_OBJECT
public:
    explicit MyGstreamer(QObject *parent = 0);
    void start();

signals:
    
public slots:
    
};

#endif // MYGSTREAMER_H
