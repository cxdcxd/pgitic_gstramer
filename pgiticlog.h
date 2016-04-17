#ifndef PGITICLOG_H
#define PGITICLOG_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <QDateTime>

class pgiticlog : public QObject
{
    Q_OBJECT
public:
    explicit pgiticlog(QObject *parent = 0);
    void start();
    bool save_config();
    void load_config();
    void open();
    void close();
    void deletealllogs();
    std::vector<std::string> get_log();
    void insert_log(QString sender,QString info,QString type);

    QSqlDatabase db;

    bool joyx;
    bool joyy;
    bool cmd_loop;
    bool logout_idle;
    int  loop_value;
    std::string remote_ip;
    std::string remote_port;
    std::string admin_pass;
    std::string user_pass;
    std::string controller_model;
    std::string camera_model;

signals:

public slots:

};

#endif
