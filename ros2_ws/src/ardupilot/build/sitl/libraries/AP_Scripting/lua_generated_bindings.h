#pragma once
// auto generated bindings, don't manually edit.  See README.md for details.
#include <AP_Scripting/AP_Scripting_config.h>

#if AP_SCRIPTING_ENABLED

#include <AP_Vehicle/AP_Vehicle_Type.h> // needed for APM_BUILD_TYPE #if
#include <AP_VisualOdom/AP_VisualOdom.h>
#include <AP_Networking/AP_Networking_Config.h>
#if AP_NETWORKING_ENABLED
#include <AP_Networking/AP_Networking.h>
#endif // AP_NETWORKING_ENABLED
#include <AP_RTC/AP_RTC_config.h>
#if AP_RTC_ENABLED
#include <AP_RTC/AP_RTC.h>
#endif // AP_RTC_ENABLED
#include <AP_Filesystem/AP_Filesystem_config.h>
#if AP_FILESYSTEM_FILE_READING_ENABLED
#include <AP_Filesystem/AP_Filesystem.h>
#endif // AP_FILESYSTEM_FILE_READING_ENABLED
#include <AC_Fence/AC_Fence_config.h>
#if AP_FENCE_ENABLED
#include <AC_Fence/AC_Fence.h>
#endif // AP_FENCE_ENABLED
#include <AP_Logger/AP_Logger.h>
#include <AP_EFI/AP_EFI_config.h>
#if AP_EFI_SCRIPTING_ENABLED
#include <AP_EFI/AP_EFI_Scripting.h>
#endif // AP_EFI_SCRIPTING_ENABLED
#if HAL_EFI_ENABLED
#include <AP_EFI/AP_EFI.h>
#endif // HAL_EFI_ENABLED
#include <AP_Compass/AP_Compass.h>
#include <AP_IOMCU/AP_IOMCU.h>
#include <AP_Winch/AP_Winch.h>
#include <AP_Camera/AP_Camera.h>
#include <AP_Mount/AP_Mount.h>
#if APM_BUILD_TYPE(APM_BUILD_Rover)
#include <APM_Control/AR_PosControl.h>
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)
#if APM_BUILD_TYPE(APM_BUILD_Rover)
#include <APM_Control/AR_AttitudeControl.h>
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#include <AC_AttitudeControl/AC_AttitudeControl.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#include <AC_PrecLand/AC_PrecLand.h>
#include <AP_Follow/AP_Follow.h>
#include <AP_Common/AP_FWVersion.h>
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#include <AP_Motors/AP_Motors_Class.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if defined(HAL_BUILD_AP_PERIPH)
#include <../Tools/AP_Periph/AP_Periph.h>
#endif // defined(HAL_BUILD_AP_PERIPH)
#include <AP_HAL/AP_HAL.h>
#include <AP_Scripting/AP_Scripting_CANSensor.h>
#include <AP_InertialSensor/AP_InertialSensor.h>
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#include <AP_Motors/AP_MotorsMatrix_Scripting_Dynamic.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if (AP_NETWORKING_ENABLED==1)
#include <AP_HAL/utility/Socket.h>
#endif // (AP_NETWORKING_ENABLED==1)
#include <AP_HAL/I2CDevice.h>
#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#include <AP_Motors/AP_MotorsMatrix_6DoF_Scripting.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#include <AC_AttitudeControl/AC_AttitudeControl_Multi_6DoF.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#include <AP_Frsky_Telem/AP_Frsky_SPort.h>
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#include <AP_Motors/AP_MotorsMatrix.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
#include <../ArduSub/Sub.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)
#include <../ArduPlane/quadplane.h>
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)
#include <AP_Notify/AP_Notify_config.h>
#if AP_NOTIFY_SCRIPTING_LED_ENABLED
#include <AP_Notify/ScriptingLED.h>
#endif // AP_NOTIFY_SCRIPTING_LED_ENABLED
#include <AP_Button/AP_Button.h>
#include <AP_RPM/AP_RPM.h>
#include <AP_Mission/AP_Mission.h>
#include <AP_Scripting/AP_Scripting.h>
#include <AP_Scripting/AP_Scripting_helpers.h>
#include <AP_Param/AP_Param.h>
#include <AP_ESC_Telem/AP_ESC_Telem.h>
#include <AP_OpticalFlow/AP_OpticalFlow.h>
#include <AP_Baro/AP_Baro.h>
#include <AP_SerialManager/AP_SerialManager.h>
#include <RC_Channel/RC_Channel.h>
#include <SRV_Channel/SRV_Channel.h>
#include <AP_SerialLED/AP_SerialLED.h>
#include <AP_Vehicle/AP_Vehicle.h>
#if ENABLE_ONVIF == 1
#include <AP_ONVIF/AP_ONVIF.h>
#endif // ENABLE_ONVIF == 1
#include <GCS_MAVLink/GCS.h>
#include <AP_Relay/AP_Relay.h>
#include <AP_Terrain/AP_Terrain.h>
#include <AP_RangeFinder/AP_RangeFinder_Backend.h>
#include <AP_RangeFinder/AP_RangeFinder.h>
#include <AP_Proximity/AP_Proximity_Backend.h>
#include <AP_Proximity/AP_Proximity.h>
#include <AP_Notify/AP_Notify.h>
#include <AP_Math/AP_Math.h>
#include <AP_GPS/AP_GPS.h>
#include <AP_BattMonitor/AP_BattMonitor_Scripting.h>
#include <AP_BattMonitor/AP_BattMonitor.h>
#include <AP_Arming/AP_Arming.h>
#include <AP_AHRS/AP_AHRS.h>
#include <AP_Common/Location.h>
#include <AP_Scripting/lua/src/lua.hpp>
#include <new>

#if AP_FILESYSTEM_FILE_READING_ENABLED
int new_AP_Filesystem__stat_t(lua_State *L);
int lua_new_AP_Filesystem__stat_t(lua_State *L);
AP_Filesystem::stat_t * check_AP_Filesystem__stat_t(lua_State *L, int arg);
#endif // AP_FILESYSTEM_FILE_READING_ENABLED
int new_uint32_t(lua_State *L);
uint32_t * check_uint32_t(lua_State *L, int arg);
#if (AP_EFI_SCRIPTING_ENABLED == 1)
int new_EFI_State(lua_State *L);
int lua_new_EFI_State(lua_State *L);
EFI_State * check_EFI_State(lua_State *L, int arg);
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if (AP_EFI_SCRIPTING_ENABLED == 1)
int new_Cylinder_Status(lua_State *L);
int lua_new_Cylinder_Status(lua_State *L);
Cylinder_Status * check_Cylinder_Status(lua_State *L, int arg);
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
int new_AP_Camera__camera_state_t(lua_State *L);
int lua_new_AP_Camera__camera_state_t(lua_State *L);
AP_Camera::camera_state_t * check_AP_Camera__camera_state_t(lua_State *L, int arg);
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
int new_AP_HAL__CANFrame(lua_State *L);
int lua_new_AP_HAL__CANFrame(lua_State *L);
AP_HAL::CANFrame * check_AP_HAL__CANFrame(lua_State *L, int arg);
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
int new_AP_MotorsMatrix_Scripting_Dynamic__factor_table(lua_State *L);
int lua_new_AP_MotorsMatrix_Scripting_Dynamic__factor_table(lua_State *L);
AP_MotorsMatrix_Scripting_Dynamic::factor_table * check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(lua_State *L, int arg);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if AP_MISSION_ENABLED
int new_mavlink_mission_item_int_t(lua_State *L);
int lua_new_mavlink_mission_item_int_t(lua_State *L);
mavlink_mission_item_int_t * check_mavlink_mission_item_int_t(lua_State *L, int arg);
#endif // AP_MISSION_ENABLED
int new_Parameter(lua_State *L);
Parameter * check_Parameter(lua_State *L, int arg);
#if (HAL_WITH_ESC_TELEM == 1)
int new_AP_ESC_Telem_Backend__TelemetryData(lua_State *L);
int lua_new_AP_ESC_Telem_Backend__TelemetryData(lua_State *L);
AP_ESC_Telem_Backend::TelemetryData * check_AP_ESC_Telem_Backend__TelemetryData(lua_State *L, int arg);
#endif // (HAL_WITH_ESC_TELEM == 1)
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
int new_RangeFinder__RangeFinder_State(lua_State *L);
int lua_new_RangeFinder__RangeFinder_State(lua_State *L);
RangeFinder::RangeFinder_State * check_RangeFinder__RangeFinder_State(lua_State *L, int arg);
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if AP_AHRS_ENABLED
int new_Quaternion(lua_State *L);
int lua_new_Quaternion(lua_State *L);
Quaternion * check_Quaternion(lua_State *L, int arg);
#endif // AP_AHRS_ENABLED
int new_Vector2f(lua_State *L);
int lua_new_Vector2f(lua_State *L);
Vector2f * check_Vector2f(lua_State *L, int arg);
int new_Vector3f(lua_State *L);
int lua_new_Vector3f(lua_State *L);
Vector3f * check_Vector3f(lua_State *L, int arg);
#if AP_BATTERY_SCRIPTING_ENABLED
int new_BattMonitorScript_State(lua_State *L);
int lua_new_BattMonitorScript_State(lua_State *L);
BattMonitorScript_State * check_BattMonitorScript_State(lua_State *L, int arg);
#endif // AP_BATTERY_SCRIPTING_ENABLED
int new_Location(lua_State *L);
int lua_new_Location(lua_State *L);
Location * check_Location(lua_State *L, int arg);
#if (AP_EFI_SCRIPTING_ENABLED == 1)
int new_AP_EFI_Backend(lua_State *L);
AP_EFI_Backend ** check_AP_EFI_Backend(lua_State *L, int arg);
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
int new_ScriptingCANBuffer(lua_State *L);
ScriptingCANBuffer ** check_ScriptingCANBuffer(lua_State *L, int arg);
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
int new_AP_HAL__PWMSource(lua_State *L);
AP_HAL::PWMSource ** check_AP_HAL__PWMSource(lua_State *L, int arg);
#if !defined(HAL_DISABLE_ADC_DRIVER)
int new_AP_HAL__AnalogSource(lua_State *L);
AP_HAL::AnalogSource ** check_AP_HAL__AnalogSource(lua_State *L, int arg);
#endif // !defined(HAL_DISABLE_ADC_DRIVER)
#if (AP_NETWORKING_ENABLED==1)
int new_SocketAPM(lua_State *L);
SocketAPM ** check_SocketAPM(lua_State *L, int arg);
#endif // (AP_NETWORKING_ENABLED==1)
int new_AP_HAL__I2CDevice(lua_State *L);
AP_HAL::I2CDevice ** check_AP_HAL__I2CDevice(lua_State *L, int arg);
int new_AP_HAL__UARTDriver(lua_State *L);
AP_HAL::UARTDriver ** check_AP_HAL__UARTDriver(lua_State *L, int arg);
#if AP_RC_CHANNEL_ENABLED
int new_RC_Channel(lua_State *L);
RC_Channel ** check_RC_Channel(lua_State *L, int arg);
#endif // AP_RC_CHANNEL_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
int new_AP_RangeFinder_Backend(lua_State *L);
AP_RangeFinder_Backend ** check_AP_RangeFinder_Backend(lua_State *L, int arg);
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if HAL_PROXIMITY_ENABLED == 1
int new_AP_Proximity_Backend(lua_State *L);
AP_Proximity_Backend ** check_AP_Proximity_Backend(lua_State *L, int arg);
#endif // HAL_PROXIMITY_ENABLED == 1
void load_generated_bindings(lua_State *L);
void load_generated_sandbox(lua_State *L);
int binding_argcheck(lua_State *L, int expected_arg_count);
bool userdata_zero_arg_check(lua_State *L);
lua_Integer get_integer(lua_State *L, int arg_num, lua_Integer min_val, lua_Integer max_val);
int8_t get_int8_t(lua_State *L, int arg_num);
int16_t get_int16_t(lua_State *L, int arg_num);
uint8_t get_uint8_t(lua_State *L, int arg_num);
uint16_t get_uint16_t(lua_State *L, int arg_num);
float get_number(lua_State *L, int arg_num, float min_val, float max_val);
uint32_t get_uint32(lua_State *L, int arg_num, uint32_t min_val, uint32_t max_val);
int new_ap_object(lua_State *L, size_t size, const char * name);
#if HAL_VISUALODOM_ENABLED
AP_VisualOdom * check_AP_VisualOdom(lua_State *L);
#endif // HAL_VISUALODOM_ENABLED
#if AP_NETWORKING_ENABLED
AP_Networking * check_AP_Networking(lua_State *L);
#endif // AP_NETWORKING_ENABLED
#if AP_RTC_ENABLED
AP_RTC * check_AP_RTC(lua_State *L);
#endif // AP_RTC_ENABLED
AP_Filesystem * check_AP_Filesystem(lua_State *L);
#if AP_FENCE_ENABLED
AC_Fence * check_AC_Fence(lua_State *L);
#endif // AP_FENCE_ENABLED
#if HAL_LOGGING_ENABLED
AP_Logger * check_AP_Logger(lua_State *L);
#endif // HAL_LOGGING_ENABLED
#if (AP_EFI_SCRIPTING_ENABLED == 1)
AP_EFI * check_AP_EFI(lua_State *L);
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_COMPASS_ENABLED
Compass * check_Compass(lua_State *L);
#endif // AP_COMPASS_ENABLED
#if HAL_WITH_IO_MCU
AP_IOMCU * check_AP_IOMCU(lua_State *L);
#endif // HAL_WITH_IO_MCU
#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
AP_Winch * check_AP_Winch(lua_State *L);
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
AP_Camera * check_AP_Camera(lua_State *L);
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
#if HAL_MOUNT_ENABLED == 1
AP_Mount * check_AP_Mount(lua_State *L);
#endif // HAL_MOUNT_ENABLED == 1
#if APM_BUILD_TYPE(APM_BUILD_Rover)
AR_PosControl * check_AR_PosControl(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)
#if APM_BUILD_TYPE(APM_BUILD_Rover)
AR_AttitudeControl * check_AR_AttitudeControl(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AC_AttitudeControl * check_AC_AttitudeControl(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
AC_PrecLand * check_AC_PrecLand(lua_State *L);
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
AP_Follow * check_AP_Follow(lua_State *L);
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
#if defined(HAL_BUILD_AP_PERIPH)
AP_Periph_FW * check_AP_Periph_FW(lua_State *L);
#endif // defined(HAL_BUILD_AP_PERIPH)
#if AP_INERTIALSENSOR_ENABLED
AP_InertialSensor * check_AP_InertialSensor(lua_State *L);
#endif // AP_INERTIALSENSOR_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AP_MotorsMatrix_Scripting_Dynamic * check_AP_MotorsMatrix_Scripting_Dynamic(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
AP_MotorsMatrix_6DoF_Scripting * check_AP_MotorsMatrix_6DoF_Scripting(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
AC_AttitudeControl_Multi_6DoF * check_AC_AttitudeControl_Multi_6DoF(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#if AP_FRSKY_SPORT_TELEM_ENABLED
AP_Frsky_SPort * check_AP_Frsky_SPort(lua_State *L);
#endif // AP_FRSKY_SPORT_TELEM_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AP_MotorsMatrix * check_AP_MotorsMatrix(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
Sub * check_Sub(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
QuadPlane * check_QuadPlane(lua_State *L);
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
#if AP_NOTIFY_SCRIPTING_LED_ENABLED
ScriptingLED * check_ScriptingLED(lua_State *L);
#endif // AP_NOTIFY_SCRIPTING_LED_ENABLED
#if HAL_BUTTON_ENABLED == 1
AP_Button * check_AP_Button(lua_State *L);
#endif // HAL_BUTTON_ENABLED == 1
#if AP_RPM_ENABLED
AP_RPM * check_AP_RPM(lua_State *L);
#endif // AP_RPM_ENABLED
#if AP_MISSION_ENABLED
AP_Mission * check_AP_Mission(lua_State *L);
#endif // AP_MISSION_ENABLED
AP_Scripting * check_AP_Scripting(lua_State *L);
AP_Param * check_AP_Param(lua_State *L);
#if HAL_WITH_ESC_TELEM == 1
AP_ESC_Telem * check_AP_ESC_Telem(lua_State *L);
#endif // HAL_WITH_ESC_TELEM == 1
#if AP_OPTICALFLOW_ENABLED
AP_OpticalFlow * check_AP_OpticalFlow(lua_State *L);
#endif // AP_OPTICALFLOW_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
AP_Baro * check_AP_Baro(lua_State *L);
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
#if HAL_GCS_ENABLED
AP_SerialManager * check_AP_SerialManager(lua_State *L);
#endif // HAL_GCS_ENABLED
#if AP_RC_CHANNEL_ENABLED
RC_Channels * check_RC_Channels(lua_State *L);
#endif // AP_RC_CHANNEL_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
SRV_Channels * check_SRV_Channels(lua_State *L);
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
#if AP_SERIALLED_ENABLED
AP_SerialLED * check_AP_SerialLED(lua_State *L);
#endif // AP_SERIALLED_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH))
AP_Vehicle * check_AP_Vehicle(lua_State *L);
#endif // (!defined(HAL_BUILD_AP_PERIPH))
#if ENABLE_ONVIF == 1
AP_ONVIF * check_AP_ONVIF(lua_State *L);
#endif // ENABLE_ONVIF == 1
#if HAL_GCS_ENABLED
GCS * check_GCS(lua_State *L);
#endif // HAL_GCS_ENABLED
#if AP_RELAY_ENABLED
AP_Relay * check_AP_Relay(lua_State *L);
#endif // AP_RELAY_ENABLED
#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
AP_Terrain * check_AP_Terrain(lua_State *L);
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
RangeFinder * check_RangeFinder(lua_State *L);
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if HAL_PROXIMITY_ENABLED == 1
AP_Proximity * check_AP_Proximity(lua_State *L);
#endif // HAL_PROXIMITY_ENABLED == 1
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
AP_Notify * check_AP_Notify(lua_State *L);
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
AP_GPS * check_AP_GPS(lua_State *L);
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
#if AP_BATTERY_ENABLED
AP_BattMonitor * check_AP_BattMonitor(lua_State *L);
#endif // AP_BATTERY_ENABLED
#if AP_ARMING_ENABLED
AP_Arming * check_AP_Arming(lua_State *L);
#endif // AP_ARMING_ENABLED
#if AP_AHRS_ENABLED
AP_AHRS * check_AP_AHRS(lua_State *L);
#endif // AP_AHRS_ENABLED
#endif  // AP_SCRIPTING_ENABLED
