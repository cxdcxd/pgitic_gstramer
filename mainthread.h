#ifndef MYMAINTHREADX_H
#define MYMAINTHREADX_H

#include <QThread>

class myMainThreadx : public QThread
{
    Q_OBJECT
public:
    explicit myMainThreadx(QObject *parent = 0);
    void run();
    int counter;
    bool app_exit;

signals:

public slots:

};

#endif
