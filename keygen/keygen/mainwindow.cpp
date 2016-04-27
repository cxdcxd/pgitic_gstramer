#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>
#include <QDateTime>
#include <aes.h>
#include <QCryptographicHash>
#include <QFile>
#include <QTextStream>


const uint8_t iv[] = { 0xf0, 0xe1, 0xd2, 0xc3, 0xb4, 0xa5, 0x96,
                       0x87, 0x78, 0x69, 0x5a, 0x4b, 0x3c, 0x2d, 0x5e, 0xaf };

inline int getAlignedSize(int currSize, int alignment) {
    int padding = (alignment - currSize % alignment) % alignment;
    return currSize + padding;
}

QString encodeText(const QString &rawText, const QString &key) {
        QCryptographicHash hash(QCryptographicHash::Md5);
        hash.addData(key.toUtf8());
        QByteArray keyData = hash.result();

        const ushort *rawData = rawText.utf16();
        void *rawDataVoid = (void*)rawData;
        const char *rawDataChar = static_cast<char*>(rawDataVoid);
        QByteArray inputData;
        // ushort is 2*uint8_t + 1 byte for '\0'
        inputData.append(rawDataChar, rawText.size() * 2 + 1);

        const int length = inputData.size();
        int encryptionLength = getAlignedSize(length, 16);

        QByteArray encodingBuffer(encryptionLength, 0);
        inputData.resize(encryptionLength);

        AES128_CBC_encrypt_buffer((uint8_t*)encodingBuffer.data(), (uint8_t*)inputData.data(),
           encryptionLength, (const uint8_t*)keyData.data(), iv);

        QByteArray data(encodingBuffer.data(), encryptionLength);
        QString hex = QString::fromLatin1(data.toHex());
        return hex;
    }

QString decodeText(const QString &hexEncodedText, const QString &key) {
        QCryptographicHash hash(QCryptographicHash::Md5);
        hash.addData(key.toUtf8());
        QByteArray keyData = hash.result();

        const int length = hexEncodedText.size();
        int encryptionLength = getAlignedSize(length, 16);

        QByteArray encodingBuffer(encryptionLength, 0);

        QByteArray encodedText = QByteArray::fromHex(hexEncodedText.toLatin1());
        encodedText.resize(encryptionLength);

        AES128_CBC_decrypt_buffer((uint8_t*)encodingBuffer.data(), (uint8_t*)encodedText.data(),
          encryptionLength, (const uint8_t*)keyData.data(), iv);

        void *data = encodingBuffer.data();
        const ushort *decodedData = static_cast<ushort*>(data);
        QString result = QString::fromUtf16(decodedData);
        return result;
    }

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _key  = "pgitickeyabcdefg";
    //Read Hardware ID
    QFile file("/proc/cpuinfo");
    if(!file.open(QIODevice::ReadOnly)) {
         std::cout<<"Error :"<<std::endl;
    }
    std::cout<<file.isOpen()<<std::endl;
    std::cout<<file.isReadable()<<std::endl;

    QTextStream in(&file);

    QString line = in.readAll();
    //std::cout<<"Read :"<<line.toStdString()<<std::endl;

    int index = line.lastIndexOf("Serial		:");
    QString sub = line.mid(index,line.length() - index);
    sub = sub.replace("Serial		:","");
    sub = sub.trimmed();

    std::cout<<"HID :"<<sub.toStdString()<<std::endl;
    HID = sub;

    ui->lbl_HID->setText(HID);
    file.close();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/pi/database/data.db");
    bool result = db.open();

    std::cout<<"DateBase Status : "<< db.lastError().text().toStdString() <<std::endl;

    QSqlQuery query;
    if(query.exec("SELECT * FROM license"))
    {
        if(query.next())
        {
            int id = query.value(0).toInt();
            QString _id = QString::number(id);

            _license1 = query.value(1).toString();
            _license2 = query.value(2).toString();
            _license3 = query.value(3).toString();
            _license4 = query.value(4).toString();

            if ( _license1 != "none")
            {
            _license1 = decodeText(_license1,_key);

                            if ( _license1 == (HID + "a"))
                            {
                                ui->chk1->setChecked(true);
                            }
                            else
                            {
                                ui->chk1->setChecked(false);
                            }
            }

            if ( _license2 != "none")
            {
            _license2 = decodeText(_license2,_key);

                            if ( _license2 == (HID + "b"))
                            {
                                ui->chk2->setChecked(true);
                            }
                            else
                            {
                                ui->chk2->setChecked(false);
                            }
            }

            if ( _license3 != "none")
            {
            _license3 = decodeText(_license3,_key);

                            if ( _license3 == (HID + "c"))
                            {
                                ui->chk3->setChecked(true);
                            }
                            else
                            {
                                ui->chk3->setChecked(false);
                            }
            }

            if ( _license4 != "none")
            {
            _license4 = decodeText(_license4,_key);

                            if ( _license4 == (HID + "d"))
                            {
                                ui->chk4->setChecked(true);
                            }
                            else
                            {
                                ui->chk4->setChecked(false);
                            }
            }


            std::cout<<"license loaded done"<<std::endl;
        }

    }
    else
    {
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    bool a = ui->chk1->isChecked();
    bool b = ui->chk2->isChecked();
    bool c = ui->chk3->isChecked();
    bool d = ui->chk4->isChecked();

    if ( a )
    {
        _license1 = HID + "a";
        _license1 = encodeText(_license1,_key);
    }
    else
    {
        _license1 = "none";
    }

    if ( b )
    {
        _license2 = HID + "b";
        _license2 = encodeText(_license2,_key);
    }
    else
    {
        _license2 = "none";
    }

    if ( c )
    {
        _license3 = HID + "c";
        _license3 = encodeText(_license3,_key);
    }
    else
    {
        _license3 = "none";
    }

    if ( d )
    {
        _license4 = HID + "d";
        _license4 = encodeText(_license4,_key);
    }
    else
    {
        _license4 = "none";
    }

    std::cout<<"lic1 "<<_license1.toStdString()<<std::endl;
    std::cout<<"lic2 "<<_license2.toStdString()<<std::endl;
    std::cout<<"lic3 "<<_license3.toStdString()<<std::endl;
    std::cout<<"lic4 "<<_license4.toStdString()<<std::endl;

    //================
    QSqlQuery qry;

    std::string command;

    command = "UPDATE license SET";
    command.append("  record = ")            ; command.append("'" + _license1.toStdString() + "'");
    command.append(", vote = ")              ; command.append("'" + _license2.toStdString() + "'");
    command.append(", dcu = ")               ; command.append("'" + _license3.toStdString() + "'");
    command.append(", microphone = ")        ; command.append("'" + _license4.toStdString() + "'");

    command.append(" WHERE id = 1" );

    std::cout<<command<<std::endl;

    qry.prepare(command.c_str());


    if( !qry.exec() )
    {
        qDebug(qry.lastError().text().toStdString().c_str());
    }
    else
    {
        qDebug( "Updated!" );
    }

}

void MainWindow::on_pushButton_2_clicked()
{

}
