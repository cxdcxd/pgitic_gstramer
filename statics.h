
#include <qthreadtcp.h>
#include "mygpio.h"
#include "mygstreamer.h"
#include "mygclient.h"
#include "mygserver.h"
#include "mythreadgclient.h"
#include "mythreadgserver.h"

extern myThreadGclient *mtgclient1;
extern myThreadGclient *mtgclient2;
extern myThreadGclient *mtgclient3;

extern myThreadGserver *mtgserver;

extern QThreadTCP *tcpsocket;
extern MyGpio *gpio;
extern MyGstreamer *mgstreamer;
