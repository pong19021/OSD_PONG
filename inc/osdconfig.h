#ifndef __OSD_CONFIG_H
#define __OSD_CONFIG_H

#include "board.h"

#define EEPROM_START_ADDR               0x080E0000              //Base @ of Sector 11
#define EERROM_SIZE                             1024

// Version number: major.minor.revision (1.2.6 for example)
#define PLAYUAV_VERSION_NUMBER          "1.3.3"
// Change this to distinguish the release in some fashion that
// version number doesn't cover
// Max length of string shown that doesn't cause GUI glitches is at least 33 characters:
//                                      |---------------------------------|
#define PLAYUAV_VERSION_DESCRIPTION     "IMPERIAL+WARNING FIXES 03/02/2017"

void vTaskVCP(void *pvParameters);

void LoadParams(void);
bool StoreParams(void);
bool flash_write_word(uint32_t add, uint32_t value);
bool clear_all_params(void);

typedef union {
  uint8_t c[EERROM_SIZE];
  uint16_t s[EERROM_SIZE / 2];
  uint32_t w[EERROM_SIZE / 4];
  struct PARAM_TYP
  {
    uint16_t Arm_en;
    uint16_t Arm_panel;
    uint16_t Arm_posX;
    uint16_t Arm_posY;
    uint16_t Arm_fontsize;
    uint16_t Arm_align;

    uint16_t BattVolt_en;
    uint16_t BattVolt_panel;
    uint16_t BattVolt_posX;
    uint16_t BattVolt_posY;
    uint16_t BattVolt_fontsize;
    uint16_t BattVolt_align;

    uint16_t BattCurrent_en;
    uint16_t BattCurrent_panel;
    uint16_t BattCurrent_posX;
    uint16_t BattCurrent_posY;
    uint16_t BattCurrent_fontsize;
    uint16_t BattCurrent_align;

    uint16_t BattRemaining_en;
    uint16_t BattRemaining_panel;
    uint16_t BattRemaining_posX;
    uint16_t BattRemaining_posY;
    uint16_t BattRemaining_fontsize;
    uint16_t BattRemaining_align;

    uint16_t FlightMode_en;
    uint16_t FlightMode_panel;
    uint16_t FlightMode_posX;
    uint16_t FlightMode_posY;
    uint16_t FlightMode_fontsize;
    uint16_t FlightMode_align;

    uint16_t GpsStatus_en;
    uint16_t GpsStatus_panel;
    uint16_t GpsStatus_posX;
    uint16_t GpsStatus_posY;
    uint16_t GpsStatus_fontsize;
    uint16_t GpsStatus_align;

    uint16_t GpsHDOP_en;
    uint16_t GpsHDOP_panel;
    uint16_t GpsHDOP_posX;
    uint16_t GpsHDOP_posY;
    uint16_t GpsHDOP_fontsize;
    uint16_t GpsHDOP_align;

    uint16_t GpsLat_en;
    uint16_t GpsLat_panel;
    uint16_t GpsLat_posX;
    uint16_t GpsLat_posY;
    uint16_t GpsLat_fontsize;
    uint16_t GpsLat_align;

    uint16_t GpsLon_en;
    uint16_t GpsLon_panel;
    uint16_t GpsLon_posX;
    uint16_t GpsLon_posY;
    uint16_t GpsLon_fontsize;
    uint16_t GpsLon_align;

    uint16_t Gps2Status_en;
    uint16_t Gps2Status_panel;
    uint16_t Gps2Status_posX;
    uint16_t Gps2Status_posY;
    uint16_t Gps2Status_fontsize;
    uint16_t Gps2Status_align;

    uint16_t Gps2HDOP_en;
    uint16_t Gps2HDOP_panel;
    uint16_t Gps2HDOP_posX;
    uint16_t Gps2HDOP_posY;
    uint16_t Gps2HDOP_fontsize;
    uint16_t Gps2HDOP_align;

    uint16_t Gps2Lat_en;
    uint16_t Gps2Lat_panel;
    uint16_t Gps2Lat_posX;
    uint16_t Gps2Lat_posY;
    uint16_t Gps2Lat_fontsize;
    uint16_t Gps2Lat_align;

    uint16_t Gps2Lon_en;
    uint16_t Gps2Lon_panel;
    uint16_t Gps2Lon_posX;
    uint16_t Gps2Lon_posY;
    uint16_t Gps2Lon_fontsize;
    uint16_t Gps2Lon_align;

    uint16_t Time_en;
    uint16_t Time_panel;
    uint16_t Time_posX;
    uint16_t Time_posY;
    uint16_t Time_fontsize;
    uint16_t Time_align;

    uint16_t TALT_en;
    uint16_t TALT_panel;
    uint16_t TALT_posX;
    uint16_t TALT_posY;
    uint16_t TALT_fontsize;
    uint16_t TALT_align;
    uint16_t Alt_Scale_en;
    uint16_t Alt_Scale_panel;
    uint16_t Alt_Scale_posX;
    uint16_t Alt_Scale_align;
    uint16_t Alt_Scale_source;

    uint16_t TSPD_en;
    uint16_t TSPD_panel;
    uint16_t TSPD_posX;
    uint16_t TSPD_posY;
    uint16_t TSPD_fontsize;
    uint16_t TSPD_align;
    uint16_t Speed_scale_en;
    uint16_t Speed_scale_panel;
    uint16_t Speed_scale_posX;
    uint16_t Speed_scale_align;
    uint16_t Speed_scale_source;

    uint16_t Throt_en;
    uint16_t Throt_panel;
    uint16_t Throt_scale_en;
    uint16_t Throt_posX;
    uint16_t Throt_posY;

    uint16_t CWH_home_dist_en;
    uint16_t CWH_home_dist_panel;
    uint16_t CWH_home_dist_posX;
    uint16_t CWH_home_dist_posY;
    uint16_t CWH_home_dist_fontsize;
    uint16_t CWH_home_dist_align;

    uint16_t CWH_wp_dist_en;
    uint16_t CWH_wp_dist_panel;
    uint16_t CWH_wp_dist_posX;
    uint16_t CWH_wp_dist_posY;
    uint16_t CWH_wp_dist_fontsize;
    uint16_t CWH_wp_dist_align;

    uint16_t CWH_Tmode_en;
    uint16_t CWH_Tmode_panel;
    uint16_t CWH_Tmode_posY;
    uint16_t CWH_Nmode_en;
    uint16_t CWH_Nmode_panel;
    uint16_t CWH_Nmode_posX;
    uint16_t CWH_Nmode_posY;
    uint16_t CWH_Nmode_radius;
    uint16_t CWH_Nmode_home_radius;
    uint16_t CWH_Nmode_wp_radius;

    uint16_t Atti_mp_en;
    uint16_t Atti_mp_panel;
    uint16_t Atti_mp_mode;
    uint16_t Atti_3D_en;
    uint16_t Atti_3D_panel;

    //misc
    uint16_t Units_mode;
    uint16_t Max_panels;

    uint16_t PWM_Video_en;
    uint16_t PWM_Video_ch;
    uint16_t PWM_Video_value;
    uint16_t PWM_Panel_en;
    uint16_t PWM_Panel_ch;
    uint16_t PWM_Panel_value;

    uint16_t Alarm_posX;
    uint16_t Alarm_posY;
    uint16_t Alarm_fontsize;
    uint16_t Alarm_align;
    uint16_t Alarm_GPS_status_en;
    uint16_t Alarm_low_batt_en;
    uint16_t Alarm_low_batt;
    uint16_t Alarm_low_speed_en;
    uint16_t Alarm_low_speed;
    uint16_t Alarm_over_speed_en;
    uint16_t Alarm_over_speed;
    uint16_t Alarm_low_alt_en;
    uint16_t Alarm_low_alt;
    uint16_t Alarm_over_alt_en;
    uint16_t Alarm_over_alt;

    uint16_t ClimbRate_en;
    uint16_t ClimbRate_panel;
    uint16_t ClimbRate_posX;
    uint16_t ClimbRate_posY;
    uint16_t ClimbRate_fontsize;
    //uint16_t ClimbRate_align;

    uint16_t RSSI_en;
    uint16_t RSSI_panel;
    uint16_t RSSI_posX;
    uint16_t RSSI_posY;
    uint16_t RSSI_fontsize;
    uint16_t RSSI_align;
    uint16_t RSSI_min;
    uint16_t RSSI_max;
    uint16_t RSSI_raw_en;

    uint16_t FC_Protocol;

    uint16_t Wind_en;
    uint16_t Wind_panel;
    uint16_t Wind_posX;
    uint16_t Wind_posY;

    uint16_t Time_type;

    uint16_t Throttle_Scale_Type;

    uint16_t Atti_mp_posX;
    uint16_t Atti_mp_posY;
    uint16_t Atti_mp_scale_real;
    uint16_t Atti_mp_scale_frac;
    uint16_t Atti_3D_posX;
    uint16_t Atti_3D_posY;
    uint16_t Atti_3D_scale_real;
    uint16_t Atti_3D_scale_frac;
    uint16_t Atti_3D_map_radius;

    uint16_t osd_offsetY;
    uint16_t osd_offsetX;

    /*from firmware version 6*/
    uint16_t firmware_ver;
    uint16_t video_mode;

    /*from firmware version 7*/
    uint16_t Speed_scale_posY;
    uint16_t Alt_Scale_posY;

    uint16_t BattConsumed_en;            // total current drawn since startup in amp-hours
    uint16_t BattConsumed_panel;
    uint16_t BattConsumed_posX;
    uint16_t BattConsumed_posY;
    uint16_t BattConsumed_fontsize;
    uint16_t BattConsumed_align;

    uint16_t TotalTripDist_en;            // total trip distance since startup, calculated in meter
    uint16_t TotalTripDist_panel;
    uint16_t TotalTripDist_posX;
    uint16_t TotalTripDist_posY;
    uint16_t TotalTripDist_fontsize;
    uint16_t TotalTripDist_align;

    uint16_t RSSI_type;

    uint16_t Map_en;
    uint16_t Map_panel;
    uint16_t Map_radius;
    uint16_t Map_fontsize;
    uint16_t Map_H_align;
    uint16_t Map_V_align;

    //v1.0.9
    uint16_t Relative_ALT_en;
    uint16_t Relative_ALT_panel;
    uint16_t Relative_ALT_posX;
    uint16_t Relative_ALT_posY;
    uint16_t Relative_ALT_fontsize;
    uint16_t Relative_ALT_align;

    uint16_t Alt_Scale_type;

    uint16_t Air_Speed_en;
    uint16_t Air_Speed_panel;
    uint16_t Air_Speed_posX;
    uint16_t Air_Speed_posY;
    uint16_t Air_Speed_fontsize;
    uint16_t Air_Speed_align;

    uint16_t Spd_Scale_type;

    //v1.1.0
    uint16_t osd_offsetX_sign;
    uint16_t uart_bandrate;

    uint16_t Atti_mp_type;

    uint16_t Efficiency_en;
    uint16_t Efficiency_panel;
    uint16_t Efficiency_posX;
    uint16_t Efficiency_posY;
    uint16_t Efficiency_fontsize;
    uint16_t Efficiency_align;

    uint16_t PWM_Video_mode;
    uint16_t PWM_Panel_mode;

    uint16_t LinkQuality_en;
    uint16_t LinkQuality_panel;
    uint16_t LinkQuality_posX;
    uint16_t LinkQuality_posY;
    uint16_t LinkQuality_fontsize;
    uint16_t LinkQuality_align;
    uint16_t LinkQuality_chan;
    uint16_t LinkQuality_min;
    uint16_t LinkQuality_max;
    uint16_t LinkQuality_type;

    uint16_t Vario_Graph_enabled;
    uint16_t Vario_Graph_panel;
    uint16_t Vario_Graph_posX;
    uint16_t Vario_Graph_posY;

    uint16_t HomeDirection_enabled;
    uint16_t HomeDirection_panel;
    uint16_t HomeDirection_posX;
    uint16_t HomeDirection_posY;

    uint16_t HomeLatitude_enabled;
    uint16_t HomeLatitude_panel;
    uint16_t HomeLatitude_posX;
    uint16_t HomeLatitude_posY;
    uint16_t HomeLatitude_fontsize;
    uint16_t HomeLatitude_align;

    uint16_t HomeLongitude_enabled;
    uint16_t HomeLongitude_panel;
    uint16_t HomeLongitude_posX;
    uint16_t HomeLongitude_posY;
    uint16_t HomeLongitude_fontsize;
    uint16_t HomeLongitude_align;
    
    uint16_t Watts_en;
    uint16_t Watts_panel;
    uint16_t Watts_posX;
    uint16_t Watts_posY;
    uint16_t Watts_fontsize;
    uint16_t Watts_align;

    // From firmware_ver 11, PLAYUAV_VERSION 1.1.1, "SLG BETA 1"
    
    // Number of milliseconds to show the version splash panel
    uint16_t version_splash_milliseconds_to_show;
    
    // From firmware_ver 12, PLAYUAV_VERSION 1.1.2, "SLG BETA 2"    
    uint16_t error_alert_milliseconds_to_show;
    
    // From firmware_ver 13, PLAYUAV_VERSION 1.1.3, "RC CHANNELS"    
    uint16_t RC_Channels_en;
    uint16_t RC_Channels_panel;
    uint16_t RC_Channels_posx;
    uint16_t RC_Channels_posy;
    
    // From firmware_ver 14
    uint16_t HomeDirectionDebugInfo_enabled;
    uint16_t HomeDirectionDebugInfo_panel;
    uint16_t HomeDirectionDebugInfo_posX;
    uint16_t HomeDirectionDebugInfo_posY;    
    
    
//		//below is unused. if add a param, reduce one item here
//		uint16_t unused[EERROM_SIZE/2 - 104];
  }params;
} EEPROM_BUF_TYPE;

uint32_t get_map_bandrate(uint16_t mapbandrate);
extern EEPROM_BUF_TYPE eeprom_buffer;

#endif  //__OSD_CONFIG_H
