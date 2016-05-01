#ifndef VOLUMETHREAD_H
#define VOLUMETHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <statics.h>
#include <QProcess>


class volumethread: public QThread
{
    Q_OBJECT
public:
    explicit volumethread(QObject *parent = 0);
    void run();

    QProcess *volume_process;
};

#endif // VOLUMETHREAD_H
