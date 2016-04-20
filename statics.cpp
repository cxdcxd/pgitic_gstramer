#include "statics.h"

pgiticlog *mtlog;
mythreadgclientrecord *mtgclientrecord;
mythreadgclientplay *mtgclientplay;
QThreadTCP *tcpsocket;
MyGpio *gpio;
myMainThreadx *_mainthread;
QSet<QTcpSocket*> clients;
MyServer *mttcpserver;
serialthread *mtserial;

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
bool isuserlogedin;
//pgitic_log *mtlog;
std::vector<std::string> list_camera_models;
std::vector<std::string> list_controller_models;
std::vector<std::string> list_FIFO_MAX;
std::vector<std::string> list_MICNUMBERS;
std::vector<std::string> list_MICSTATUS;
std::vector<std::string> list_tcpclientslist;

int camera_id;
int camera_speed;
std::string status;
std::string user_mode;
std::string last_command;
bool camera_loop_mode;
std::string bar_info;
bool camera_stop_zoom;
bool camera_stop_focus;
bool camera_stop_iris;
bool camera_stop_dir;
int camera_send_tick;
bool sended;
std::string temp_command;
std::string mic_number;
std::string cam_number;
std::string total_number;
bool isusbconnected_bool;
int tcp_server_port;
bool app_exit;











