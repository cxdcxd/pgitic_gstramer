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
    void load_licenses();

    void open();
    void close();
    void deletealllogs();
    std::vector<std::string> get_log();
    std::vector<std::string> get_log_query(std::string cmd);
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

    int camera_speed;
    int speaker_volume;
    std::string superuser_pass;

    bool license_recordplayback;
    bool license_vote;
    bool license_cdu;
    bool license_michrophone;

   QString _license1;
   QString _license2;
   QString _license3;
   QString _license4;
   QString _key;

signals:

public slots:

};

#endif
