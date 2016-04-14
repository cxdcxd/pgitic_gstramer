
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
#include "pgiticlog.h"
#include "stdio.h"
#include "iostream"

//extern pgitic_log *mtlog;
extern MyServer *mttcpserver;
extern myserialq *mtserial;
extern pgiticlog *mtlog;

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
extern std::string tcp_client_remote_ip;
extern int tcp_client_remote_port;
extern bool isuserlogedin;

extern std::vector<std::string> list_camera_models;
extern std::vector<std::string> list_controller_models;

extern int camera_id;
extern int camera_speed;
extern std::string camera_model;
extern std::string status;
extern bool joyx_reversed;
extern bool joyy_reversed;
extern std::string user_mode;
extern std::string mic_number;
extern std::string cam_number;
extern std::string total_number;

extern std::string last_command;
extern std::string temp_command;
extern bool camera_loop_mode;

extern bool camera_stop_zoom;
extern bool camera_stop_focus;
extern bool camera_stop_iris;
extern bool camera_stop_dir;

extern std::string controller_model;
extern std::string bar_info;
extern int camera_send_tick;
extern bool sended;
extern int cmd_loop_value ;
extern bool cmd_loop;
extern std::string username;
extern std::string password;
