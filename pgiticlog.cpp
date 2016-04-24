#include "pgiticlog.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QDateTime>


pgiticlog::pgiticlog(QObject *parent) :
    QObject(parent)
{

}

bool pgiticlog::save_config()
{
    QSqlQuery qry;

    std::string command;

    std::string _joyx = (joyx)?"1":"0";
    std::string _joyy = (joyy)?"1":"0";
    std::string _logout_idle = (logout_idle)?"1":"0";
    std::string _cmdloop = (cmd_loop)?"1":"0";
    std::string _loopvalue = QString::number(loop_value).toStdString().c_str();
    std::string _remoteip = "'" + remote_ip + "'";
    std::string _remoteport = "'" + remote_port + "'";

    std::string _admin_pass = "'" + admin_pass + "'";
    std::string _user_pass = "'" + user_pass + "'";
    std::string _controller_model = "'" + controller_model + "'";
    std::string _camera_model = "'" + camera_model + "'";

    command = "UPDATE config SET";
    command.append("  joyx = ")              ; command.append(_joyx);
    command.append(", joyy = ")              ; command.append(_joyy);
    command.append(", cmd_loop = ")          ; command.append(_cmdloop);
    command.append(", logout_idle= ")        ; command.append(_logout_idle);
    command.append(", loop_value = ")        ; command.append(_loopvalue);
    command.append(", remote_ip = ")         ; command.append(_remoteip );
    command.append(", remote_port = ")       ; command.append(_remoteport);
    command.append(", admin_pass = ")        ; command.append(_admin_pass);
    command.append(", user_pass = ")         ; command.append(_user_pass);
    command.append(", controller_model = ")  ; command.append(_controller_model);
    command.append(", camera_model = ")      ; command.append(_camera_model);
    command.append(" WHERE id = 1" );

    std::cout<<command<<std::endl;

    qry.prepare(command.c_str());


    if( !qry.exec() )
    {qDebug(qry.lastError().text().toStdString().c_str()); return false;}
    else
    {qDebug( "Updated!" ); return true;}

}

void pgiticlog::load_config()
{
    QSqlQuery query;
    if(query.exec("SELECT * FROM config"))
    {
        if(query.next())
        {
            int id = query.value(0).toInt();
            QString _id = QString::number(id);
            joyx = query.value(1).toBool();
            joyy = query.value(2).toBool();
            cmd_loop = query.value(3).toBool();
            logout_idle = query.value(4).toBool();
            loop_value = query.value(5).toInt();
            remote_ip = query.value(6).toString().toStdString();
            remote_port = query.value(7).toString().toStdString();
            admin_pass = query.value(8).toString().toStdString();
            user_pass = query.value(9).toString().toStdString();
            controller_model = query.value(10).toString().toStdString();
            camera_model = query.value(11).toString().toStdString();
            std::cout<<"config loaded done"<<std::endl;
        }

    }
    else
    {
    }
}

void pgiticlog::deletealllogs()
{
    QSqlQuery qry;
    qry.prepare( "DELETE FROM log" );
    if( !qry.exec() )
        qDebug(qry.lastError().text().toStdString().c_str());
    else
        qDebug( "All logs deleted!" );
}


std::vector<std::string>  pgiticlog::get_log()
{
    std::vector<std::string> list;
    QSqlQuery query;
    if(query.exec("SELECT * FROM log"))
    {
        while(query.next())
        {
            int id = query.value(0).toInt();
            QString _id = QString::number(id);
            QDateTime datetime = query.value(1).toDateTime();
            QString sender = query.value(2).toString();
            QString type = query.value(3).toString();
            QString info = query.value(4).toString();

            std::string itemm = "(" + datetime.toString("yyyy-MM-dd HH:mm:ss").toStdString() + ") [" + sender.toStdString() + "] (" + type.toStdString() + ") => " + info.toStdString();
            list.push_back(itemm);

        }
        return list;
    }
    else
    {
    }
}

std::vector<std::string>  pgiticlog::get_log_query(std::string cmd)
{
    std::vector<std::string> list;
    QSqlQuery query;
    if(query.exec(cmd.c_str()))
    {
        while(query.next())
        {
            int id = query.value(0).toInt();
            QString _id = QString::number(id);
            QDateTime datetime = query.value(1).toDateTime();
            QString sender = query.value(2).toString();
            QString type = query.value(3).toString();
            QString info = query.value(4).toString();

            std::string itemm = "(" + datetime.toString("yyyy-MM-dd HH:mm:ss").toStdString() + ") [" + sender.toStdString() + "] (" + type.toStdString() + ") => " + info.toStdString();
            list.push_back(itemm);

        }
        return list;
    }
    else
    {
    }


}


void  pgiticlog::insert_log(QString sender,QString info,QString type)
{
    QDateTime now = QDateTime::currentDateTime();

    QSqlQuery qry;
    std::string command;
    command = "INSERT INTO log (sender, info, type, timestamp) VALUES ('" +
            sender.toStdString() + "','" +
            info.toStdString()   + "','" +
            type.toStdString()   + "'," +
            "DateTime('now'))";

    qry.prepare(command.c_str());
    //qry.bindValue(0, 'now');

    if( !qry.exec() )
        qDebug(qry.lastError().text().toStdString().c_str());
    else
        qDebug( "Inserted!" );
}

void pgiticlog::open()
{
    db.setDatabaseName("data.db");
    bool result = db.open();
    std::cout<<"DateBase Status : "<<result<<std::endl;
}

void pgiticlog::close()
{
    db.close();
}

void pgiticlog::start()
{
    qDebug("Serial Interface Started");
    db = QSqlDatabase::addDatabase("QSQLITE");

    open();

    insert_log("pgiticlog","started_i","INFO");
    insert_log("pgiticlog","started_d","DEBUG");
    insert_log("pgiticlog","started_w","WARN");
    insert_log("pgiticlog","started_e","ERROR");
}
