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
serialthread *mtserial2;


std::string xcoutcolor0 = "\033[0;0m";
std::string xcoutcolor_red = "\033[0;31m";
std::string xcoutcolor_green = "\033[0;32m";
std::string xcoutcolor_blue = "\033[0;34m";
std::string xcoutcolor_magenta = "\033[0;35m";
std::string xcoutcolor_brown = "\033[0;33m";

QString send_buffer;

std::string usb_storage_path;
std::string audio_mode;

gint64 audio_max_seconds;
gint64 audio_current_second;
std::string audio_info;
bool isuserlogedin;
//pgitic_log *mtlog;
std::vector<std::string> list_camera_models;
std::vector<std::string> list_controller_models;
std::vector<std::string> list_FIFO_MAX;
std::vector<std::string> list_MICNUMBERS;
std::vector<std::string> list_MICSTATUS;
std::vector<std::string> list_tcpclientslist;
std::vector<std::string> list_serials;

int camera_id;

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
std::string HID;
bool _lic1;
bool _lic2;
bool _lic3;
bool _lic4;
bool init_done;
int speaker_volume_temp;
bool dcu_serial_mode;











