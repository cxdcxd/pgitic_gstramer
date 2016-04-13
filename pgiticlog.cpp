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

void pgiticlog::start()
{
    qDebug("Serial Interface Started");

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("log.db");
    bool result = db.open();

    std::cout<<"LOG DB: "<<result<<std::endl;

    QSqlQuery query;
    if(query.exec("SELECT * FROM main")){
        while(query.next())
        {
            int id = query.value(0).toInt();
            QDateTime datetime = query.value(1).toDateTime();
            QString sender = query.value(2).toString();
            QString type = query.value(3).toString();
            QString info = query.value(4).toString();


            std::cout << id << " " << datetime.toString().toStdString() << " " << sender.toStdString() << " " << type.toStdString() << " " << info.toStdString() <<std::endl;
        }

    }
    else
    {
    }

}
