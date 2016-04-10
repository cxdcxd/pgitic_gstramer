
#include <qthreadtcp.h>
#include "mygpio.h"
#include "mygclientrecord.h"
#include "mygclientplay.h"
#include "mythreadgclientrecord.h"
#include "mythreadgclientplay.h"
#include "mainthread.h"
#include "myserver.h"
#include "QProcess"
#include "myserial.h"

#include "stdio.h"
#include "iostream"

extern MyServer *mttcpserver;
extern myserialq *mtserial;

extern mythreadgclientrecord *mtgclientrecord; //Thread => clientrecord
extern mythreadgclientplay *mtgclientplay; //Thread => clientrecord

extern QThreadTCP *tcpsocket; //TCP Client
extern MyGpio *gpio; //GPIO

extern myMainThreadx *_mainthread; //Therad => mainthread
extern QSet<QTcpSocket*> clients;

extern std::string coutcolor0;
extern std::string coutcolor_green;
extern std::string coutcolor_red;
extern std::string coutcolor_blue;
extern std::string coutcolor_magenta;
extern std::string coutcolor_brown;


extern QString send_buffer;
extern std::string usb_storage_path;
extern std::string audio_mode;

extern int audio_max_seconds;
extern int audio_current_second;
extern std::string audio_info;

