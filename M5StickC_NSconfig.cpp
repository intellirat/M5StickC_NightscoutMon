#include "M5StickC_NSconfig.h"

// here write YOUR NIGHTSCOUT configuration data (do not edit M5StickC_NSconfig.h file)

void readConfiguration(tConfig *cfg) {
  strlcpy(cfg->url, "nscout.raine.org", 64);
  cfg->bootPic[0]=0;
  strcpy(cfg->userName, "Martin");
  cfg->timeZone = 0; // time zone shift in second (1 hour = 3600 seconds)
  cfg->dst = 3600; // daylight shift in seconds
  strlcpy(cfg->ntpServer, "uk.pool.ntp.org", 32);
  cfg->show_mgdl = 0; // 0 for mmol/L, 1 for mg/dL
  cfg->sgv_only = 0; // 1 = filter only SGV values
  cfg->show_current_time = 1; // not used currently
  cfg->show_COB_IOB = 1; // show COB and IOB
  cfg->snooze_timeout = 30; // not used currently
  cfg->alarm_repeat = 5; // not used currently
  cfg->dev_mode = 0; // only for developer purposes
  cfg->yellow_low = 4.5; // show glycemia value yellow under this value (always in mmol/L)
  cfg->yellow_high = 11.0; // show glycemia value yellow over this value (always in mmol/L)
  cfg->red_low = 3.9; // show glycemia value red under this value (always in mmol/L)
  cfg->red_high = 14.0; // show glycemia value red over this value (always in mmol/L)
  cfg->snd_warning = 1.7; // LED alarm under this value - 3.7 default
  cfg->snd_alarm = 1.0; // LED alarm under this value - 3.0 default
  cfg->snd_warning_high = 24.0; // LED alarm over this value - 14.0 default
  cfg->snd_alarm_high = 30.0; // LED alarm over this value - 20.0 default
  cfg->snd_no_readings = 20; // LED alarm if no date more then this minutes
  cfg->warning_music[0]=0; // not used currently
  cfg->warning_volume = 30; // not used currently
  cfg->alarm_music[0]=0; // not used currently
  cfg->alarm_volume = 100; // not used currently
  cfg->brightness1 = 8; // default display brightness (0-15, but reasonable values are 7-15)
  cfg->brightness2 = 10; // the second level of display brightness (0-15, but reasonable values are 7-15)
  cfg->brightness3 = 7; // the third level of display brightness (0-15, but reasonable values are 7-15)
  strlcpy(cfg->wlan1ssid, "mjr09",32);
  strlcpy(cfg->wlan1pass, "waterburt", 63);
  strlcpy(cfg->wlan2ssid, "wlan2ssid", 32);
  strlcpy(cfg->wlan2pass, "wlan2pass", 63);
  strlcpy(cfg->wlan3ssid, "wlan3ssid", 32);
  strlcpy(cfg->wlan3pass, "wlan3pass", 63);
}
