#ifndef _M5STISKCNSCONFIG_H
#define _M5STISKCNSCONFIG_H

#include <M5StickC.h>

// do not edit this file, put your values in M5StickC_NSconfig.cpp, these are just defaults
// in case that filling data somehow fails
struct tConfig {
  char url[64];
  char bootPic[64];
  char userName[32];
  int timeZone = 3600; // time zone offset in hours, must be corrected for internatinal use and DST
  int dst = 3600; // DST time offset in hours, must be corrected for internatinal use and DST
  char ntpServer[32];
  int show_mgdl = 0; // 1 = display mg/DL, 0 = diplay mmol/L
  int sgv_only = 0; // 1 = filter only SGV values from Nightscout, 0 = read everything (default)  
  int show_current_time = 0;
  int show_COB_IOB = 0;
  int snooze_timeout = 30; // timeout to snooze alarm in minutes
  int alarm_repeat = 5; // repeat alarm every X minutes
  float yellow_low = 4.5;
  float yellow_high = 9;
  float red_low = 3.9;
  float red_high = 11;
  float snd_warning = 3.7;
  float snd_alarm = 3.0;
  float snd_warning_high = 14;
  float snd_alarm_high = 20;
  int snd_no_readings = 20;
  char warning_music[64];
  int warning_volume = 30;
  char alarm_music[64];
  int alarm_volume = 100;
  uint8_t brightness1, brightness2, brightness3;
  int dev_mode = 0; // developer mode, do not use, does strange things and changes often ;-)
  char wlan1ssid[32];
  char wlan1pass[64];
  char wlan2ssid[32];
  char wlan2pass[64];
  char wlan3ssid[32];
  char wlan3pass[64];
} ;

void readConfiguration(tConfig *cfg);

#endif
