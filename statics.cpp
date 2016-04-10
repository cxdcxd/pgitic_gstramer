#include "statics.h"

mythreadgclientrecord *mtgclientrecord;
mythreadgclientplay *mtgclientplay;
QThreadTCP *tcpsocket;
MyGpio *gpio;
myMainThreadx *_mainthread;
QSet<QTcpSocket*> clients;
MyServer *mttcpserver;
myserialq *mtserial;

std::string coutcolor0 = "\033[0;0m";
std::string coutcolor_red = "\033[0;31m";
std::string coutcolor_green = "\033[0;32m";
std::string coutcolor_blue = "\033[0;34m";
std::string coutcolor_magenta = "\033[0;35m";
std::string coutcolor_brown = "\033[0;33m";

QString send_buffer;

std::string usb_storage_path;
std::string audio_mode;

int audio_max_seconds;
int audio_current_second;
std::string audio_info;


