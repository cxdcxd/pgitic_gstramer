#ifndef PGITICLOG_H
#define PGITICLOG_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <iostream>
#include <stdio.h>

class pgiticlog : public QObject
{
    Q_OBJECT
public:
    explicit pgiticlog(QObject *parent = 0);
    void start();
    QSqlDatabase db;
signals:

public slots:

};

#endif
