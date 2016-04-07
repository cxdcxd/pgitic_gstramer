
#include <qthreadtcp.h>
#include "mygpio.h"
#include "mygclientrecord.h"
#include "mygclientplay.h"
#include "mythreadgclientrecord.h"
#include "mythreadgclientplay.h"
#include "mainthread.h"

extern mythreadgclientrecord *mtgclientrecord; //Thread => clientrecord
extern mythreadgclientplay *mtgclientplay; //Thread => clientrecord

extern QThreadTCP *tcpsocket; //TCP Client
extern MyGpio *gpio; //GPIO

extern myMainThreadx *_mainthread; //Therad => mainthread
