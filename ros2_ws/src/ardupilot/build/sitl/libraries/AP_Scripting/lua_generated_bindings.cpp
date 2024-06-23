// auto generated bindings, don't manually edit.  See README.md for details.
#include <AP_Scripting/AP_Scripting_config.h>

#if AP_SCRIPTING_ENABLED

#pragma GCC optimize("Os")
#include "lua_generated_bindings.h"
#include <AP_Scripting/lua_boxed_numerics.h>
#include <AP_Scripting/lua_bindings.h>
#include <AP_Scripting/lua_scripts.h>

#include <AP_Scheduler/AP_Scheduler.h>
extern const AP_HAL::HAL& hal;
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


int binding_argcheck(lua_State *L, int expected_arg_count) {
    const int args = lua_gettop(L);
    if (args > expected_arg_count) {
        return luaL_argerror(L, args, "too many arguments");
    } else if (args < expected_arg_count) {
        return luaL_argerror(L, args, "too few arguments");
    }
    return 0;
}

bool userdata_zero_arg_check(lua_State *L) {
    if (lua_gettop(L) == 0) {
        return false;
    }
    lua_Debug ar;
    if (lua_getstack(L, 1, &ar)) {
        lua_getinfo(L, "Sl", &ar);
        if (ar.currentline != 0) {
            if (lua_getstack(L, 0, &ar)) {
                lua_getinfo(L, "n", &ar);
                if (ar.name != NULL) {
                    lua_scripts::set_and_print_new_error_message(MAV_SEVERITY_WARNING, "%s:%d Warning: %s does not take arguments, will be fatal in future", ar.short_src, ar.currentline, ar.name);
                    return true;
                }
            }
        }
    }
    lua_scripts::set_and_print_new_error_message(MAV_SEVERITY_WARNING, "Warning: userdate creation does not take arguments, will be fatal in future");
    return true;
}

lua_Integer get_integer(lua_State *L, int arg_num, lua_Integer min_val, lua_Integer max_val) {
    const lua_Integer lua_int = luaL_checkinteger(L, arg_num);
    luaL_argcheck(L, (lua_int >= min_val) && (lua_int <= max_val), arg_num, "out of range");
    return lua_int;
}

// helpers for full range types
int8_t get_int8_t(lua_State *L, int arg_num) {
    return static_cast<int8_t>(get_integer(L, arg_num, INT8_MIN, INT8_MAX));
}

int16_t get_int16_t(lua_State *L, int arg_num) {
    return static_cast<int16_t>(get_integer(L, arg_num, INT16_MIN, INT16_MAX));
}

uint8_t get_uint8_t(lua_State *L, int arg_num) {
    return static_cast<uint8_t>(get_integer(L, arg_num, 0, UINT8_MAX));
}

uint16_t get_uint16_t(lua_State *L, int arg_num) {
    return static_cast<uint16_t>(get_integer(L, arg_num, 0, UINT16_MAX));
}

float get_number(lua_State *L, int arg_num, float min_val, float max_val) {
    const float lua_num = luaL_checknumber(L, arg_num);
    luaL_argcheck(L, (lua_num >= min_val) && (lua_num <= max_val), arg_num, "out of range");
    return lua_num;
}

uint32_t get_uint32(lua_State *L, int arg_num, uint32_t min_val, uint32_t max_val) {
    const uint32_t lua_unint32 = coerce_to_uint32_t(L, arg_num);
    luaL_argcheck(L, (lua_unint32 >= min_val) && (lua_unint32 <= max_val), arg_num, "out of range");
    return lua_unint32;
}

int new_ap_object(lua_State *L, size_t size, const char * name) {
    luaL_checkstack(L, 2, "Out of stack");
    lua_newuserdata(L, size);
    luaL_getmetatable(L, name);
    lua_setmetatable(L, -2);
    return 1;
}

static int not_supported_error(lua_State *L, int arg, const char* name) {
    char error_msg[50];
    snprintf(error_msg, sizeof(error_msg), "%s not supported on this firmware", name);
    return luaL_argerror(L, arg, error_msg);
}

struct userdata_enum {
    const char *name;
    int value;
};

struct userdata_meta {
    const char *name;
    lua_CFunction func;
    const luaL_Reg *operators;
};

static bool load_function(lua_State *L, const luaL_Reg *list, const uint8_t length, const char* name) {
    for (uint8_t i = 0; i < length; i++) {
        if (strcmp(name,list[i].name) == 0) {
            lua_pushcfunction(L, list[i].func);
            return true;
        }
    }
    return false;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
static bool load_enum(lua_State *L, const userdata_enum *list, const uint8_t length, const char* name) {
    for (uint8_t i = 0; i < length; i++) {
        if (strcmp(name,list[i].name) == 0) {
            lua_pushinteger(L, list[i].value);
            return true;
        }
    }
    return false;
}
#pragma GCC diagnostic pop

#if AP_FILESYSTEM_FILE_READING_ENABLED
int new_AP_Filesystem__stat_t(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(AP_Filesystem::stat_t));
    new (ud) AP_Filesystem::stat_t();
    luaL_getmetatable(L, "stat_t");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_AP_Filesystem__stat_t(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_AP_Filesystem__stat_t(L);
}
#endif // AP_FILESYSTEM_FILE_READING_ENABLED

int new_uint32_t(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(uint32_t));
    new (ud) uint32_t();
    luaL_getmetatable(L, "uint32_t");
    lua_setmetatable(L, -2);
    return 1;
}

#if (AP_EFI_SCRIPTING_ENABLED == 1)
int new_EFI_State(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(EFI_State));
    new (ud) EFI_State();
    luaL_getmetatable(L, "EFI_State");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_EFI_State(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_EFI_State(L);
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if (AP_EFI_SCRIPTING_ENABLED == 1)
int new_Cylinder_Status(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(Cylinder_Status));
    new (ud) Cylinder_Status();
    luaL_getmetatable(L, "Cylinder_Status");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_Cylinder_Status(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_Cylinder_Status(L);
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
int new_AP_Camera__camera_state_t(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(AP_Camera::camera_state_t));
    new (ud) AP_Camera::camera_state_t();
    luaL_getmetatable(L, "AP_Camera::camera_state_t");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_AP_Camera__camera_state_t(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_AP_Camera__camera_state_t(L);
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
int new_AP_HAL__CANFrame(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(AP_HAL::CANFrame));
    new (ud) AP_HAL::CANFrame();
    luaL_getmetatable(L, "CANFrame");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_AP_HAL__CANFrame(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_AP_HAL__CANFrame(L);
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
int new_AP_MotorsMatrix_Scripting_Dynamic__factor_table(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(AP_MotorsMatrix_Scripting_Dynamic::factor_table));
    new (ud) AP_MotorsMatrix_Scripting_Dynamic::factor_table();
    luaL_getmetatable(L, "motor_factor_table");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_AP_MotorsMatrix_Scripting_Dynamic__factor_table(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_AP_MotorsMatrix_Scripting_Dynamic__factor_table(L);
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if AP_MISSION_ENABLED
int new_mavlink_mission_item_int_t(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(mavlink_mission_item_int_t));
    new (ud) mavlink_mission_item_int_t();
    luaL_getmetatable(L, "mavlink_mission_item_int_t");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_mavlink_mission_item_int_t(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_mavlink_mission_item_int_t(L);
}
#endif // AP_MISSION_ENABLED

int new_Parameter(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(Parameter));
    new (ud) Parameter();
    luaL_getmetatable(L, "Parameter");
    lua_setmetatable(L, -2);
    return 1;
}

#if (HAL_WITH_ESC_TELEM == 1)
int new_AP_ESC_Telem_Backend__TelemetryData(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(AP_ESC_Telem_Backend::TelemetryData));
    new (ud) AP_ESC_Telem_Backend::TelemetryData();
    luaL_getmetatable(L, "ESCTelemetryData");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_AP_ESC_Telem_Backend__TelemetryData(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_AP_ESC_Telem_Backend__TelemetryData(L);
}
#endif // (HAL_WITH_ESC_TELEM == 1)

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
int new_RangeFinder__RangeFinder_State(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(RangeFinder::RangeFinder_State));
    new (ud) RangeFinder::RangeFinder_State();
    luaL_getmetatable(L, "RangeFinder_State");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_RangeFinder__RangeFinder_State(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_RangeFinder__RangeFinder_State(L);
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if AP_AHRS_ENABLED
int new_Quaternion(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(Quaternion));
    new (ud) Quaternion();
    luaL_getmetatable(L, "Quaternion");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_Quaternion(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_Quaternion(L);
}
#endif // AP_AHRS_ENABLED

int new_Vector2f(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(Vector2f));
    new (ud) Vector2f();
    luaL_getmetatable(L, "Vector2f");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_Vector2f(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_Vector2f(L);
}

int new_Vector3f(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(Vector3f));
    new (ud) Vector3f();
    luaL_getmetatable(L, "Vector3f");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_Vector3f(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_Vector3f(L);
}

#if AP_BATTERY_SCRIPTING_ENABLED
int new_BattMonitorScript_State(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(BattMonitorScript_State));
    new (ud) BattMonitorScript_State();
    luaL_getmetatable(L, "BattMonitorScript_State");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_BattMonitorScript_State(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_BattMonitorScript_State(L);
}
#endif // AP_BATTERY_SCRIPTING_ENABLED

int new_Location(lua_State *L) {
    luaL_checkstack(L, 2, "Out of stack");
    void *ud = lua_newuserdata(L, sizeof(Location));
    new (ud) Location();
    luaL_getmetatable(L, "Location");
    lua_setmetatable(L, -2);
    return 1;
}

int lua_new_Location(lua_State *L) {
    static bool warned = false;
    if (!warned && userdata_zero_arg_check(L)) {
        warned = true;
    }
    return new_Location(L);
}

#if AP_FILESYSTEM_FILE_READING_ENABLED
AP_Filesystem::stat_t * check_AP_Filesystem__stat_t(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "stat_t");
    return (AP_Filesystem::stat_t *)data;
}
#endif // AP_FILESYSTEM_FILE_READING_ENABLED

uint32_t * check_uint32_t(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "uint32_t");
    return (uint32_t *)data;
}

#if (AP_EFI_SCRIPTING_ENABLED == 1)
EFI_State * check_EFI_State(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "EFI_State");
    return (EFI_State *)data;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if (AP_EFI_SCRIPTING_ENABLED == 1)
Cylinder_Status * check_Cylinder_Status(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "Cylinder_Status");
    return (Cylinder_Status *)data;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
AP_Camera::camera_state_t * check_AP_Camera__camera_state_t(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "AP_Camera::camera_state_t");
    return (AP_Camera::camera_state_t *)data;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
AP_HAL::CANFrame * check_AP_HAL__CANFrame(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "CANFrame");
    return (AP_HAL::CANFrame *)data;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AP_MotorsMatrix_Scripting_Dynamic::factor_table * check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "motor_factor_table");
    return (AP_MotorsMatrix_Scripting_Dynamic::factor_table *)data;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if AP_MISSION_ENABLED
mavlink_mission_item_int_t * check_mavlink_mission_item_int_t(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "mavlink_mission_item_int_t");
    return (mavlink_mission_item_int_t *)data;
}
#endif // AP_MISSION_ENABLED

Parameter * check_Parameter(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "Parameter");
    return (Parameter *)data;
}

#if (HAL_WITH_ESC_TELEM == 1)
AP_ESC_Telem_Backend::TelemetryData * check_AP_ESC_Telem_Backend__TelemetryData(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "ESCTelemetryData");
    return (AP_ESC_Telem_Backend::TelemetryData *)data;
}
#endif // (HAL_WITH_ESC_TELEM == 1)

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
RangeFinder::RangeFinder_State * check_RangeFinder__RangeFinder_State(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "RangeFinder_State");
    return (RangeFinder::RangeFinder_State *)data;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if AP_AHRS_ENABLED
Quaternion * check_Quaternion(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "Quaternion");
    return (Quaternion *)data;
}
#endif // AP_AHRS_ENABLED

Vector2f * check_Vector2f(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "Vector2f");
    return (Vector2f *)data;
}

Vector3f * check_Vector3f(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "Vector3f");
    return (Vector3f *)data;
}

#if AP_BATTERY_SCRIPTING_ENABLED
BattMonitorScript_State * check_BattMonitorScript_State(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "BattMonitorScript_State");
    return (BattMonitorScript_State *)data;
}
#endif // AP_BATTERY_SCRIPTING_ENABLED

Location * check_Location(lua_State *L, int arg) {
    void *data = luaL_checkudata(L, arg, "Location");
    return (Location *)data;
}

#if (AP_EFI_SCRIPTING_ENABLED == 1)
int new_AP_EFI_Backend(lua_State *L) {
    return new_ap_object(L, sizeof(AP_EFI_Backend *), "AP_EFI_Backend");
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
int new_ScriptingCANBuffer(lua_State *L) {
    return new_ap_object(L, sizeof(ScriptingCANBuffer *), "ScriptingCANBuffer");
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

int new_AP_HAL__PWMSource(lua_State *L) {
    return new_ap_object(L, sizeof(AP_HAL::PWMSource *), "AP_HAL::PWMSource");
}

#if !defined(HAL_DISABLE_ADC_DRIVER)
int new_AP_HAL__AnalogSource(lua_State *L) {
    return new_ap_object(L, sizeof(AP_HAL::AnalogSource *), "AP_HAL::AnalogSource");
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if (AP_NETWORKING_ENABLED==1)
int new_SocketAPM(lua_State *L) {
    return new_ap_object(L, sizeof(SocketAPM *), "SocketAPM");
}
#endif // (AP_NETWORKING_ENABLED==1)

int new_AP_HAL__I2CDevice(lua_State *L) {
    return new_ap_object(L, sizeof(AP_HAL::I2CDevice *), "AP_HAL::I2CDevice");
}

int new_AP_HAL__UARTDriver(lua_State *L) {
    return new_ap_object(L, sizeof(AP_HAL::UARTDriver *), "AP_HAL::UARTDriver");
}

#if AP_RC_CHANNEL_ENABLED
int new_RC_Channel(lua_State *L) {
    return new_ap_object(L, sizeof(RC_Channel *), "RC_Channel");
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
int new_AP_RangeFinder_Backend(lua_State *L) {
    return new_ap_object(L, sizeof(AP_RangeFinder_Backend *), "AP_RangeFinder_Backend");
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
int new_AP_Proximity_Backend(lua_State *L) {
    return new_ap_object(L, sizeof(AP_Proximity_Backend *), "AP_Proximity_Backend");
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if (AP_EFI_SCRIPTING_ENABLED == 1)
AP_EFI_Backend ** check_AP_EFI_Backend(lua_State *L, int arg) {
    AP_EFI_Backend ** data = (AP_EFI_Backend**)luaL_checkudata(L, arg, "AP_EFI_Backend");
    AP_EFI_Backend * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
ScriptingCANBuffer ** check_ScriptingCANBuffer(lua_State *L, int arg) {
    ScriptingCANBuffer ** data = (ScriptingCANBuffer**)luaL_checkudata(L, arg, "ScriptingCANBuffer");
    ScriptingCANBuffer * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

AP_HAL::PWMSource ** check_AP_HAL__PWMSource(lua_State *L, int arg) {
    AP_HAL::PWMSource ** data = (AP_HAL::PWMSource**)luaL_checkudata(L, arg, "AP_HAL::PWMSource");
    AP_HAL::PWMSource * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}

#if !defined(HAL_DISABLE_ADC_DRIVER)
AP_HAL::AnalogSource ** check_AP_HAL__AnalogSource(lua_State *L, int arg) {
    AP_HAL::AnalogSource ** data = (AP_HAL::AnalogSource**)luaL_checkudata(L, arg, "AP_HAL::AnalogSource");
    AP_HAL::AnalogSource * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if (AP_NETWORKING_ENABLED==1)
SocketAPM ** check_SocketAPM(lua_State *L, int arg) {
    SocketAPM ** data = (SocketAPM**)luaL_checkudata(L, arg, "SocketAPM");
    SocketAPM * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // (AP_NETWORKING_ENABLED==1)

AP_HAL::I2CDevice ** check_AP_HAL__I2CDevice(lua_State *L, int arg) {
    AP_HAL::I2CDevice ** data = (AP_HAL::I2CDevice**)luaL_checkudata(L, arg, "AP_HAL::I2CDevice");
    AP_HAL::I2CDevice * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}

AP_HAL::UARTDriver ** check_AP_HAL__UARTDriver(lua_State *L, int arg) {
    AP_HAL::UARTDriver ** data = (AP_HAL::UARTDriver**)luaL_checkudata(L, arg, "AP_HAL::UARTDriver");
    AP_HAL::UARTDriver * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}

#if AP_RC_CHANNEL_ENABLED
RC_Channel ** check_RC_Channel(lua_State *L, int arg) {
    RC_Channel ** data = (RC_Channel**)luaL_checkudata(L, arg, "RC_Channel");
    RC_Channel * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
AP_RangeFinder_Backend ** check_AP_RangeFinder_Backend(lua_State *L, int arg) {
    AP_RangeFinder_Backend ** data = (AP_RangeFinder_Backend**)luaL_checkudata(L, arg, "AP_RangeFinder_Backend");
    AP_RangeFinder_Backend * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
AP_Proximity_Backend ** check_AP_Proximity_Backend(lua_State *L, int arg) {
    AP_Proximity_Backend ** data = (AP_Proximity_Backend**)luaL_checkudata(L, arg, "AP_Proximity_Backend");
    AP_Proximity_Backend * ud = *data;
    if (ud == NULL) {
        // This error will never return, so there is no danger of returning a NULL
        luaL_error(L, "Internal error, null pointer");
    }
    return data;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_VISUALODOM_ENABLED
AP_VisualOdom * check_AP_VisualOdom(lua_State *L) {
    AP_VisualOdom * ud = AP_VisualOdom::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "visual_odom");
    }
    return ud;
}
#endif // HAL_VISUALODOM_ENABLED

#if AP_NETWORKING_ENABLED
AP_Networking * check_AP_Networking(lua_State *L) {
    AP_Networking * ud = AP_Networking::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "networking");
    }
    return ud;
}
#endif // AP_NETWORKING_ENABLED

#if AP_RTC_ENABLED
AP_RTC * check_AP_RTC(lua_State *L) {
    AP_RTC * ud = AP_RTC::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "rtc");
    }
    return ud;
}
#endif // AP_RTC_ENABLED

AP_Filesystem * check_AP_Filesystem(lua_State *L) {
    AP_Filesystem * ud = AP_Filesystem::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "fs");
    }
    return ud;
}

#if AP_FENCE_ENABLED
AC_Fence * check_AC_Fence(lua_State *L) {
    AC_Fence * ud = AC_Fence::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "fence");
    }
    return ud;
}
#endif // AP_FENCE_ENABLED

#if HAL_LOGGING_ENABLED
AP_Logger * check_AP_Logger(lua_State *L) {
    AP_Logger * ud = AP_Logger::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "logger");
    }
    return ud;
}
#endif // HAL_LOGGING_ENABLED

#if (AP_EFI_SCRIPTING_ENABLED == 1)
AP_EFI * check_AP_EFI(lua_State *L) {
    AP_EFI * ud = AP_EFI::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "efi");
    }
    return ud;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_COMPASS_ENABLED
Compass * check_Compass(lua_State *L) {
    Compass * ud = Compass::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "compass");
    }
    return ud;
}
#endif // AP_COMPASS_ENABLED

#if HAL_WITH_IO_MCU
AP_IOMCU * check_AP_IOMCU(lua_State *L) {
    AP_IOMCU * ud = AP_IOMCU::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "iomcu");
    }
    return ud;
}
#endif // HAL_WITH_IO_MCU

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
AP_Winch * check_AP_Winch(lua_State *L) {
    AP_Winch * ud = AP_Winch::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "winch");
    }
    return ud;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
AP_Camera * check_AP_Camera(lua_State *L) {
    AP_Camera * ud = AP_Camera::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "camera");
    }
    return ud;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if HAL_MOUNT_ENABLED == 1
AP_Mount * check_AP_Mount(lua_State *L) {
    AP_Mount * ud = AP_Mount::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "mount");
    }
    return ud;
}
#endif // HAL_MOUNT_ENABLED == 1

#if APM_BUILD_TYPE(APM_BUILD_Rover)
AR_PosControl * check_AR_PosControl(lua_State *L) {
    AR_PosControl * ud = AR_PosControl::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "AR_PosControl");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)

#if APM_BUILD_TYPE(APM_BUILD_Rover)
AR_AttitudeControl * check_AR_AttitudeControl(lua_State *L) {
    AR_AttitudeControl * ud = AR_AttitudeControl::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "AR_AttitudeControl");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AC_AttitudeControl * check_AC_AttitudeControl(lua_State *L) {
    AC_AttitudeControl * ud = AC_AttitudeControl::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "AC_AttitudeControl");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
AC_PrecLand * check_AC_PrecLand(lua_State *L) {
    AC_PrecLand * ud = AC_PrecLand::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "precland");
    }
    return ud;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
AP_Follow * check_AP_Follow(lua_State *L) {
    AP_Follow * ud = AP_Follow::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "follow");
    }
    return ud;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if defined(HAL_BUILD_AP_PERIPH)
AP_Periph_FW * check_AP_Periph_FW(lua_State *L) {
    AP_Periph_FW * ud = AP_Periph_FW::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "periph");
    }
    return ud;
}
#endif // defined(HAL_BUILD_AP_PERIPH)

#if AP_INERTIALSENSOR_ENABLED
AP_InertialSensor * check_AP_InertialSensor(lua_State *L) {
    AP_InertialSensor * ud = AP_InertialSensor::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "ins");
    }
    return ud;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AP_MotorsMatrix_Scripting_Dynamic * check_AP_MotorsMatrix_Scripting_Dynamic(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic * ud = AP_MotorsMatrix_Scripting_Dynamic::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "Motors_dynamic");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
AP_MotorsMatrix_6DoF_Scripting * check_AP_MotorsMatrix_6DoF_Scripting(lua_State *L) {
    AP_MotorsMatrix_6DoF_Scripting * ud = AP_MotorsMatrix_6DoF_Scripting::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "Motors_6DoF");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
AC_AttitudeControl_Multi_6DoF * check_AC_AttitudeControl_Multi_6DoF(lua_State *L) {
    AC_AttitudeControl_Multi_6DoF * ud = AC_AttitudeControl_Multi_6DoF::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "attitude_control");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if AP_FRSKY_SPORT_TELEM_ENABLED
AP_Frsky_SPort * check_AP_Frsky_SPort(lua_State *L) {
    AP_Frsky_SPort * ud = AP_Frsky_SPort::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "frsky_sport");
    }
    return ud;
}
#endif // AP_FRSKY_SPORT_TELEM_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
AP_MotorsMatrix * check_AP_MotorsMatrix(lua_State *L) {
    AP_MotorsMatrix * ud = AP_MotorsMatrix::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "MotorsMatrix");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
Sub * check_Sub(lua_State *L) {
    Sub * ud = Sub::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "sub");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
QuadPlane * check_QuadPlane(lua_State *L) {
    QuadPlane * ud = QuadPlane::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "quadplane");
    }
    return ud;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED

#if AP_NOTIFY_SCRIPTING_LED_ENABLED
ScriptingLED * check_ScriptingLED(lua_State *L) {
    ScriptingLED * ud = ScriptingLED::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "LED");
    }
    return ud;
}
#endif // AP_NOTIFY_SCRIPTING_LED_ENABLED

#if HAL_BUTTON_ENABLED == 1
AP_Button * check_AP_Button(lua_State *L) {
    AP_Button * ud = AP_Button::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "button");
    }
    return ud;
}
#endif // HAL_BUTTON_ENABLED == 1

#if AP_RPM_ENABLED
AP_RPM * check_AP_RPM(lua_State *L) {
    AP_RPM * ud = AP_RPM::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "RPM");
    }
    return ud;
}
#endif // AP_RPM_ENABLED

#if AP_MISSION_ENABLED
AP_Mission * check_AP_Mission(lua_State *L) {
    AP_Mission * ud = AP_Mission::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "mission");
    }
    return ud;
}
#endif // AP_MISSION_ENABLED

AP_Scripting * check_AP_Scripting(lua_State *L) {
    AP_Scripting * ud = AP_Scripting::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "scripting");
    }
    return ud;
}

AP_Param * check_AP_Param(lua_State *L) {
    AP_Param * ud = AP_Param::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "param");
    }
    return ud;
}

#if HAL_WITH_ESC_TELEM == 1
AP_ESC_Telem * check_AP_ESC_Telem(lua_State *L) {
    AP_ESC_Telem * ud = AP_ESC_Telem::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "esc_telem");
    }
    return ud;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if AP_OPTICALFLOW_ENABLED
AP_OpticalFlow * check_AP_OpticalFlow(lua_State *L) {
    AP_OpticalFlow * ud = AP_OpticalFlow::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "optical_flow");
    }
    return ud;
}
#endif // AP_OPTICALFLOW_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
AP_Baro * check_AP_Baro(lua_State *L) {
    AP_Baro * ud = AP_Baro::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "baro");
    }
    return ud;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if HAL_GCS_ENABLED
AP_SerialManager * check_AP_SerialManager(lua_State *L) {
    AP_SerialManager * ud = AP_SerialManager::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "serial");
    }
    return ud;
}
#endif // HAL_GCS_ENABLED

#if AP_RC_CHANNEL_ENABLED
RC_Channels * check_RC_Channels(lua_State *L) {
    RC_Channels * ud = RC_Channels::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "rc");
    }
    return ud;
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
SRV_Channels * check_SRV_Channels(lua_State *L) {
    SRV_Channels * ud = SRV_Channels::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "SRV_Channels");
    }
    return ud;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if AP_SERIALLED_ENABLED
AP_SerialLED * check_AP_SerialLED(lua_State *L) {
    AP_SerialLED * ud = AP_SerialLED::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "serialLED");
    }
    return ud;
}
#endif // AP_SERIALLED_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH))
AP_Vehicle * check_AP_Vehicle(lua_State *L) {
    AP_Vehicle * ud = AP_Vehicle::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "vehicle");
    }
    return ud;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if ENABLE_ONVIF == 1
AP_ONVIF * check_AP_ONVIF(lua_State *L) {
    AP_ONVIF * ud = AP_ONVIF::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "onvif");
    }
    return ud;
}
#endif // ENABLE_ONVIF == 1

#if HAL_GCS_ENABLED
GCS * check_GCS(lua_State *L) {
    GCS * ud = GCS::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "gcs");
    }
    return ud;
}
#endif // HAL_GCS_ENABLED

#if AP_RELAY_ENABLED
AP_Relay * check_AP_Relay(lua_State *L) {
    AP_Relay * ud = AP_Relay::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "relay");
    }
    return ud;
}
#endif // AP_RELAY_ENABLED

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
AP_Terrain * check_AP_Terrain(lua_State *L) {
    AP_Terrain * ud = AP_Terrain::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "terrain");
    }
    return ud;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
RangeFinder * check_RangeFinder(lua_State *L) {
    RangeFinder * ud = RangeFinder::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "rangefinder");
    }
    return ud;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
AP_Proximity * check_AP_Proximity(lua_State *L) {
    AP_Proximity * ud = AP_Proximity::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "proximity");
    }
    return ud;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
AP_Notify * check_AP_Notify(lua_State *L) {
    AP_Notify * ud = AP_Notify::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "notify");
    }
    return ud;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
AP_GPS * check_AP_GPS(lua_State *L) {
    AP_GPS * ud = AP_GPS::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "gps");
    }
    return ud;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if AP_BATTERY_ENABLED
AP_BattMonitor * check_AP_BattMonitor(lua_State *L) {
    AP_BattMonitor * ud = AP_BattMonitor::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "battery");
    }
    return ud;
}
#endif // AP_BATTERY_ENABLED

#if AP_ARMING_ENABLED
AP_Arming * check_AP_Arming(lua_State *L) {
    AP_Arming * ud = AP_Arming::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "arming");
    }
    return ud;
}
#endif // AP_ARMING_ENABLED

#if AP_AHRS_ENABLED
AP_AHRS * check_AP_AHRS(lua_State *L) {
    AP_AHRS * ud = AP_AHRS::get_singleton();
    if (ud == nullptr) {
        // This error will never return, so there is no danger of returning a nullptr
        not_supported_error(L, 1, "ahrs");
    }
    return ud;
}
#endif // AP_AHRS_ENABLED

static int AP__fwversion___fw_hash_str(lua_State *L) {
    binding_argcheck(L, 1);
    lua_pushstring(L, AP::fwversion().fw_hash_str);
    return 1;
}

static int AP__fwversion___patch(lua_State *L) {
    binding_argcheck(L, 1);
    lua_pushinteger(L, AP::fwversion().patch);
    return 1;
}

static int AP__fwversion___minor(lua_State *L) {
    binding_argcheck(L, 1);
    lua_pushinteger(L, AP::fwversion().minor);
    return 1;
}

static int AP__fwversion___major(lua_State *L) {
    binding_argcheck(L, 1);
    lua_pushinteger(L, AP::fwversion().major);
    return 1;
}

static int AP__fwversion___vehicle_type(lua_State *L) {
    binding_argcheck(L, 1);
    lua_pushinteger(L, AP::fwversion().vehicle_type);
    return 1;
}

static int AP__fwversion___fw_short_string(lua_State *L) {
    binding_argcheck(L, 1);
    lua_pushstring(L, AP::fwversion().fw_short_string);
    return 1;
}

#if HAL_VISUALODOM_ENABLED
static int AP_VisualOdom_quality(lua_State *L) {
    AP_VisualOdom * ud = check_AP_VisualOdom(L);
    binding_argcheck(L, 1);
    const int8_t data = static_cast<int8_t>(ud->quality());

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_VISUALODOM_ENABLED

#if HAL_VISUALODOM_ENABLED
static int AP_VisualOdom_healthy(lua_State *L) {
    AP_VisualOdom * ud = check_AP_VisualOdom(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->healthy());

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_VISUALODOM_ENABLED

#if AP_NETWORKING_ENABLED
static int AP_Networking_address_to_str(lua_State *L) {
    AP_Networking * ud = check_AP_Networking(L);
    binding_argcheck(L, 2);
    const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
    const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
    const char * data = ud->address_to_str(
            data_2);

    lua_pushstring(L, data);
    return 1;
}
#endif // AP_NETWORKING_ENABLED

#if AP_NETWORKING_ENABLED
static int AP_Networking_get_gateway_active(lua_State *L) {
    AP_Networking * ud = check_AP_Networking(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_gateway_active());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AP_NETWORKING_ENABLED

#if AP_NETWORKING_ENABLED
static int AP_Networking_get_netmask_active(lua_State *L) {
    AP_Networking * ud = check_AP_Networking(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_netmask_active());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AP_NETWORKING_ENABLED

#if AP_NETWORKING_ENABLED
static int AP_Networking_get_ip_active(lua_State *L) {
    AP_Networking * ud = check_AP_Networking(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_ip_active());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AP_NETWORKING_ENABLED

#if AP_RTC_ENABLED
static int AP_RTC_date_fields_to_clock_s(lua_State *L) {
    AP_RTC * ud = check_AP_RTC(L);
    binding_argcheck(L, 7);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
    const int8_t raw_data_3 = get_int8_t(L, 3);
    const int8_t data_3 = static_cast<int8_t>(raw_data_3);
    const uint8_t raw_data_4 = get_uint8_t(L, 4);
    const uint8_t data_4 = static_cast<uint8_t>(raw_data_4);
    const uint8_t raw_data_5 = get_uint8_t(L, 5);
    const uint8_t data_5 = static_cast<uint8_t>(raw_data_5);
    const uint8_t raw_data_6 = get_uint8_t(L, 6);
    const uint8_t data_6 = static_cast<uint8_t>(raw_data_6);
    const uint8_t raw_data_7 = get_uint8_t(L, 7);
    const uint8_t data_7 = static_cast<uint8_t>(raw_data_7);
    const uint32_t data = static_cast<uint32_t>(ud->date_fields_to_clock_s(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6,
            data_7));

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AP_RTC_ENABLED

#if AP_RTC_ENABLED
static int AP_RTC_clock_s_to_date_fields(lua_State *L) {
    AP_RTC * ud = check_AP_RTC(L);
    binding_argcheck(L, 2);
    const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
    const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
    uint16_t data_5003 {};
    uint8_t data_5004 {};
    uint8_t data_5005 {};
    uint8_t data_5006 {};
    uint8_t data_5007 {};
    uint8_t data_5008 {};
    uint8_t data_5009 {};
    const bool data = static_cast<bool>(ud->clock_s_to_date_fields(
            data_2,
            data_5003,
            data_5004,
            data_5005,
            data_5006,
            data_5007,
            data_5008,
            data_5009));

    if (data) {
        lua_pushinteger(L, data_5003);
        lua_pushinteger(L, data_5004);
        lua_pushinteger(L, data_5005);
        lua_pushinteger(L, data_5006);
        lua_pushinteger(L, data_5007);
        lua_pushinteger(L, data_5008);
        lua_pushinteger(L, data_5009);
        return 7;
    }
    return 0;
}
#endif // AP_RTC_ENABLED

static int AP_Filesystem_crc32(lua_State *L) {
    AP_Filesystem * ud = check_AP_Filesystem(L);
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    uint32_t data_5003 {};
    const bool data = static_cast<bool>(ud->crc32(
            data_2,
            data_5003));

    if (data) {
        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data_5003;
        return 1;
    }
    return 0;
}

#if AP_FILESYSTEM_FORMAT_ENABLED
static int AP_Filesystem_get_format_status(lua_State *L) {
    AP_Filesystem * ud = check_AP_Filesystem(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_format_status());

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_FILESYSTEM_FORMAT_ENABLED

#if AP_FILESYSTEM_FORMAT_ENABLED
static int AP_Filesystem_format(lua_State *L) {
    AP_Filesystem * ud = check_AP_Filesystem(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->format());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_FILESYSTEM_FORMAT_ENABLED

static int AP_Filesystem_stat(lua_State *L) {
    AP_Filesystem * ud = check_AP_Filesystem(L);
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    AP_Filesystem::stat_t data_5003 {};
    const bool data = static_cast<bool>(ud->stat(
            data_2,
            data_5003));

    if (data) {
        new_AP_Filesystem__stat_t(L);
        *check_AP_Filesystem__stat_t(L, -1) = data_5003;
        return 1;
    }
    return 0;
}

#if AP_FENCE_ENABLED
static int AC_Fence_get_breach_time(lua_State *L) {
    AC_Fence * ud = check_AC_Fence(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_breach_time());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AP_FENCE_ENABLED

#if AP_FENCE_ENABLED
static int AC_Fence_get_breaches(lua_State *L) {
    AC_Fence * ud = check_AC_Fence(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_breaches());

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_FENCE_ENABLED

#if HAL_LOGGING_ENABLED
#if HAL_LOGGER_FILE_CONTENTS_ENABLED
static int AP_Logger_log_file_content(lua_State *L) {
    AP_Logger * ud = check_AP_Logger(L);
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    ud->log_file_content(
            data_2);

    return 0;
}
#endif // HAL_LOGGER_FILE_CONTENTS_ENABLED
#endif // HAL_LOGGING_ENABLED

#if (AP_EFI_SCRIPTING_ENABLED == 1)
static int AP_EFI_get_state(lua_State *L) {
    AP_EFI * ud = check_AP_EFI(L);
    binding_argcheck(L, 1);
    EFI_State data_5002 {};
    ud->get_state(
            data_5002);

    new_EFI_State(L);
    *check_EFI_State(L, -1) = data_5002;
    return 1;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if (AP_EFI_SCRIPTING_ENABLED == 1)
static int AP_EFI_get_backend(lua_State *L) {
    AP_EFI * ud = check_AP_EFI(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    AP_EFI_Backend *data = ud->get_backend(
            data_2);

    if (data == NULL) {
        return 0;
    }
    new_AP_EFI_Backend(L);
    *(AP_EFI_Backend**)luaL_checkudata(L, -1, "AP_EFI_Backend") = data;
    return 1;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_COMPASS_ENABLED
static int Compass_healthy(lua_State *L) {
    Compass * ud = check_Compass(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->healthy(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_COMPASS_ENABLED

#if HAL_WITH_IO_MCU
static int AP_IOMCU_healthy(lua_State *L) {
    AP_IOMCU * ud = check_AP_IOMCU(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->healthy());

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_WITH_IO_MCU

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
static int AP_Winch_get_rate_max(lua_State *L) {
    AP_Winch * ud = check_AP_Winch(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_rate_max());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
static int AP_Winch_set_desired_rate(lua_State *L) {
    AP_Winch * ud = check_AP_Winch(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->set_desired_rate(
            data_2);

    return 0;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
static int AP_Winch_release_length(lua_State *L) {
    AP_Winch * ud = check_AP_Winch(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->release_length(
            data_2);

    return 0;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
static int AP_Winch_relax(lua_State *L) {
    AP_Winch * ud = check_AP_Winch(L);
    binding_argcheck(L, 1);
    ud->relax();

    return 0;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
static int AP_Winch_healthy(lua_State *L) {
    AP_Winch * ud = check_AP_Winch(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->healthy());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
static int AP_Camera_get_state(lua_State *L) {
    AP_Camera * ud = check_AP_Camera(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    AP_Camera::camera_state_t data_5003 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_state(
            data_2,
            data_5003));

    ud->get_semaphore().give();
    if (data) {
        new_AP_Camera__camera_state_t(L);
        *check_AP_Camera__camera_state_t(L, -1) = data_5003;
        return 1;
    }
    return 0;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
static int AP_Camera_set_trigger_distance(lua_State *L) {
    AP_Camera * ud = check_AP_Camera(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->get_semaphore().take_blocking();
    ud->set_trigger_distance(
            data_2,
            data_3);

    ud->get_semaphore().give();
    return 0;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
static int AP_Camera_record_video(lua_State *L) {
    AP_Camera * ud = check_AP_Camera(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->record_video(
            data_2,
            data_3));

    ud->get_semaphore().give();
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
static int AP_Camera_take_picture(lua_State *L) {
    AP_Camera * ud = check_AP_Camera(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->get_semaphore().take_blocking();
    ud->take_picture(
            data_2);

    ud->get_semaphore().give();
    return 0;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_set_attitude_euler(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 5);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    ud->set_attitude_euler(
            data_2,
            data_3,
            data_4,
            data_5);

    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_get_location_target(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    Location data_5003 {};
    const bool data = static_cast<bool>(ud->get_location_target(
            data_2,
            data_5003));

    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5003;
        return 1;
    }
    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_get_angle_target(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    float data_5004 {};
    float data_5005 {};
    bool data_5006 {};
    const bool data = static_cast<bool>(ud->get_angle_target(
            data_2,
            data_5003,
            data_5004,
            data_5005,
            data_5006));

    if (data) {
        lua_pushnumber(L, data_5003);
        lua_pushnumber(L, data_5004);
        lua_pushnumber(L, data_5005);
        lua_pushboolean(L, data_5006);
        return 4;
    }
    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_get_rate_target(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    float data_5004 {};
    float data_5005 {};
    bool data_5006 {};
    const bool data = static_cast<bool>(ud->get_rate_target(
            data_2,
            data_5003,
            data_5004,
            data_5005,
            data_5006));

    if (data) {
        lua_pushnumber(L, data_5003);
        lua_pushnumber(L, data_5004);
        lua_pushnumber(L, data_5005);
        lua_pushboolean(L, data_5006);
        return 4;
    }
    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_get_attitude_euler(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    float data_5004 {};
    float data_5005 {};
    const bool data = static_cast<bool>(ud->get_attitude_euler(
            data_2,
            data_5003,
            data_5004,
            data_5005));

    if (data) {
        lua_pushnumber(L, data_5003);
        lua_pushnumber(L, data_5004);
        lua_pushnumber(L, data_5005);
        return 3;
    }
    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_set_roi_target(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    Location & data_3 = *check_Location(L, 3);
    ud->set_roi_target(
            data_2,
            data_3);

    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_set_rate_target(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 6);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    const bool data_6 = static_cast<bool>(lua_toboolean(L, 6));
    ud->set_rate_target(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6);

    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_set_angle_target(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 6);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    const bool data_6 = static_cast<bool>(lua_toboolean(L, 6));
    ud->set_angle_target(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6);

    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_set_mode(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, static_cast<int32_t>(MAV_MOUNT_MODE_RETRACT), static_cast<int32_t>(MAV_MOUNT_MODE_HOME_LOCATION));
    const MAV_MOUNT_MODE data_3 = static_cast<MAV_MOUNT_MODE>(raw_data_3);
    ud->set_mode(
            data_2,
            data_3);

    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if HAL_MOUNT_ENABLED == 1
static int AP_Mount_get_mode(lua_State *L) {
    AP_Mount * ud = check_AP_Mount(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const MAV_MOUNT_MODE &data = ud->get_mode(
            data_2);

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_MOUNT_ENABLED == 1

#if APM_BUILD_TYPE(APM_BUILD_Rover)
static int AR_PosControl_get_srate(lua_State *L) {
    AR_PosControl * ud = check_AR_PosControl(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    ud->get_srate(
            data_5002);

    lua_pushnumber(L, data_5002);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)

#if APM_BUILD_TYPE(APM_BUILD_Rover)
static int AR_AttitudeControl_get_srate(lua_State *L) {
    AR_AttitudeControl * ud = check_AR_AttitudeControl(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    float data_5003 {};
    ud->get_srate(
            data_5002,
            data_5003);

    lua_pushnumber(L, data_5002);
    lua_pushnumber(L, data_5003);
    return 2;
}
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AC_AttitudeControl_get_rpy_srate(lua_State *L) {
    AC_AttitudeControl * ud = check_AC_AttitudeControl(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    float data_5003 {};
    float data_5004 {};
    ud->get_rpy_srate(
            data_5002,
            data_5003,
            data_5004);

    lua_pushnumber(L, data_5002);
    lua_pushnumber(L, data_5003);
    lua_pushnumber(L, data_5004);
    return 3;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AC_PrecLand_get_target_location(lua_State *L) {
    AC_PrecLand * ud = check_AC_PrecLand(L);
    binding_argcheck(L, 1);
    Location data_5002 {};
    const bool data = static_cast<bool>(ud->get_target_location(
            data_5002));

    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AC_PrecLand_get_target_velocity(lua_State *L) {
    AC_PrecLand * ud = check_AC_PrecLand(L);
    binding_argcheck(L, 1);
    Vector2f data_5002 {};
    const bool data = static_cast<bool>(ud->get_target_velocity(
            data_5002));

    if (data) {
        new_Vector2f(L);
        *check_Vector2f(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AC_PrecLand_get_last_valid_target_ms(lua_State *L) {
    AC_PrecLand * ud = check_AC_PrecLand(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_last_valid_target_ms());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AC_PrecLand_target_acquired(lua_State *L) {
    AC_PrecLand * ud = check_AC_PrecLand(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->target_acquired());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AC_PrecLand_healthy(lua_State *L) {
    AC_PrecLand * ud = check_AC_PrecLand(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->healthy());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AP_Follow_get_target_heading_deg(lua_State *L) {
    AP_Follow * ud = check_AP_Follow(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    const bool data = static_cast<bool>(ud->get_target_heading_deg(
            data_5002));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AP_Follow_get_target_location_and_velocity_ofs(lua_State *L) {
    AP_Follow * ud = check_AP_Follow(L);
    binding_argcheck(L, 1);
    Location data_5002 {};
    Vector3f data_5003 {};
    const bool data = static_cast<bool>(ud->get_target_location_and_velocity_ofs(
            data_5002,
            data_5003));

    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5002;
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5003;
        return 2;
    }
    return 0;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AP_Follow_get_target_location_and_velocity(lua_State *L) {
    AP_Follow * ud = check_AP_Follow(L);
    binding_argcheck(L, 1);
    Location data_5002 {};
    Vector3f data_5003 {};
    const bool data = static_cast<bool>(ud->get_target_location_and_velocity(
            data_5002,
            data_5003));

    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5002;
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5003;
        return 2;
    }
    return 0;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AP_Follow_get_last_update_ms(lua_State *L) {
    AP_Follow * ud = check_AP_Follow(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_last_update_ms());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
static int AP_Follow_have_target(lua_State *L) {
    AP_Follow * ud = check_AP_Follow(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->have_target());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___set_external_limits(lua_State *L) {
    binding_argcheck(L, 6);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
    const bool data_4 = static_cast<bool>(lua_toboolean(L, 4));
    const bool data_5 = static_cast<bool>(lua_toboolean(L, 5));
    const bool data_6 = static_cast<bool>(lua_toboolean(L, 6));
    AP::motors()->set_external_limits(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_spool_state(lua_State *L) {
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(AP::motors()->get_spool_state());

    lua_pushinteger(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_lateral(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_lateral());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_forward(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_forward());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_throttle(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_throttle());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_yaw_ff(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_yaw_ff());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_yaw(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_yaw());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_pitch_ff(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_pitch_ff());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_pitch(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_pitch());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_roll_ff(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_roll_ff());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_roll(lua_State *L) {
    binding_argcheck(L, 1);
    const float data = static_cast<float>(AP::motors()->get_roll());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_desired_spool_state(lua_State *L) {
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(AP::motors()->get_desired_spool_state());

    lua_pushinteger(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___get_interlock(lua_State *L) {
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(AP::motors()->get_interlock());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP__motors___set_frame_string(lua_State *L) {
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    AP::motors()->set_frame_string(
            data_2);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if defined(HAL_BUILD_AP_PERIPH)
static int AP_Periph_FW_reboot(lua_State *L) {
    AP_Periph_FW * ud = check_AP_Periph_FW(L);
    binding_argcheck(L, 2);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    ud->reboot(
            data_2);

    return 0;
}
#endif // defined(HAL_BUILD_AP_PERIPH)

#if defined(HAL_BUILD_AP_PERIPH)
static int AP_Periph_FW_can_printf(lua_State *L) {
    AP_Periph_FW * ud = check_AP_Periph_FW(L);
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    ud->can_printf(
            "%s",
            data_2);

    return 0;
}
#endif // defined(HAL_BUILD_AP_PERIPH)

#if defined(HAL_BUILD_AP_PERIPH)
static int AP_Periph_FW_get_vehicle_state(lua_State *L) {
    AP_Periph_FW * ud = check_AP_Periph_FW(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->get_vehicle_state());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // defined(HAL_BUILD_AP_PERIPH)

#if defined(HAL_BUILD_AP_PERIPH)
static int AP_Periph_FW_get_yaw_earth(lua_State *L) {
    AP_Periph_FW * ud = check_AP_Periph_FW(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_yaw_earth());

    lua_pushnumber(L, data);
    return 1;
}
#endif // defined(HAL_BUILD_AP_PERIPH)

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_gyros_consistent(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->gyros_consistent(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_get_accel(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const Vector3f &data = ud->get_accel(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_get_gyro(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const Vector3f &data = ud->get_gyro(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_calibrating(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->calibrating());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_get_accel_health(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->get_accel_health(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_accels_consistent(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const bool data = static_cast<bool>(ud->accels_consistent(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_get_gyro_health(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->get_gyro_health(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
static int AP_InertialSensor_get_temperature(lua_State *L) {
    AP_InertialSensor * ud = check_AP_InertialSensor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(INS_MAX_INSTANCES, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float data = static_cast<float>(ud->get_temperature(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_Scripting_Dynamic_load_factors(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic * ud = check_AP_MotorsMatrix_Scripting_Dynamic(L);
    binding_argcheck(L, 2);
    AP_MotorsMatrix_Scripting_Dynamic::factor_table & data_2 = *check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(L, 2);
    ud->load_factors(
            data_2);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_Scripting_Dynamic_add_motor(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic * ud = check_AP_MotorsMatrix_Scripting_Dynamic(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN((AP_MOTORS_MAX_NUM_MOTORS-1), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(0, 0), MIN(AP_MOTORS_MAX_NUM_MOTORS, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    ud->add_motor(
            data_2,
            data_3);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_Scripting_Dynamic_init(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic * ud = check_AP_MotorsMatrix_Scripting_Dynamic(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_MOTORS_MAX_NUM_MOTORS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->init(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if !defined(HAL_DISABLE_ADC_DRIVER)
static int hal_analogin_channel(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::AnalogSource *data = hal.analogin->channel(            ANALOG_INPUT_NONE);

    if (data == NULL) {
        return 0;
    }
    new_AP_HAL__AnalogSource(L);
    *(AP_HAL::AnalogSource**)luaL_checkudata(L, -1, "AP_HAL::AnalogSource") = data;
    return 1;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

static int hal_gpio_pinMode(lua_State *L) {
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(0, 0), MIN(1, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    hal.gpio->pinMode(
            data_2,
            data_3);

    return 0;
}

static int hal_gpio_toggle(lua_State *L) {
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    hal.gpio->toggle(
            data_2);

    return 0;
}

static int hal_gpio_write(lua_State *L) {
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(0, 0), MIN(1, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    hal.gpio->write(
            data_2,
            data_3);

    return 0;
}

static int hal_gpio_read(lua_State *L) {
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(hal.gpio->read(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
static int AP_MotorsMatrix_6DoF_Scripting_add_motor(lua_State *L) {
    AP_MotorsMatrix_6DoF_Scripting * ud = check_AP_MotorsMatrix_6DoF_Scripting(L);
    binding_argcheck(L, 10);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, INT8_MIN), MIN((AP_MOTORS_MAX_NUM_MOTORS-1), INT8_MAX));
    const int8_t data_2 = static_cast<int8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    const float raw_data_6 = luaL_checknumber(L, 6);
    const float data_6 = raw_data_6;
    const float raw_data_7 = luaL_checknumber(L, 7);
    const float data_7 = raw_data_7;
    const float raw_data_8 = luaL_checknumber(L, 8);
    const float data_8 = raw_data_8;
    const bool data_9 = static_cast<bool>(lua_toboolean(L, 9));
    const lua_Integer raw_data_10 = get_integer(L, 10, MAX(0, 0), MIN(AP_MOTORS_MAX_NUM_MOTORS, UINT8_MAX));
    const uint8_t data_10 = static_cast<uint8_t>(raw_data_10);
    ud->add_motor(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6,
            data_7,
            data_8,
            data_9,
            data_10);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
static int AP_MotorsMatrix_6DoF_Scripting_init(lua_State *L) {
    AP_MotorsMatrix_6DoF_Scripting * ud = check_AP_MotorsMatrix_6DoF_Scripting(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_MOTORS_MAX_NUM_MOTORS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->init(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
static int AC_AttitudeControl_Multi_6DoF_set_offset_roll_pitch(lua_State *L) {
    AC_AttitudeControl_Multi_6DoF * ud = check_AC_AttitudeControl_Multi_6DoF(L);
    binding_argcheck(L, 3);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->set_offset_roll_pitch(
            data_2,
            data_3);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
static int AC_AttitudeControl_Multi_6DoF_set_forward_enable(lua_State *L) {
    AC_AttitudeControl_Multi_6DoF * ud = check_AC_AttitudeControl_Multi_6DoF(L);
    binding_argcheck(L, 2);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    ud->set_forward_enable(
            data_2);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
static int AC_AttitudeControl_Multi_6DoF_set_lateral_enable(lua_State *L) {
    AC_AttitudeControl_Multi_6DoF * ud = check_AC_AttitudeControl_Multi_6DoF(L);
    binding_argcheck(L, 2);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    ud->set_lateral_enable(
            data_2);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if AP_FRSKY_SPORT_TELEM_ENABLED
static int AP_Frsky_SPort_prep_number(lua_State *L) {
    AP_Frsky_SPort * ud = check_AP_Frsky_SPort(L);
    binding_argcheck(L, 4);
    const lua_Integer raw_data_2 = luaL_checkinteger(L, 2);
    const int32_t data_2 = raw_data_2;
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const uint8_t raw_data_4 = get_uint8_t(L, 4);
    const uint8_t data_4 = static_cast<uint8_t>(raw_data_4);
    const uint16_t data = static_cast<uint16_t>(ud->prep_number(
            data_2,
            data_3,
            data_4));

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_FRSKY_SPORT_TELEM_ENABLED

#if AP_FRSKY_SPORT_TELEM_ENABLED
static int AP_Frsky_SPort_sport_telemetry_push(lua_State *L) {
    AP_Frsky_SPort * ud = check_AP_Frsky_SPort(L);
    binding_argcheck(L, 5);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const uint16_t raw_data_4 = get_uint16_t(L, 4);
    const uint16_t data_4 = static_cast<uint16_t>(raw_data_4);
    const lua_Integer raw_data_5 = luaL_checkinteger(L, 5);
    const int32_t data_5 = raw_data_5;
    const bool data = static_cast<bool>(ud->sport_telemetry_push(
            data_2,
            data_3,
            data_4,
            data_5));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_FRSKY_SPORT_TELEM_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_get_thrust_boost(lua_State *L) {
    AP_MotorsMatrix * ud = check_AP_MotorsMatrix(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->get_thrust_boost());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_get_lost_motor(lua_State *L) {
    AP_MotorsMatrix * ud = check_AP_MotorsMatrix(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_lost_motor());

    lua_pushinteger(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_set_throttle_factor(lua_State *L) {
    AP_MotorsMatrix * ud = check_AP_MotorsMatrix(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, INT8_MIN), MIN((AP_MOTORS_MAX_NUM_MOTORS-1), INT8_MAX));
    const int8_t data_2 = static_cast<int8_t>(raw_data_2);
    const float raw_data_3 = get_number(L, 3, MAX(0, -INFINITY), MIN(FLT_MAX, INFINITY));
    const float data_3 = raw_data_3;
    const bool data = static_cast<bool>(ud->set_throttle_factor(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_add_motor_raw(lua_State *L) {
    AP_MotorsMatrix * ud = check_AP_MotorsMatrix(L);
    binding_argcheck(L, 6);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, INT8_MIN), MIN((AP_MOTORS_MAX_NUM_MOTORS-1), INT8_MAX));
    const int8_t data_2 = static_cast<int8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    const lua_Integer raw_data_6 = get_integer(L, 6, MAX(0, 0), MIN(AP_MOTORS_MAX_NUM_MOTORS, UINT8_MAX));
    const uint8_t data_6 = static_cast<uint8_t>(raw_data_6);
    ud->add_motor_raw(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6);

    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_init(lua_State *L) {
    AP_MotorsMatrix * ud = check_AP_MotorsMatrix(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_MOTORS_MAX_NUM_MOTORS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->init(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
static int Sub_set_rangefinder_target_cm(lua_State *L) {
    Sub * ud = check_Sub(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const bool data = static_cast<bool>(ud->set_rangefinder_target_cm(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
static int Sub_get_rangefinder_target_cm(lua_State *L) {
    Sub * ud = check_Sub(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_rangefinder_target_cm());

    lua_pushnumber(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
static int Sub_rangefinder_alt_ok(lua_State *L) {
    Sub * ud = check_Sub(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->rangefinder_alt_ok());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
static int Sub_is_button_pressed(lua_State *L) {
    Sub * ud = check_Sub(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(4, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->is_button_pressed(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
static int Sub_get_and_clear_button_count(lua_State *L) {
    Sub * ud = check_Sub(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(4, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t data = static_cast<uint8_t>(ud->get_and_clear_button_count(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
static int QuadPlane_in_vtol_land_descent(lua_State *L) {
    QuadPlane * ud = check_QuadPlane(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->in_vtol_land_descent());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
static int QuadPlane_abort_landing(lua_State *L) {
    QuadPlane * ud = check_QuadPlane(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->abort_landing());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
static int QuadPlane_in_assisted_flight(lua_State *L) {
    QuadPlane * ud = check_QuadPlane(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->in_assisted_flight());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
static int QuadPlane_in_vtol_mode(lua_State *L) {
    QuadPlane * ud = check_QuadPlane(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->in_vtol_mode());

    lua_pushboolean(L, data);
    return 1;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED

#if AP_NOTIFY_SCRIPTING_LED_ENABLED
static int ScriptingLED_get_rgb(lua_State *L) {
    ScriptingLED * ud = check_ScriptingLED(L);
    binding_argcheck(L, 1);
    uint8_t data_5002 {};
    uint8_t data_5003 {};
    uint8_t data_5004 {};
    ud->get_rgb(
            data_5002,
            data_5003,
            data_5004);

    lua_pushinteger(L, data_5002);
    lua_pushinteger(L, data_5003);
    lua_pushinteger(L, data_5004);
    return 3;
}
#endif // AP_NOTIFY_SCRIPTING_LED_ENABLED

#if HAL_BUTTON_ENABLED == 1
static int AP_Button_get_button_state(lua_State *L) {
    AP_Button * ud = check_AP_Button(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(AP_BUTTON_NUM_PINS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->get_button_state(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_BUTTON_ENABLED == 1

#if AP_RPM_ENABLED
static int AP_RPM_get_rpm(lua_State *L) {
    AP_RPM * ud = check_AP_RPM(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(RPM_MAX_INSTANCES, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get_rpm(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // AP_RPM_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_jump_to_abort_landing_sequence(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->jump_to_abort_landing_sequence());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_jump_to_landing_sequence(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->jump_to_landing_sequence());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_last_jump_tag(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
    uint16_t data_5002 {};
    uint16_t data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_last_jump_tag(
            data_5002,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushinteger(L, data_5002);
        lua_pushinteger(L, data_5003);
        return 2;
    }
    return 0;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_index_of_jump_tag(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(UINT16_MAX, UINT16_MAX));
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint16_t data = static_cast<uint16_t>(ud->get_index_of_jump_tag(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_jump_to_tag(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(UINT16_MAX, UINT16_MAX));
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->jump_to_tag(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_cmd_has_location(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 2);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->cmd_has_location(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_clear(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->clear());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_set_item(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 3);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
    mavlink_mission_item_int_t & data_3 = *check_mavlink_mission_item_int_t(L, 3);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_item(
            data_2,
            data_3));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_item(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 2);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
    mavlink_mission_item_int_t data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_item(
            data_2,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        new_mavlink_mission_item_int_t(L);
        *check_mavlink_mission_item_int_t(L, -1) = data_5003;
        return 1;
    }
    return 0;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_num_commands(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint16_t data = static_cast<uint16_t>(ud->num_commands());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_current_do_cmd_id(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint16_t data = static_cast<uint16_t>(ud->get_current_do_cmd_id());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_current_nav_id(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint16_t data = static_cast<uint16_t>(ud->get_current_nav_id());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_prev_nav_cmd_id(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint16_t data = static_cast<uint16_t>(ud->get_prev_nav_cmd_id());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_set_current_cmd(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN((ud->num_commands()-1), UINT16_MAX));
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_current_cmd(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_get_current_nav_index(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint16_t data = static_cast<uint16_t>(ud->get_current_nav_index());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

#if AP_MISSION_ENABLED
static int AP_Mission_state(lua_State *L) {
    AP_Mission * ud = check_AP_Mission(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint8_t data = static_cast<uint8_t>(ud->state());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_MISSION_ENABLED

static int AP_Scripting_restart_all(lua_State *L) {
    AP_Scripting * ud = check_AP_Scripting(L);
    binding_argcheck(L, 1);
    ud->restart_all();

    return 0;
}

#if AP_PARAM_DYNAMIC_ENABLED
static int AP_Param_add_param(lua_State *L) {
    AP_Param * ud = check_AP_Param(L);
    binding_argcheck(L, 5);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(200, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(1, 0), MIN(63, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const char * data_4 = luaL_checkstring(L, 4);
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    const bool data = static_cast<bool>(ud->add_param(
            data_2,
            data_3,
            data_4,
            data_5));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_PARAM_DYNAMIC_ENABLED

#if AP_PARAM_DYNAMIC_ENABLED
static int AP_Param_add_table(lua_State *L) {
    AP_Param * ud = check_AP_Param(L);
    binding_argcheck(L, 4);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(200, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const char * data_3 = luaL_checkstring(L, 3);
    const lua_Integer raw_data_4 = get_integer(L, 4, MAX(1, 0), MIN(63, UINT8_MAX));
    const uint8_t data_4 = static_cast<uint8_t>(raw_data_4);
    const bool data = static_cast<bool>(ud->add_table(
            data_2,
            data_3,
            data_4));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_PARAM_DYNAMIC_ENABLED

static int AP_Param_set_default_by_name(lua_State *L) {
    AP_Param * ud = check_AP_Param(L);
    binding_argcheck(L, 3);
    const char * data_2 = luaL_checkstring(L, 2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const bool data = static_cast<bool>(ud->set_default_by_name(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}

static int AP_Param_set_and_save_by_name(lua_State *L) {
    AP_Param * ud = check_AP_Param(L);
    binding_argcheck(L, 3);
    const char * data_2 = luaL_checkstring(L, 2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const bool data = static_cast<bool>(ud->set_and_save_by_name(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}

static int AP_Param_set_by_name(lua_State *L) {
    AP_Param * ud = check_AP_Param(L);
    binding_argcheck(L, 3);
    const char * data_2 = luaL_checkstring(L, 2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const bool data = static_cast<bool>(ud->set_by_name(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}

static int AP_Param_get(lua_State *L) {
    AP_Param * ud = check_AP_Param(L);
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_set_rpm_scale(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->set_rpm_scale(
            data_2,
            data_3);

    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_update_telem_data(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 4);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    AP_ESC_Telem_Backend::TelemetryData & data_3 = *check_AP_ESC_Telem_Backend__TelemetryData(L, 3);
    const uint16_t raw_data_4 = get_uint16_t(L, 4);
    const uint16_t data_4 = static_cast<uint16_t>(raw_data_4);
    ud->update_telem_data(
            data_2,
            data_3,
            data_4);

    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_update_rpm(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 4);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    ud->update_rpm(
            data_2,
            data_3,
            data_4);

    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_usage_seconds(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    uint32_t data_5003 {};
    const bool data = static_cast<bool>(ud->get_usage_seconds(
            data_2,
            data_5003));

    if (data) {
        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data_5003;
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_consumption_mah(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get_consumption_mah(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_voltage(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get_voltage(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_current(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get_current(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_motor_temperature(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    int16_t data_5003 {};
    const bool data = static_cast<bool>(ud->get_motor_temperature(
            data_2,
            data_5003));

    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_temperature(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    int16_t data_5003 {};
    const bool data = static_cast<bool>(ud->get_temperature(
            data_2,
            data_5003));

    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if HAL_WITH_ESC_TELEM == 1
static int AP_ESC_Telem_get_rpm(lua_State *L) {
    AP_ESC_Telem * ud = check_AP_ESC_Telem(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get_rpm(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if AP_OPTICALFLOW_ENABLED
static int AP_OpticalFlow_quality(lua_State *L) {
    AP_OpticalFlow * ud = check_AP_OpticalFlow(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->quality());

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_OPTICALFLOW_ENABLED

#if AP_OPTICALFLOW_ENABLED
static int AP_OpticalFlow_healthy(lua_State *L) {
    AP_OpticalFlow * ud = check_AP_OpticalFlow(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->healthy());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_OPTICALFLOW_ENABLED

#if AP_OPTICALFLOW_ENABLED
static int AP_OpticalFlow_enabled(lua_State *L) {
    AP_OpticalFlow * ud = check_AP_OpticalFlow(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->enabled());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_OPTICALFLOW_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
static int AP_Baro_healthy(lua_State *L) {
    AP_Baro * ud = check_AP_Baro(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->healthy(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
static int AP_Baro_get_altitude(lua_State *L) {
    AP_Baro * ud = check_AP_Baro(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_altitude());

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
static int AP_Baro_get_external_temperature(lua_State *L) {
    AP_Baro * ud = check_AP_Baro(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_external_temperature());

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
static int AP_Baro_get_temperature(lua_State *L) {
    AP_Baro * ud = check_AP_Baro(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_temperature());

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
static int AP_Baro_get_pressure(lua_State *L) {
    AP_Baro * ud = check_AP_Baro(L);
    binding_argcheck(L, 1);
    const float data = static_cast<float>(ud->get_pressure());

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if HAL_GCS_ENABLED
static int AP_SerialManager_find_serial(lua_State *L) {
    AP_SerialManager * ud = check_AP_SerialManager(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    AP_HAL::UARTDriver *data = ud->find_serial(
            AP_SerialManager::SerialProtocol_Scripting,
            data_2);

    if (data == NULL) {
        return 0;
    }
    new_AP_HAL__UARTDriver(L);
    *(AP_HAL::UARTDriver**)luaL_checkudata(L, -1, "AP_HAL::UARTDriver") = data;
    return 1;
}
#endif // HAL_GCS_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channels_get_aux_cached(lua_State *L) {
    RC_Channels * ud = check_RC_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(0), static_cast<int32_t>(UINT16_MAX));
    const RC_Channel::AUX_FUNC data_2 = static_cast<RC_Channel::AUX_FUNC>(raw_data_2);
    uint8_t data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_aux_cached(
            data_2,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channels_lua_rc_channel(lua_State *L) {
    RC_Channels * ud = check_RC_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(NUM_RC_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    RC_Channel *data = ud->lua_rc_channel(
            data_2);

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data == NULL) {
        return 0;
    }
    new_RC_Channel(L);
    *(RC_Channel**)luaL_checkudata(L, -1, "RC_Channel") = data;
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channels_has_valid_input(lua_State *L) {
    RC_Channels * ud = check_RC_Channels(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->has_valid_input());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channels_run_aux_function(lua_State *L) {
    RC_Channels * ud = check_RC_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(0), static_cast<int32_t>(UINT16_MAX));
    const RC_Channel::AUX_FUNC data_2 = static_cast<RC_Channel::AUX_FUNC>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, static_cast<int32_t>(RC_Channel::AuxSwitchPos::LOW), static_cast<int32_t>(RC_Channel::AuxSwitchPos::HIGH));
    const RC_Channel::AuxSwitchPos data_3 = static_cast<RC_Channel::AuxSwitchPos>(raw_data_3);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->run_aux_function(
            data_2,
            data_3,
            RC_Channel::AuxFuncTriggerSource::SCRIPTING));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channels_find_channel_for_option(lua_State *L) {
    RC_Channels * ud = check_RC_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(0), static_cast<int32_t>(UINT16_MAX));
    const RC_Channel::AUX_FUNC data_2 = static_cast<RC_Channel::AUX_FUNC>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    RC_Channel *data = ud->find_channel_for_option(
            data_2);

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data == NULL) {
        return 0;
    }
    new_RC_Channel(L);
    *(RC_Channel**)luaL_checkudata(L, -1, "RC_Channel") = data;
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channels_get_pwm(lua_State *L) {
    RC_Channels * ud = check_RC_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(NUM_RC_CHANNELS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    uint16_t data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_pwm(
            data_2,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_get_emergency_stop(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->get_emergency_stop());

    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_set_range(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    ud->set_range(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_set_angle(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    ud->set_angle(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_set_output_norm(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    const float raw_data_3 = get_number(L, 3, MAX(-1, -INFINITY), MIN(1, INFINITY));
    const float data_3 = raw_data_3;
    ud->set_output_norm(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_get_output_scaled(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    const float data = static_cast<float>(ud->get_output_scaled(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_get_output_pwm(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    uint16_t data_5003 {};
    const bool data = static_cast<bool>(ud->get_output_pwm(
            data_2,
            data_5003));

    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_set_output_scaled(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->set_output_scaled(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
#if (!defined(HAL_BUILD_AP_PERIPH))
static int SRV_Channels_set_output_pwm_chan_timeout(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 4);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS-1, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    const uint16_t raw_data_4 = get_uint16_t(L, 4);
    const uint16_t data_4 = static_cast<uint16_t>(raw_data_4);
    ud->set_output_pwm_chan_timeout(
            data_2,
            data_3,
            data_4);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_set_output_pwm_chan(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(NUM_SERVO_CHANNELS-1, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    ud->set_output_pwm_chan(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_set_output_pwm(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    ud->set_output_pwm(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
static int SRV_Channels_find_channel(lua_State *L) {
    SRV_Channels * ud = check_SRV_Channels(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(SRV_Channel::k_none), static_cast<int32_t>(SRV_Channel::k_nr_aux_servo_functions-1));
    const SRV_Channel::Aux_servo_function_t data_2 = static_cast<SRV_Channel::Aux_servo_function_t>(raw_data_2);
    uint8_t data_5003 {};
    const bool data = static_cast<bool>(ud->find_channel(
            data_2,
            data_5003));

    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if AP_SERIALLED_ENABLED
static int AP_SerialLED_send(lua_State *L) {
    AP_SerialLED * ud = check_AP_SerialLED(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(16, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->send(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SERIALLED_ENABLED

#if AP_SERIALLED_ENABLED
static int AP_SerialLED_set_RGB(lua_State *L) {
    AP_SerialLED * ud = check_AP_SerialLED(L);
    binding_argcheck(L, 6);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(16, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(-1, INT8_MIN), MIN(INT8_MAX, INT8_MAX));
    const int8_t data_3 = static_cast<int8_t>(raw_data_3);
    const uint8_t raw_data_4 = get_uint8_t(L, 4);
    const uint8_t data_4 = static_cast<uint8_t>(raw_data_4);
    const uint8_t raw_data_5 = get_uint8_t(L, 5);
    const uint8_t data_5 = static_cast<uint8_t>(raw_data_5);
    const uint8_t raw_data_6 = get_uint8_t(L, 6);
    const uint8_t data_6 = static_cast<uint8_t>(raw_data_6);
    const bool data = static_cast<bool>(ud->set_RGB(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SERIALLED_ENABLED

#if AP_SERIALLED_ENABLED
static int AP_SerialLED_set_num_profiled(lua_State *L) {
    AP_SerialLED * ud = check_AP_SerialLED(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(16, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(0, 0), MIN(AP_SERIALLED_MAX_LEDS, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->set_num_profiled(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SERIALLED_ENABLED

#if AP_SERIALLED_ENABLED
static int AP_SerialLED_set_num_neopixel_rgb(lua_State *L) {
    AP_SerialLED * ud = check_AP_SerialLED(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(16, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(0, 0), MIN(AP_SERIALLED_MAX_LEDS, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->set_num_neopixel_rgb(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SERIALLED_ENABLED

#if AP_SERIALLED_ENABLED
static int AP_SerialLED_set_num_neopixel(lua_State *L) {
    AP_SerialLED * ud = check_AP_SerialLED(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(1, 0), MIN(16, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const lua_Integer raw_data_3 = get_integer(L, 3, MAX(0, 0), MIN(AP_SERIALLED_MAX_LEDS, UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->set_num_neopixel(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SERIALLED_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_is_taking_off(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->is_taking_off());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_is_landing(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->is_landing());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_reboot(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    ud->reboot(
            data_2);

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_has_ekf_failsafed(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->has_ekf_failsafed());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_land_descent_rate(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_land_descent_rate(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_velocity_match(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    Vector2f & data_2 = *check_Vector2f(L, 2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_velocity_match(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_nav_scripting_enable(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->nav_scripting_enable(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_desired_speed(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_desired_speed(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_desired_turn_rate_and_speed(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 3);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_desired_turn_rate_and_speed(
            data_2,
            data_3));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_rudder_offset(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 3);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    ud->set_rudder_offset(
            data_2,
            data_3);

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_throttle_rate_rpy(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 5);
    const float raw_data_2 = get_number(L, 2, MAX(-100, -INFINITY), MIN(100, INFINITY));
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    ud->set_target_throttle_rate_rpy(
            data_2,
            data_3,
            data_4,
            data_5);

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_nav_script_time_done(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    ud->nav_script_time_done(
            data_2);

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_nav_script_time(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    uint16_t data_5002 {};
    uint8_t data_5003 {};
    float data_5004 {};
    float data_5005 {};
    int16_t data_5006 {};
    int16_t data_5007 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->nav_script_time(
            data_5002,
            data_5003,
            data_5004,
            data_5005,
            data_5006,
            data_5007));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushinteger(L, data_5002);
        lua_pushinteger(L, data_5003);
        lua_pushnumber(L, data_5004);
        lua_pushnumber(L, data_5005);
        lua_pushinteger(L, data_5006);
        lua_pushinteger(L, data_5007);
        return 6;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_pan_tilt_norm(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    float data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_pan_tilt_norm(
            data_5002,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5002);
        lua_pushnumber(L, data_5003);
        return 2;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_wp_crosstrack_error_m(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    float data_5002 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_wp_crosstrack_error_m(
            data_5002));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_wp_bearing_deg(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    float data_5002 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_wp_bearing_deg(
            data_5002));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_wp_distance_m(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    float data_5002 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_wp_distance_m(
            data_5002));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_steering_and_throttle(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    float data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_steering_and_throttle(
            data_5002,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5002);
        lua_pushnumber(L, data_5003);
        return 2;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_steering_and_throttle(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 3);
    const float raw_data_2 = get_number(L, 2, MAX(-1, -INFINITY), MIN(1, INFINITY));
    const float data_2 = raw_data_2;
    const float raw_data_3 = get_number(L, 3, MAX(-1, -INFINITY), MIN(1, INFINITY));
    const float data_3 = raw_data_3;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_steering_and_throttle(
            data_2,
            data_3));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_circle_rate(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_circle_rate(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_circle_radius(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    float data_5002 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_circle_radius(
            data_5002));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_angle_and_climbrate(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 7);
    const float raw_data_2 = get_number(L, 2, MAX(-180, -INFINITY), MIN(180, INFINITY));
    const float data_2 = raw_data_2;
    const float raw_data_3 = get_number(L, 3, MAX(-90, -INFINITY), MIN(90, INFINITY));
    const float data_3 = raw_data_3;
    const float raw_data_4 = get_number(L, 4, MAX(-360, -INFINITY), MIN(360, INFINITY));
    const float data_4 = raw_data_4;
    const float raw_data_5 = luaL_checknumber(L, 5);
    const float data_5 = raw_data_5;
    const bool data_6 = static_cast<bool>(lua_toboolean(L, 6));
    const float raw_data_7 = luaL_checknumber(L, 7);
    const float data_7 = raw_data_7;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_angle_and_climbrate(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6,
            data_7));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_velocity_NED(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    Vector3f & data_2 = *check_Vector3f(L, 2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_velocity_NED(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_velaccel_NED(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 8);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    Vector3f & data_3 = *check_Vector3f(L, 3);
    const bool data_4 = static_cast<bool>(lua_toboolean(L, 4));
    const float raw_data_5 = get_number(L, 5, MAX(-360, -INFINITY), MIN(+360, INFINITY));
    const float data_5 = raw_data_5;
    const bool data_6 = static_cast<bool>(lua_toboolean(L, 6));
    const float raw_data_7 = luaL_checknumber(L, 7);
    const float data_7 = raw_data_7;
    const bool data_8 = static_cast<bool>(lua_toboolean(L, 8));
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_velaccel_NED(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6,
            data_7,
            data_8));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_posvelaccel_NED(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 9);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    Vector3f & data_3 = *check_Vector3f(L, 3);
    Vector3f & data_4 = *check_Vector3f(L, 4);
    const bool data_5 = static_cast<bool>(lua_toboolean(L, 5));
    const float raw_data_6 = get_number(L, 6, MAX(-360, -INFINITY), MIN(+360, INFINITY));
    const float data_6 = raw_data_6;
    const bool data_7 = static_cast<bool>(lua_toboolean(L, 7));
    const float raw_data_8 = luaL_checknumber(L, 8);
    const float data_8 = raw_data_8;
    const bool data_9 = static_cast<bool>(lua_toboolean(L, 9));
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_posvelaccel_NED(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6,
            data_7,
            data_8,
            data_9));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_posvel_NED(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 3);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    Vector3f & data_3 = *check_Vector3f(L, 3);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_posvel_NED(
            data_2,
            data_3));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_pos_NED(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 8);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
    const float raw_data_4 = get_number(L, 4, MAX(-360, -INFINITY), MIN(+360, INFINITY));
    const float data_4 = raw_data_4;
    const bool data_5 = static_cast<bool>(lua_toboolean(L, 5));
    const float raw_data_6 = luaL_checknumber(L, 6);
    const float data_6 = raw_data_6;
    const bool data_7 = static_cast<bool>(lua_toboolean(L, 7));
    const bool data_8 = static_cast<bool>(lua_toboolean(L, 8));
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_pos_NED(
            data_2,
            data_3,
            data_4,
            data_5,
            data_6,
            data_7,
            data_8));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_update_target_location(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 3);
    Location & data_2 = *check_Location(L, 2);
    Location & data_3 = *check_Location(L, 3);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->update_target_location(
            data_2,
            data_3));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_target_location(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
    Location data_5002 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_target_location(
            data_5002));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_target_location(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    Location & data_2 = *check_Location(L, 2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_target_location(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_start_takeoff(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = get_number(L, 2, MAX((-LOCATION_ALT_MAX_M*100+1), -INFINITY), MIN((LOCATION_ALT_MAX_M*100-1), INFINITY));
    const float data_2 = raw_data_2;
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->start_takeoff(
            data_2));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_control_output(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(AP_Vehicle::ControlOutput::Roll), static_cast<int32_t>(((uint32_t)AP_Vehicle::ControlOutput::Last_ControlOutput-1)));
    const AP_Vehicle::ControlOutput data_2 = static_cast<AP_Vehicle::ControlOutput>(raw_data_2);
    float data_5003 {};
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_control_output(
            data_2,
            data_5003));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_time_flying_ms(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint32_t data = static_cast<uint32_t>(ud->get_time_flying_ms());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_likely_flying(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->get_likely_flying());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_control_mode_reason(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint8_t data = static_cast<uint8_t>(ud->get_control_mode_reason());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_get_mode(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 1);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const uint8_t data = static_cast<uint8_t>(ud->get_mode());

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if (!defined(HAL_BUILD_AP_PERIPH))
static int AP_Vehicle_set_mode(lua_State *L) {
    AP_Vehicle * ud = check_AP_Vehicle(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().take_blocking();
#endif
    const bool data = static_cast<bool>(ud->set_mode(
            data_2,
            ModeReason::SCRIPTING));

#if AP_SCHEDULER_ENABLED
    AP::scheduler().get_semaphore().give();
#endif
    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if ENABLE_ONVIF == 1
static int AP_ONVIF_get_pan_tilt_limit_max(lua_State *L) {
    AP_ONVIF * ud = check_AP_ONVIF(L);
    binding_argcheck(L, 1);
    const Vector2f &data = ud->get_pan_tilt_limit_max();

    new_Vector2f(L);
    *check_Vector2f(L, -1) = data;
    return 1;
}
#endif // ENABLE_ONVIF == 1

#if ENABLE_ONVIF == 1
static int AP_ONVIF_get_pan_tilt_limit_min(lua_State *L) {
    AP_ONVIF * ud = check_AP_ONVIF(L);
    binding_argcheck(L, 1);
    const Vector2f &data = ud->get_pan_tilt_limit_min();

    new_Vector2f(L);
    *check_Vector2f(L, -1) = data;
    return 1;
}
#endif // ENABLE_ONVIF == 1

#if ENABLE_ONVIF == 1
static int AP_ONVIF_set_absolutemove(lua_State *L) {
    AP_ONVIF * ud = check_AP_ONVIF(L);
    binding_argcheck(L, 4);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const bool data = static_cast<bool>(ud->set_absolutemove(
            data_2,
            data_3,
            data_4));

    lua_pushboolean(L, data);
    return 1;
}
#endif // ENABLE_ONVIF == 1

#if ENABLE_ONVIF == 1
static int AP_ONVIF_start(lua_State *L) {
    AP_ONVIF * ud = check_AP_ONVIF(L);
    binding_argcheck(L, 4);
    const char * data_2 = luaL_checkstring(L, 2);
    const char * data_3 = luaL_checkstring(L, 3);
    const char * data_4 = luaL_checkstring(L, 4);
    const bool data = static_cast<bool>(ud->start(
            data_2,
            data_3,
            data_4));

    lua_pushboolean(L, data);
    return 1;
}
#endif // ENABLE_ONVIF == 1

#if HAL_GCS_ENABLED
#if HAL_HIGH_LATENCY2_ENABLED == 1
static int GCS_enable_high_latency_connections(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 2);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    ud->enable_high_latency_connections(
            data_2);

    return 0;
}
#endif // HAL_HIGH_LATENCY2_ENABLED == 1
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
#if HAL_HIGH_LATENCY2_ENABLED == 1
static int GCS_get_high_latency_status(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->get_high_latency_status());

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_HIGH_LATENCY2_ENABLED == 1
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
static int GCS_sysid_myggcs_last_seen_time_ms(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->sysid_myggcs_last_seen_time_ms());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
static int GCS_get_hud_throttle(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 1);
    const int16_t data = static_cast<int16_t>(ud->get_hud_throttle());

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
static int GCS_frame_type(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 1);
    const MAV_TYPE &data = ud->frame_type();

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
static int GCS_send_named_float(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 3);
    const char * data_2 = luaL_checkstring(L, 2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->send_named_float(
            data_2,
            data_3);

    return 0;
}
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
static int GCS_set_message_interval(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 4);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(MAVLINK_COMM_NUM_BUFFERS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint32_t raw_data_3 = coerce_to_uint32_t(L, 3);
    const uint32_t data_3 = static_cast<uint32_t>(raw_data_3);
    const lua_Integer raw_data_4 = get_integer(L, 4, MAX(-1, INT32_MIN), MIN(INT32_MAX, INT32_MAX));
    const int32_t data_4 = raw_data_4;
    const MAV_RESULT &data = ud->set_message_interval(
            data_2,
            data_3,
            data_4);

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_GCS_ENABLED

#if HAL_GCS_ENABLED
static int GCS_send_text(lua_State *L) {
    GCS * ud = check_GCS(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(MAV_SEVERITY_EMERGENCY), static_cast<int32_t>(MAV_SEVERITY_DEBUG));
    const MAV_SEVERITY data_2 = static_cast<MAV_SEVERITY>(raw_data_2);
    const char * data_3 = luaL_checkstring(L, 3);
    ud->send_text(
            data_2,
            "%s",
            data_3);

    return 0;
}
#endif // HAL_GCS_ENABLED

#if AP_RELAY_ENABLED
static int AP_Relay_get(lua_State *L) {
    AP_Relay * ud = check_AP_Relay(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_RELAY_NUM_RELAYS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t data = static_cast<uint8_t>(ud->get(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_RELAY_ENABLED

#if AP_RELAY_ENABLED
static int AP_Relay_toggle(lua_State *L) {
    AP_Relay * ud = check_AP_Relay(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_RELAY_NUM_RELAYS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->toggle(
            data_2);

    return 0;
}
#endif // AP_RELAY_ENABLED

#if AP_RELAY_ENABLED
static int AP_Relay_enabled(lua_State *L) {
    AP_Relay * ud = check_AP_Relay(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_RELAY_NUM_RELAYS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->enabled(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_RELAY_ENABLED

#if AP_RELAY_ENABLED
static int AP_Relay_off(lua_State *L) {
    AP_Relay * ud = check_AP_Relay(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_RELAY_NUM_RELAYS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->off(
            data_2);

    return 0;
}
#endif // AP_RELAY_ENABLED

#if AP_RELAY_ENABLED
static int AP_Relay_on(lua_State *L) {
    AP_Relay * ud = check_AP_Relay(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(AP_RELAY_NUM_RELAYS, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->on(
            data_2);

    return 0;
}
#endif // AP_RELAY_ENABLED

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
static int AP_Terrain_height_above_terrain(lua_State *L) {
    AP_Terrain * ud = check_AP_Terrain(L);
    binding_argcheck(L, 2);
    float data_5002 {};
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
    const bool data = static_cast<bool>(ud->height_above_terrain(
            data_5002,
            data_3));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
static int AP_Terrain_height_terrain_difference_home(lua_State *L) {
    AP_Terrain * ud = check_AP_Terrain(L);
    binding_argcheck(L, 2);
    float data_5002 {};
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
    const bool data = static_cast<bool>(ud->height_terrain_difference_home(
            data_5002,
            data_3));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
static int AP_Terrain_height_amsl(lua_State *L) {
    AP_Terrain * ud = check_AP_Terrain(L);
    binding_argcheck(L, 3);
    Location & data_2 = *check_Location(L, 2);
    float data_5003 {};
    const bool data_4 = static_cast<bool>(lua_toboolean(L, 4));
    const bool data = static_cast<bool>(ud->height_amsl(
            data_2,
            data_5003,
            data_4));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
static int AP_Terrain_status(lua_State *L) {
    AP_Terrain * ud = check_AP_Terrain(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->status());

    lua_pushinteger(L, data);
    return 1;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
static int AP_Terrain_enabled(lua_State *L) {
    AP_Terrain * ud = check_AP_Terrain(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->enabled());

    lua_pushboolean(L, data);
    return 1;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_get_backend(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    AP_RangeFinder_Backend *data = ud->get_backend(
            data_2);

    if (data == NULL) {
        return 0;
    }
    new_AP_RangeFinder_Backend(L);
    *(AP_RangeFinder_Backend**)luaL_checkudata(L, -1, "AP_RangeFinder_Backend") = data;
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_get_pos_offset_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const Vector3f &data = ud->get_pos_offset_orient(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_has_data_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const bool data = static_cast<bool>(ud->has_data_orient(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_status_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const uint8_t data = static_cast<uint8_t>(ud->status_orient(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_ground_clearance_cm_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->ground_clearance_cm_orient(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_min_distance_cm_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->min_distance_cm_orient(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_max_distance_cm_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->max_distance_cm_orient(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_signal_quality_pct_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const int8_t data = static_cast<int8_t>(ud->signal_quality_pct_orient(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_distance_cm_orient(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->distance_cm_orient(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_has_orientation(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(ROTATION_NONE), static_cast<int32_t>(ROTATION_MAX-1));
    const Rotation data_2 = static_cast<Rotation>(raw_data_2);
    const bool data = static_cast<bool>(ud->has_orientation(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder_num_sensors(lua_State *L) {
    RangeFinder * ud = check_RangeFinder(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->num_sensors());

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_get_backend(lua_State *L) {
    AP_Proximity * ud = check_AP_Proximity(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    AP_Proximity_Backend *data = ud->get_backend(
            data_2);

    if (data == NULL) {
        return 0;
    }
    new_AP_Proximity_Backend(L);
    *(AP_Proximity_Backend**)luaL_checkudata(L, -1, "AP_Proximity_Backend") = data;
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_get_object_angle_and_distance(lua_State *L) {
    AP_Proximity * ud = check_AP_Proximity(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    float data_5004 {};
    const bool data = static_cast<bool>(ud->get_object_angle_and_distance(
            data_2,
            data_5003,
            data_5004));

    if (data) {
        lua_pushnumber(L, data_5003);
        lua_pushnumber(L, data_5004);
        return 2;
    }
    return 0;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_get_closest_object(lua_State *L) {
    AP_Proximity * ud = check_AP_Proximity(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    float data_5003 {};
    const bool data = static_cast<bool>(ud->get_closest_object(
            data_5002,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5002);
        lua_pushnumber(L, data_5003);
        return 2;
    }
    return 0;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_get_object_count(lua_State *L) {
    AP_Proximity * ud = check_AP_Proximity(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_object_count());

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_num_sensors(lua_State *L) {
    AP_Proximity * ud = check_AP_Proximity(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->num_sensors());

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_get_status(lua_State *L) {
    AP_Proximity * ud = check_AP_Proximity(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_status());

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
static int AP_Notify_release_text_scripting(lua_State *L) {
    AP_Notify * ud = check_AP_Notify(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->release_text_scripting(
            data_2);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
static int AP_Notify_send_text_scripting(lua_State *L) {
    AP_Notify * ud = check_AP_Notify(L);
    binding_argcheck(L, 3);
    const char * data_2 = luaL_checkstring(L, 2);
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    ud->send_text_scripting(
            data_2,
            data_3);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
static int AP_Notify_handle_rgb_id(lua_State *L) {
    AP_Notify * ud = check_AP_Notify(L);
    binding_argcheck(L, 5);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const uint8_t raw_data_4 = get_uint8_t(L, 4);
    const uint8_t data_4 = static_cast<uint8_t>(raw_data_4);
    const uint8_t raw_data_5 = get_uint8_t(L, 5);
    const uint8_t data_5 = static_cast<uint8_t>(raw_data_5);
    ud->handle_rgb_id(
            data_2,
            data_3,
            data_4,
            data_5);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
static int AP_Notify_handle_rgb(lua_State *L) {
    AP_Notify * ud = check_AP_Notify(L);
    binding_argcheck(L, 5);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const uint8_t raw_data_4 = get_uint8_t(L, 4);
    const uint8_t data_4 = static_cast<uint8_t>(raw_data_4);
    const uint8_t raw_data_5 = get_uint8_t(L, 5);
    const uint8_t data_5 = static_cast<uint8_t>(raw_data_5);
    ud->handle_rgb(
            data_2,
            data_3,
            data_4,
            data_5);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
static int AP_Notify_play_tune(lua_State *L) {
    AP_Notify * ud = check_AP_Notify(L);
    binding_argcheck(L, 2);
    const char * data_2 = luaL_checkstring(L, 2);
    ud->play_tune(
            data_2);

    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_gps_yaw_deg(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    float data_5004 {};
    uint32_t data_5005 {};
    const bool data = static_cast<bool>(ud->gps_yaw_deg(
            data_2,
            data_5003,
            data_5004,
            data_5005));

    if (data) {
        lua_pushnumber(L, data_5003);
        lua_pushnumber(L, data_5004);
        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data_5005;
        return 3;
    }
    return 0;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_first_unconfigured_gps(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 1);
    uint8_t data_5002 {};
    const bool data = static_cast<bool>(ud->first_unconfigured_gps(
            data_5002));

    if (data) {
        lua_pushinteger(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_get_antenna_offset(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const Vector3f &data = ud->get_antenna_offset(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_have_vertical_velocity(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->have_vertical_velocity(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_last_message_time_ms(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint32_t data = static_cast<uint32_t>(ud->last_message_time_ms(
            data_2));

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_last_fix_time_ms(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint32_t data = static_cast<uint32_t>(ud->last_fix_time_ms(
            data_2));

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_get_vdop(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->get_vdop(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_get_hdop(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->get_hdop(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_time_week_ms(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint32_t data = static_cast<uint32_t>(ud->time_week_ms(
            data_2));

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_time_week(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint16_t data = static_cast<uint16_t>(ud->time_week(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_num_sats(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t data = static_cast<uint8_t>(ud->num_sats(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_ground_course(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float data = static_cast<float>(ud->ground_course(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_ground_speed(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float data = static_cast<float>(ud->ground_speed(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_velocity(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const Vector3f &data = ud->velocity(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_vertical_accuracy(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->vertical_accuracy(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_horizontal_accuracy(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->horizontal_accuracy(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_speed_accuracy(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    float data_5003 {};
    const bool data = static_cast<bool>(ud->speed_accuracy(
            data_2,
            data_5003));

    if (data) {
        lua_pushnumber(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_location(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const Location &data = ud->location(
            data_2);

    new_Location(L);
    *check_Location(L, -1) = data;
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_status(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_sensors(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t data = static_cast<uint8_t>(ud->status(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_primary_sensor(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->primary_sensor());

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
static int AP_GPS_num_sensors(lua_State *L) {
    AP_GPS * ud = check_AP_GPS(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->num_sensors());

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if AP_BATTERY_ENABLED
#if AP_BATTERY_SCRIPTING_ENABLED
static int AP_BattMonitor_handle_scripting(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    BattMonitorScript_State & data_3 = *check_BattMonitorScript_State(L, 3);
    const bool data = static_cast<bool>(ud->handle_scripting(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_BATTERY_SCRIPTING_ENABLED
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_get_cell_voltage(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    float data_5004 {};
    const bool data = static_cast<bool>(ud->get_cell_voltage(
            data_2,
            data_3,
            data_5004));

    if (data) {
        lua_pushnumber(L, data_5004);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_reset_remaining(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 3);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float raw_data_3 = get_number(L, 3, MAX(0, -INFINITY), MIN(100, INFINITY));
    const float data_3 = raw_data_3;
    const bool data = static_cast<bool>(ud->reset_remaining(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_get_cycle_count(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    uint16_t data_5003 {};
    const bool data = static_cast<bool>(ud->get_cycle_count(
            data_2,
            data_5003));

    if (data) {
        lua_pushinteger(L, data_5003);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_get_temperature(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    float data_5002 {};
    const lua_Integer raw_data_3 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->get_temperature(
            data_5002,
            data_3));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_overpower_detected(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->overpower_detected(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_has_failsafed(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->has_failsafed());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_pack_capacity_mah(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const int32_t data = static_cast<int32_t>(ud->pack_capacity_mah(
            data_2));

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_capacity_remaining_pct(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    uint8_t data_5002 {};
    const lua_Integer raw_data_3 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->capacity_remaining_pct(
            data_5002,
            data_3));

    if (data) {
        lua_pushinteger(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_consumed_wh(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    float data_5002 {};
    const lua_Integer raw_data_3 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->consumed_wh(
            data_5002,
            data_3));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_consumed_mah(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    float data_5002 {};
    const lua_Integer raw_data_3 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->consumed_mah(
            data_5002,
            data_3));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_current_amps(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    float data_5002 {};
    const lua_Integer raw_data_3 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->current_amps(
            data_5002,
            data_3));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_voltage_resting_estimate(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float data = static_cast<float>(ud->voltage_resting_estimate(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_voltage(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const float data = static_cast<float>(ud->voltage(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_healthy(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(ud->num_instances(), UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->healthy(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_BATTERY_ENABLED
static int AP_BattMonitor_num_instances(lua_State *L) {
    AP_BattMonitor * ud = check_AP_BattMonitor(L);
    binding_argcheck(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->num_instances());

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_BATTERY_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_set_aux_auth_failed(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 3);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const char * data_3 = luaL_checkstring(L, 3);
    ud->set_aux_auth_failed(
            data_2,
            data_3);

    return 0;
}
#endif // AP_ARMING_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_set_aux_auth_passed(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->set_aux_auth_passed(
            data_2);

    return 0;
}
#endif // AP_ARMING_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_get_aux_auth_id(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 1);
    uint8_t data_5002 {};
    const bool data = static_cast<bool>(ud->get_aux_auth_id(
            data_5002));

    if (data) {
        lua_pushinteger(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_ARMING_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_arm(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->arm(            AP_Arming::Method::SCRIPTING));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_ARMING_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_pre_arm_checks(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->pre_arm_checks(            false));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_ARMING_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_is_armed(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->is_armed());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_ARMING_ENABLED

#if AP_ARMING_ENABLED
static int AP_Arming_disarm(lua_State *L) {
    AP_Arming * ud = check_AP_Arming(L);
    binding_argcheck(L, 1);
    const bool data = static_cast<bool>(ud->disarm(            AP_Arming::Method::SCRIPTING));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_ARMING_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_quaternion(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    Quaternion data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_quaternion(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        new_Quaternion(L);
        *check_Quaternion(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_posvelyaw_source_set(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const uint8_t data = static_cast<uint8_t>(ud->get_posvelyaw_source_set());

    ud->get_semaphore().give();
    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_initialised(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->initialised());

    ud->get_semaphore().give();
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_set_origin(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    Location & data_2 = *check_Location(L, 2);
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->set_origin(
            data_2));

    ud->get_semaphore().give();
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_origin(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    Location data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_origin(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_set_home(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    Location & data_2 = *check_Location(L, 2);
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->set_home(
            data_2));

    ud->get_semaphore().give();
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_vel_innovations_and_variances_for_source(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(3, 0), MIN(6, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    Vector3f data_5003 {};
    Vector3f data_5004 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_vel_innovations_and_variances_for_source(
            data_2,
            data_5003,
            data_5004));

    ud->get_semaphore().give();
    if (data) {
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5003;
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5004;
        return 2;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_set_posvelyaw_source_set(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(2, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->get_semaphore().take_blocking();
    ud->set_posvelyaw_source_set(
            data_2);

    ud->get_semaphore().give();
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_variances(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    float data_5003 {};
    float data_5004 {};
    Vector3f data_5005 {};
    float data_5006 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_variances(
            data_5002,
            data_5003,
            data_5004,
            data_5005,
            data_5006));

    ud->get_semaphore().give();
    if (data) {
        lua_pushnumber(L, data_5002);
        lua_pushnumber(L, data_5003);
        lua_pushnumber(L, data_5004);
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5005;
        lua_pushnumber(L, data_5006);
        return 5;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_EAS2TAS(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const float data = static_cast<float>(ud->get_EAS2TAS());

    ud->get_semaphore().give();
    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_body_to_earth(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    ud->get_semaphore().take_blocking();
    const Vector3f &data = ud->body_to_earth(
            data_2);

    ud->get_semaphore().give();
    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_earth_to_body(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    ud->get_semaphore().take_blocking();
    const Vector3f &data = ud->earth_to_body(
            data_2);

    ud->get_semaphore().give();
    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_vibration(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const Vector3f &data = ud->get_vibration();

    ud->get_semaphore().give();
    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_airspeed_estimate(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->airspeed_estimate(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_healthy(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->healthy());

    ud->get_semaphore().give();
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_home_is_set(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->home_is_set());

    ud->get_semaphore().give();
    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_relative_position_D_home(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    ud->get_semaphore().take_blocking();
    ud->get_relative_position_D_home(
            data_5002);

    ud->get_semaphore().give();
    lua_pushnumber(L, data_5002);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_relative_position_NED_origin(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    Vector3f data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_relative_position_NED_origin(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_relative_position_NED_home(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    Vector3f data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_relative_position_NED_home(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_velocity_NED(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    Vector3f data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_velocity_NED(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_groundspeed_vector(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const Vector2f &data = ud->groundspeed_vector();

    ud->get_semaphore().give();
    new_Vector2f(L);
    *check_Vector2f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_head_wind(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const float data = static_cast<float>(ud->head_wind());

    ud->get_semaphore().give();
    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_wind_alignment(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->get_semaphore().take_blocking();
    const float data = static_cast<float>(ud->wind_alignment(
            data_2));

    ud->get_semaphore().give();
    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_wind_estimate(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const Vector3f &data = ud->wind_estimate();

    ud->get_semaphore().give();
    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_hagl(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    float data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_hagl(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_accel(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const Vector3f &data = ud->get_accel();

    ud->get_semaphore().give();
    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_gyro(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const Vector3f &data = ud->get_gyro();

    ud->get_semaphore().give();
    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_home(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const Location &data = ud->get_home();

    ud->get_semaphore().give();
    new_Location(L);
    *check_Location(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_location(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    Location data_5002 {};
    ud->get_semaphore().take_blocking();
    const bool data = static_cast<bool>(ud->get_location(
            data_5002));

    ud->get_semaphore().give();
    if (data) {
        new_Location(L);
        *check_Location(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_yaw(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const float data = static_cast<float>(ud->get_yaw());

    ud->get_semaphore().give();
    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_pitch(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const float data = static_cast<float>(ud->get_pitch());

    ud->get_semaphore().give();
    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int AP_AHRS_get_roll(lua_State *L) {
    AP_AHRS * ud = check_AP_AHRS(L);
    binding_argcheck(L, 1);
    ud->get_semaphore().take_blocking();
    const float data = static_cast<float>(ud->get_roll());

    ud->get_semaphore().give();
    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if HAL_VISUALODOM_ENABLED
const luaL_Reg AP_VisualOdom_meta[] = {
    {"quality", AP_VisualOdom_quality},
    {"healthy", AP_VisualOdom_healthy},
};

static int AP_VisualOdom_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_VisualOdom_meta,ARRAY_SIZE(AP_VisualOdom_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_VISUALODOM_ENABLED

#if AP_NETWORKING_ENABLED
const luaL_Reg AP_Networking_meta[] = {
    {"address_to_str", AP_Networking_address_to_str},
    {"get_gateway_active", AP_Networking_get_gateway_active},
    {"get_netmask_active", AP_Networking_get_netmask_active},
    {"get_ip_active", AP_Networking_get_ip_active},
};

static int AP_Networking_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Networking_meta,ARRAY_SIZE(AP_Networking_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_NETWORKING_ENABLED

#if AP_RTC_ENABLED
const luaL_Reg AP_RTC_meta[] = {
    {"date_fields_to_clock_s", AP_RTC_date_fields_to_clock_s},
    {"clock_s_to_date_fields", AP_RTC_clock_s_to_date_fields},
};

static int AP_RTC_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_RTC_meta,ARRAY_SIZE(AP_RTC_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_RTC_ENABLED

const luaL_Reg AP_Filesystem_meta[] = {
    {"crc32", AP_Filesystem_crc32},
#if AP_FILESYSTEM_FORMAT_ENABLED
    {"get_format_status", AP_Filesystem_get_format_status},
#endif // AP_FILESYSTEM_FORMAT_ENABLED
#if AP_FILESYSTEM_FORMAT_ENABLED
    {"format", AP_Filesystem_format},
#endif // AP_FILESYSTEM_FORMAT_ENABLED
    {"stat", AP_Filesystem_stat},
};

static int AP_Filesystem_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Filesystem_meta,ARRAY_SIZE(AP_Filesystem_meta),name)) {
        return 1;
    }
    return 0;
}

#if AP_FENCE_ENABLED
const luaL_Reg AC_Fence_meta[] = {
    {"get_breach_time", AC_Fence_get_breach_time},
    {"get_breaches", AC_Fence_get_breaches},
};

static int AC_Fence_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AC_Fence_meta,ARRAY_SIZE(AC_Fence_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_FENCE_ENABLED

#if HAL_GCS_ENABLED
const luaL_Reg mavlink_meta[] = {
    {"block_command", lua_mavlink_block_command},
    {"receive_chan", lua_mavlink_receive_chan},
    {"send_chan", lua_mavlink_send_chan},
    {"register_rx_msgid", lua_mavlink_register_rx_msgid},
    {"init", lua_mavlink_init},
};

static int mavlink_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,mavlink_meta,ARRAY_SIZE(mavlink_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_GCS_ENABLED

const luaL_Reg i2c_meta[] = {
    {"get_device", lua_get_i2c_device},
};

static int i2c_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,i2c_meta,ARRAY_SIZE(i2c_meta),name)) {
        return 1;
    }
    return 0;
}

#if HAL_LOGGING_ENABLED
const luaL_Reg AP_Logger_meta[] = {
#if HAL_LOGGER_FILE_CONTENTS_ENABLED
    {"log_file_content", AP_Logger_log_file_content},
#endif // HAL_LOGGER_FILE_CONTENTS_ENABLED
    {"write", AP_Logger_Write},
};

static int AP_Logger_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Logger_meta,ARRAY_SIZE(AP_Logger_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_LOGGING_ENABLED

#if (AP_EFI_SCRIPTING_ENABLED == 1)
const luaL_Reg AP_EFI_meta[] = {
    {"get_state", AP_EFI_get_state},
    {"get_backend", AP_EFI_get_backend},
};

static int AP_EFI_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_EFI_meta,ARRAY_SIZE(AP_EFI_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_COMPASS_ENABLED
const luaL_Reg Compass_meta[] = {
    {"healthy", Compass_healthy},
};

static int Compass_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Compass_meta,ARRAY_SIZE(Compass_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_COMPASS_ENABLED

#if HAL_WITH_IO_MCU
const luaL_Reg AP_IOMCU_meta[] = {
    {"healthy", AP_IOMCU_healthy},
};

static int AP_IOMCU_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_IOMCU_meta,ARRAY_SIZE(AP_IOMCU_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_IO_MCU

#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
const luaL_Reg AP_Winch_meta[] = {
    {"get_rate_max", AP_Winch_get_rate_max},
    {"set_desired_rate", AP_Winch_set_desired_rate},
    {"release_length", AP_Winch_release_length},
    {"relax", AP_Winch_relax},
    {"healthy", AP_Winch_healthy},
};

static int AP_Winch_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Winch_meta,ARRAY_SIZE(AP_Winch_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
const luaL_Reg AP_Camera_meta[] = {
    {"get_state", AP_Camera_get_state},
    {"set_trigger_distance", AP_Camera_set_trigger_distance},
    {"record_video", AP_Camera_record_video},
    {"take_picture", AP_Camera_take_picture},
};

static int AP_Camera_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Camera_meta,ARRAY_SIZE(AP_Camera_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if HAL_MOUNT_ENABLED == 1
const luaL_Reg AP_Mount_meta[] = {
    {"set_attitude_euler", AP_Mount_set_attitude_euler},
    {"get_location_target", AP_Mount_get_location_target},
    {"get_angle_target", AP_Mount_get_angle_target},
    {"get_rate_target", AP_Mount_get_rate_target},
    {"get_attitude_euler", AP_Mount_get_attitude_euler},
    {"set_roi_target", AP_Mount_set_roi_target},
    {"set_rate_target", AP_Mount_set_rate_target},
    {"set_angle_target", AP_Mount_set_angle_target},
    {"set_mode", AP_Mount_set_mode},
    {"get_mode", AP_Mount_get_mode},
};

static int AP_Mount_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Mount_meta,ARRAY_SIZE(AP_Mount_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_MOUNT_ENABLED == 1

#if APM_BUILD_TYPE(APM_BUILD_Rover)
const luaL_Reg AR_PosControl_meta[] = {
    {"get_srate", AR_PosControl_get_srate},
};

static int AR_PosControl_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AR_PosControl_meta,ARRAY_SIZE(AR_PosControl_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)

#if APM_BUILD_TYPE(APM_BUILD_Rover)
const luaL_Reg AR_AttitudeControl_meta[] = {
    {"get_srate", AR_AttitudeControl_get_srate},
};

static int AR_AttitudeControl_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AR_AttitudeControl_meta,ARRAY_SIZE(AR_AttitudeControl_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
const luaL_Reg AC_AttitudeControl_meta[] = {
    {"get_rpy_srate", AC_AttitudeControl_get_rpy_srate},
};

static int AC_AttitudeControl_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AC_AttitudeControl_meta,ARRAY_SIZE(AC_AttitudeControl_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
const luaL_Reg AC_PrecLand_meta[] = {
    {"get_target_location", AC_PrecLand_get_target_location},
    {"get_target_velocity", AC_PrecLand_get_target_velocity},
    {"get_last_valid_target_ms", AC_PrecLand_get_last_valid_target_ms},
    {"target_acquired", AC_PrecLand_target_acquired},
    {"healthy", AC_PrecLand_healthy},
};

static int AC_PrecLand_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AC_PrecLand_meta,ARRAY_SIZE(AC_PrecLand_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
const luaL_Reg AP_Follow_meta[] = {
    {"get_target_heading_deg", AP_Follow_get_target_heading_deg},
    {"get_target_location_and_velocity_ofs", AP_Follow_get_target_location_and_velocity_ofs},
    {"get_target_location_and_velocity", AP_Follow_get_target_location_and_velocity},
    {"get_last_update_ms", AP_Follow_get_last_update_ms},
    {"have_target", AP_Follow_have_target},
};

static int AP_Follow_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Follow_meta,ARRAY_SIZE(AP_Follow_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)

const luaL_Reg AP__fwversion___meta[] = {
    {"hash", AP__fwversion___fw_hash_str},
    {"patch", AP__fwversion___patch},
    {"minor", AP__fwversion___minor},
    {"major", AP__fwversion___major},
    {"type", AP__fwversion___vehicle_type},
    {"string", AP__fwversion___fw_short_string},
};

static int AP__fwversion___index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP__fwversion___meta,ARRAY_SIZE(AP__fwversion___meta),name)) {
        return 1;
    }
    return 0;
}

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
const luaL_Reg AP__motors___meta[] = {
    {"set_external_limits", AP__motors___set_external_limits},
    {"get_spool_state", AP__motors___get_spool_state},
    {"get_lateral", AP__motors___get_lateral},
    {"get_forward", AP__motors___get_forward},
    {"get_throttle", AP__motors___get_throttle},
    {"get_yaw_ff", AP__motors___get_yaw_ff},
    {"get_yaw", AP__motors___get_yaw},
    {"get_pitch_ff", AP__motors___get_pitch_ff},
    {"get_pitch", AP__motors___get_pitch},
    {"get_roll_ff", AP__motors___get_roll_ff},
    {"get_roll", AP__motors___get_roll},
    {"get_desired_spool_state", AP__motors___get_desired_spool_state},
    {"get_interlock", AP__motors___get_interlock},
    {"set_frame_string", AP__motors___set_frame_string},
};

static int AP__motors___index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP__motors___meta,ARRAY_SIZE(AP__motors___meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if defined(HAL_BUILD_AP_PERIPH)
const luaL_Reg AP_Periph_FW_meta[] = {
    {"reboot", AP_Periph_FW_reboot},
    {"can_printf", AP_Periph_FW_can_printf},
    {"get_vehicle_state", AP_Periph_FW_get_vehicle_state},
    {"get_yaw_earth", AP_Periph_FW_get_yaw_earth},
};

static int AP_Periph_FW_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Periph_FW_meta,ARRAY_SIZE(AP_Periph_FW_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // defined(HAL_BUILD_AP_PERIPH)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
const luaL_Reg CAN_meta[] = {
    {"get_device2", lua_get_CAN_device2},
    {"get_device", lua_get_CAN_device},
};

static int CAN_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,CAN_meta,ARRAY_SIZE(CAN_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if AP_INERTIALSENSOR_ENABLED
const luaL_Reg AP_InertialSensor_meta[] = {
    {"gyros_consistent", AP_InertialSensor_gyros_consistent},
    {"get_accel", AP_InertialSensor_get_accel},
    {"get_gyro", AP_InertialSensor_get_gyro},
    {"calibrating", AP_InertialSensor_calibrating},
    {"get_accel_health", AP_InertialSensor_get_accel_health},
    {"accels_consistent", AP_InertialSensor_accels_consistent},
    {"get_gyro_health", AP_InertialSensor_get_gyro_health},
    {"get_temperature", AP_InertialSensor_get_temperature},
};

static int AP_InertialSensor_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_InertialSensor_meta,ARRAY_SIZE(AP_InertialSensor_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_INERTIALSENSOR_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
const luaL_Reg AP_MotorsMatrix_Scripting_Dynamic_meta[] = {
    {"load_factors", AP_MotorsMatrix_Scripting_Dynamic_load_factors},
    {"add_motor", AP_MotorsMatrix_Scripting_Dynamic_add_motor},
    {"init", AP_MotorsMatrix_Scripting_Dynamic_init},
};

static int AP_MotorsMatrix_Scripting_Dynamic_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_MotorsMatrix_Scripting_Dynamic_meta,ARRAY_SIZE(AP_MotorsMatrix_Scripting_Dynamic_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if !defined(HAL_DISABLE_ADC_DRIVER)
const luaL_Reg hal_analogin_meta[] = {
    {"channel", hal_analogin_channel},
};

static int hal_analogin_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,hal_analogin_meta,ARRAY_SIZE(hal_analogin_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

const luaL_Reg hal_gpio_meta[] = {
    {"pinMode", hal_gpio_pinMode},
    {"toggle", hal_gpio_toggle},
    {"write", hal_gpio_write},
    {"read", hal_gpio_read},
};

static int hal_gpio_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,hal_gpio_meta,ARRAY_SIZE(hal_gpio_meta),name)) {
        return 1;
    }
    return 0;
}

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
const luaL_Reg AP_MotorsMatrix_6DoF_Scripting_meta[] = {
    {"add_motor", AP_MotorsMatrix_6DoF_Scripting_add_motor},
    {"init", AP_MotorsMatrix_6DoF_Scripting_init},
};

static int AP_MotorsMatrix_6DoF_Scripting_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_MotorsMatrix_6DoF_Scripting_meta,ARRAY_SIZE(AP_MotorsMatrix_6DoF_Scripting_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
const luaL_Reg AC_AttitudeControl_Multi_6DoF_meta[] = {
    {"set_offset_roll_pitch", AC_AttitudeControl_Multi_6DoF_set_offset_roll_pitch},
    {"set_forward_enable", AC_AttitudeControl_Multi_6DoF_set_forward_enable},
    {"set_lateral_enable", AC_AttitudeControl_Multi_6DoF_set_lateral_enable},
};

static int AC_AttitudeControl_Multi_6DoF_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AC_AttitudeControl_Multi_6DoF_meta,ARRAY_SIZE(AC_AttitudeControl_Multi_6DoF_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)

#if AP_FRSKY_SPORT_TELEM_ENABLED
const luaL_Reg AP_Frsky_SPort_meta[] = {
    {"prep_number", AP_Frsky_SPort_prep_number},
    {"sport_telemetry_push", AP_Frsky_SPort_sport_telemetry_push},
};

static int AP_Frsky_SPort_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Frsky_SPort_meta,ARRAY_SIZE(AP_Frsky_SPort_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_FRSKY_SPORT_TELEM_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
const luaL_Reg AP_MotorsMatrix_meta[] = {
    {"get_thrust_boost", AP_MotorsMatrix_get_thrust_boost},
    {"get_lost_motor", AP_MotorsMatrix_get_lost_motor},
    {"set_throttle_factor", AP_MotorsMatrix_set_throttle_factor},
    {"add_motor_raw", AP_MotorsMatrix_add_motor_raw},
    {"init", AP_MotorsMatrix_init},
};

static int AP_MotorsMatrix_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_MotorsMatrix_meta,ARRAY_SIZE(AP_MotorsMatrix_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
const luaL_Reg Sub_meta[] = {
    {"set_rangefinder_target_cm", Sub_set_rangefinder_target_cm},
    {"get_rangefinder_target_cm", Sub_get_rangefinder_target_cm},
    {"rangefinder_alt_ok", Sub_rangefinder_alt_ok},
    {"is_button_pressed", Sub_is_button_pressed},
    {"get_and_clear_button_count", Sub_get_and_clear_button_count},
};

static int Sub_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Sub_meta,ARRAY_SIZE(Sub_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
const luaL_Reg QuadPlane_meta[] = {
    {"in_vtol_land_descent", QuadPlane_in_vtol_land_descent},
    {"abort_landing", QuadPlane_abort_landing},
    {"in_assisted_flight", QuadPlane_in_assisted_flight},
    {"in_vtol_mode", QuadPlane_in_vtol_mode},
};

static int QuadPlane_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,QuadPlane_meta,ARRAY_SIZE(QuadPlane_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED

#if AP_NOTIFY_SCRIPTING_LED_ENABLED
const luaL_Reg ScriptingLED_meta[] = {
    {"get_rgb", ScriptingLED_get_rgb},
};

static int ScriptingLED_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,ScriptingLED_meta,ARRAY_SIZE(ScriptingLED_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_NOTIFY_SCRIPTING_LED_ENABLED

#if HAL_BUTTON_ENABLED == 1
const luaL_Reg AP_Button_meta[] = {
    {"get_button_state", AP_Button_get_button_state},
};

static int AP_Button_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Button_meta,ARRAY_SIZE(AP_Button_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_BUTTON_ENABLED == 1

#if AP_RPM_ENABLED
const luaL_Reg AP_RPM_meta[] = {
    {"get_rpm", AP_RPM_get_rpm},
};

static int AP_RPM_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_RPM_meta,ARRAY_SIZE(AP_RPM_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_RPM_ENABLED

#if AP_MISSION_ENABLED
const luaL_Reg AP_Mission_meta[] = {
    {"jump_to_abort_landing_sequence", AP_Mission_jump_to_abort_landing_sequence},
    {"jump_to_landing_sequence", AP_Mission_jump_to_landing_sequence},
    {"get_last_jump_tag", AP_Mission_get_last_jump_tag},
    {"get_index_of_jump_tag", AP_Mission_get_index_of_jump_tag},
    {"jump_to_tag", AP_Mission_jump_to_tag},
    {"cmd_has_location", AP_Mission_cmd_has_location},
    {"clear", AP_Mission_clear},
    {"set_item", AP_Mission_set_item},
    {"get_item", AP_Mission_get_item},
    {"num_commands", AP_Mission_num_commands},
    {"get_current_do_cmd_id", AP_Mission_get_current_do_cmd_id},
    {"get_current_nav_id", AP_Mission_get_current_nav_id},
    {"get_prev_nav_cmd_id", AP_Mission_get_prev_nav_cmd_id},
    {"set_current_cmd", AP_Mission_set_current_cmd},
    {"get_current_nav_index", AP_Mission_get_current_nav_index},
    {"state", AP_Mission_state},
};

struct userdata_enum AP_Mission_enums[] = {
    {"MISSION_COMPLETE", AP_Mission::MISSION_COMPLETE},
    {"MISSION_RUNNING", AP_Mission::MISSION_RUNNING},
    {"MISSION_STOPPED", AP_Mission::MISSION_STOPPED},
};

static int AP_Mission_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Mission_meta,ARRAY_SIZE(AP_Mission_meta),name) || load_enum(L,AP_Mission_enums,ARRAY_SIZE(AP_Mission_enums),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_MISSION_ENABLED

const luaL_Reg AP_Scripting_meta[] = {
    {"restart_all", AP_Scripting_restart_all},
};

static int AP_Scripting_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Scripting_meta,ARRAY_SIZE(AP_Scripting_meta),name)) {
        return 1;
    }
    return 0;
}

const luaL_Reg AP_Param_meta[] = {
#if AP_PARAM_DYNAMIC_ENABLED
    {"add_param", AP_Param_add_param},
#endif // AP_PARAM_DYNAMIC_ENABLED
#if AP_PARAM_DYNAMIC_ENABLED
    {"add_table", AP_Param_add_table},
#endif // AP_PARAM_DYNAMIC_ENABLED
    {"set_default", AP_Param_set_default_by_name},
    {"set_and_save", AP_Param_set_and_save_by_name},
    {"set", AP_Param_set_by_name},
    {"get", AP_Param_get},
};

static int AP_Param_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Param_meta,ARRAY_SIZE(AP_Param_meta),name)) {
        return 1;
    }
    return 0;
}

#if HAL_WITH_ESC_TELEM == 1
const luaL_Reg AP_ESC_Telem_meta[] = {
    {"set_rpm_scale", AP_ESC_Telem_set_rpm_scale},
    {"update_telem_data", AP_ESC_Telem_update_telem_data},
    {"update_rpm", AP_ESC_Telem_update_rpm},
    {"get_usage_seconds", AP_ESC_Telem_get_usage_seconds},
    {"get_consumption_mah", AP_ESC_Telem_get_consumption_mah},
    {"get_voltage", AP_ESC_Telem_get_voltage},
    {"get_current", AP_ESC_Telem_get_current},
    {"get_motor_temperature", AP_ESC_Telem_get_motor_temperature},
    {"get_temperature", AP_ESC_Telem_get_temperature},
    {"get_rpm", AP_ESC_Telem_get_rpm},
};

static int AP_ESC_Telem_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_ESC_Telem_meta,ARRAY_SIZE(AP_ESC_Telem_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_WITH_ESC_TELEM == 1

#if AP_OPTICALFLOW_ENABLED
const luaL_Reg AP_OpticalFlow_meta[] = {
    {"quality", AP_OpticalFlow_quality},
    {"healthy", AP_OpticalFlow_healthy},
    {"enabled", AP_OpticalFlow_enabled},
};

static int AP_OpticalFlow_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_OpticalFlow_meta,ARRAY_SIZE(AP_OpticalFlow_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_OPTICALFLOW_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
const luaL_Reg AP_Baro_meta[] = {
    {"healthy", AP_Baro_healthy},
    {"get_altitude", AP_Baro_get_altitude},
    {"get_external_temperature", AP_Baro_get_external_temperature},
    {"get_temperature", AP_Baro_get_temperature},
    {"get_pressure", AP_Baro_get_pressure},
};

static int AP_Baro_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Baro_meta,ARRAY_SIZE(AP_Baro_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))

#if HAL_GCS_ENABLED
const luaL_Reg AP_SerialManager_meta[] = {
    {"find_serial", AP_SerialManager_find_serial},
};

static int AP_SerialManager_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_SerialManager_meta,ARRAY_SIZE(AP_SerialManager_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_GCS_ENABLED

#if AP_RC_CHANNEL_ENABLED
const luaL_Reg RC_Channels_meta[] = {
    {"get_aux_cached", RC_Channels_get_aux_cached},
    {"get_channel", RC_Channels_lua_rc_channel},
    {"has_valid_input", RC_Channels_has_valid_input},
    {"run_aux_function", RC_Channels_run_aux_function},
    {"find_channel_for_option", RC_Channels_find_channel_for_option},
    {"get_pwm", RC_Channels_get_pwm},
};

static int RC_Channels_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,RC_Channels_meta,ARRAY_SIZE(RC_Channels_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
const luaL_Reg SRV_Channels_meta[] = {
    {"get_emergency_stop", SRV_Channels_get_emergency_stop},
    {"set_range", SRV_Channels_set_range},
    {"set_angle", SRV_Channels_set_angle},
    {"set_output_norm", SRV_Channels_set_output_norm},
    {"get_output_scaled", SRV_Channels_get_output_scaled},
    {"get_output_pwm", SRV_Channels_get_output_pwm},
    {"set_output_scaled", SRV_Channels_set_output_scaled},
#if (!defined(HAL_BUILD_AP_PERIPH))
    {"set_output_pwm_chan_timeout", SRV_Channels_set_output_pwm_chan_timeout},
#endif // (!defined(HAL_BUILD_AP_PERIPH))
    {"set_output_pwm_chan", SRV_Channels_set_output_pwm_chan},
    {"set_output_pwm", SRV_Channels_set_output_pwm},
    {"find_channel", SRV_Channels_find_channel},
    {"get_safety_state", SRV_Channels_get_safety_state},
};

static int SRV_Channels_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,SRV_Channels_meta,ARRAY_SIZE(SRV_Channels_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))

#if AP_SERIALLED_ENABLED
const luaL_Reg AP_SerialLED_meta[] = {
    {"send", AP_SerialLED_send},
    {"set_RGB", AP_SerialLED_set_RGB},
    {"set_num_profiled", AP_SerialLED_set_num_profiled},
    {"set_num_neopixel_rgb", AP_SerialLED_set_num_neopixel_rgb},
    {"set_num_neopixel", AP_SerialLED_set_num_neopixel},
};

static int AP_SerialLED_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_SerialLED_meta,ARRAY_SIZE(AP_SerialLED_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_SERIALLED_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH))
const luaL_Reg AP_Vehicle_meta[] = {
    {"is_taking_off", AP_Vehicle_is_taking_off},
    {"is_landing", AP_Vehicle_is_landing},
    {"reboot", AP_Vehicle_reboot},
    {"has_ekf_failsafed", AP_Vehicle_has_ekf_failsafed},
    {"set_land_descent_rate", AP_Vehicle_set_land_descent_rate},
    {"set_velocity_match", AP_Vehicle_set_velocity_match},
    {"nav_scripting_enable", AP_Vehicle_nav_scripting_enable},
    {"set_desired_speed", AP_Vehicle_set_desired_speed},
    {"set_desired_turn_rate_and_speed", AP_Vehicle_set_desired_turn_rate_and_speed},
    {"set_rudder_offset", AP_Vehicle_set_rudder_offset},
    {"set_target_throttle_rate_rpy", AP_Vehicle_set_target_throttle_rate_rpy},
    {"nav_script_time_done", AP_Vehicle_nav_script_time_done},
    {"nav_script_time", AP_Vehicle_nav_script_time},
    {"get_pan_tilt_norm", AP_Vehicle_get_pan_tilt_norm},
    {"get_wp_crosstrack_error_m", AP_Vehicle_get_wp_crosstrack_error_m},
    {"get_wp_bearing_deg", AP_Vehicle_get_wp_bearing_deg},
    {"get_wp_distance_m", AP_Vehicle_get_wp_distance_m},
    {"get_steering_and_throttle", AP_Vehicle_get_steering_and_throttle},
    {"set_steering_and_throttle", AP_Vehicle_set_steering_and_throttle},
    {"set_circle_rate", AP_Vehicle_set_circle_rate},
    {"get_circle_radius", AP_Vehicle_get_circle_radius},
    {"set_target_angle_and_climbrate", AP_Vehicle_set_target_angle_and_climbrate},
    {"set_target_velocity_NED", AP_Vehicle_set_target_velocity_NED},
    {"set_target_velaccel_NED", AP_Vehicle_set_target_velaccel_NED},
    {"set_target_posvelaccel_NED", AP_Vehicle_set_target_posvelaccel_NED},
    {"set_target_posvel_NED", AP_Vehicle_set_target_posvel_NED},
    {"set_target_pos_NED", AP_Vehicle_set_target_pos_NED},
    {"update_target_location", AP_Vehicle_update_target_location},
    {"get_target_location", AP_Vehicle_get_target_location},
    {"set_target_location", AP_Vehicle_set_target_location},
    {"start_takeoff", AP_Vehicle_start_takeoff},
    {"get_control_output", AP_Vehicle_get_control_output},
    {"get_time_flying_ms", AP_Vehicle_get_time_flying_ms},
    {"get_likely_flying", AP_Vehicle_get_likely_flying},
    {"get_control_mode_reason", AP_Vehicle_get_control_mode_reason},
    {"get_mode", AP_Vehicle_get_mode},
    {"set_mode", AP_Vehicle_set_mode},
};

static int AP_Vehicle_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Vehicle_meta,ARRAY_SIZE(AP_Vehicle_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH))

#if ENABLE_ONVIF == 1
const luaL_Reg AP_ONVIF_meta[] = {
    {"get_pan_tilt_limit_max", AP_ONVIF_get_pan_tilt_limit_max},
    {"get_pan_tilt_limit_min", AP_ONVIF_get_pan_tilt_limit_min},
    {"set_absolutemove", AP_ONVIF_set_absolutemove},
    {"start", AP_ONVIF_start},
};

static int AP_ONVIF_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_ONVIF_meta,ARRAY_SIZE(AP_ONVIF_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // ENABLE_ONVIF == 1

#if HAL_GCS_ENABLED
const luaL_Reg GCS_meta[] = {
#if HAL_HIGH_LATENCY2_ENABLED == 1
    {"enable_high_latency_connections", GCS_enable_high_latency_connections},
#endif // HAL_HIGH_LATENCY2_ENABLED == 1
#if HAL_HIGH_LATENCY2_ENABLED == 1
    {"get_high_latency_status", GCS_get_high_latency_status},
#endif // HAL_HIGH_LATENCY2_ENABLED == 1
    {"last_seen", GCS_sysid_myggcs_last_seen_time_ms},
    {"get_hud_throttle", GCS_get_hud_throttle},
    {"frame_type", GCS_frame_type},
    {"send_named_float", GCS_send_named_float},
    {"set_message_interval", GCS_set_message_interval},
    {"send_text", GCS_send_text},
};

static int GCS_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,GCS_meta,ARRAY_SIZE(GCS_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_GCS_ENABLED

#if AP_RELAY_ENABLED
const luaL_Reg AP_Relay_meta[] = {
    {"get", AP_Relay_get},
    {"toggle", AP_Relay_toggle},
    {"enabled", AP_Relay_enabled},
    {"off", AP_Relay_off},
    {"on", AP_Relay_on},
};

static int AP_Relay_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Relay_meta,ARRAY_SIZE(AP_Relay_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_RELAY_ENABLED

#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
const luaL_Reg AP_Terrain_meta[] = {
    {"height_above_terrain", AP_Terrain_height_above_terrain},
    {"height_terrain_difference_home", AP_Terrain_height_terrain_difference_home},
    {"height_amsl", AP_Terrain_height_amsl},
    {"status", AP_Terrain_status},
    {"enabled", AP_Terrain_enabled},
};

struct userdata_enum AP_Terrain_enums[] = {
    {"TerrainStatusOK", AP_Terrain::TerrainStatusOK},
    {"TerrainStatusUnhealthy", AP_Terrain::TerrainStatusUnhealthy},
    {"TerrainStatusDisabled", AP_Terrain::TerrainStatusDisabled},
};

static int AP_Terrain_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Terrain_meta,ARRAY_SIZE(AP_Terrain_meta),name) || load_enum(L,AP_Terrain_enums,ARRAY_SIZE(AP_Terrain_enums),name)) {
        return 1;
    }
    return 0;
}
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
const luaL_Reg RangeFinder_meta[] = {
    {"get_backend", RangeFinder_get_backend},
    {"get_pos_offset_orient", RangeFinder_get_pos_offset_orient},
    {"has_data_orient", RangeFinder_has_data_orient},
    {"status_orient", RangeFinder_status_orient},
    {"ground_clearance_cm_orient", RangeFinder_ground_clearance_cm_orient},
    {"min_distance_cm_orient", RangeFinder_min_distance_cm_orient},
    {"max_distance_cm_orient", RangeFinder_max_distance_cm_orient},
    {"signal_quality_pct_orient", RangeFinder_signal_quality_pct_orient},
    {"distance_cm_orient", RangeFinder_distance_cm_orient},
    {"has_orientation", RangeFinder_has_orientation},
    {"num_sensors", RangeFinder_num_sensors},
};

static int RangeFinder_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,RangeFinder_meta,ARRAY_SIZE(RangeFinder_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
const luaL_Reg AP_Proximity_meta[] = {
    {"get_backend", AP_Proximity_get_backend},
    {"get_object_angle_and_distance", AP_Proximity_get_object_angle_and_distance},
    {"get_closest_object", AP_Proximity_get_closest_object},
    {"get_object_count", AP_Proximity_get_object_count},
    {"num_sensors", AP_Proximity_num_sensors},
    {"get_status", AP_Proximity_get_status},
};

static int AP_Proximity_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Proximity_meta,ARRAY_SIZE(AP_Proximity_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
const luaL_Reg AP_Notify_meta[] = {
    {"release_text", AP_Notify_release_text_scripting},
    {"send_text", AP_Notify_send_text_scripting},
    {"handle_rgb_id", AP_Notify_handle_rgb_id},
    {"handle_rgb", AP_Notify_handle_rgb},
    {"play_tune", AP_Notify_play_tune},
};

static int AP_Notify_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Notify_meta,ARRAY_SIZE(AP_Notify_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))

#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
const luaL_Reg AP_GPS_meta[] = {
    {"gps_yaw_deg", AP_GPS_gps_yaw_deg},
    {"first_unconfigured_gps", AP_GPS_first_unconfigured_gps},
    {"get_antenna_offset", AP_GPS_get_antenna_offset},
    {"have_vertical_velocity", AP_GPS_have_vertical_velocity},
    {"last_message_time_ms", AP_GPS_last_message_time_ms},
    {"last_fix_time_ms", AP_GPS_last_fix_time_ms},
    {"get_vdop", AP_GPS_get_vdop},
    {"get_hdop", AP_GPS_get_hdop},
    {"time_week_ms", AP_GPS_time_week_ms},
    {"time_week", AP_GPS_time_week},
    {"num_sats", AP_GPS_num_sats},
    {"ground_course", AP_GPS_ground_course},
    {"ground_speed", AP_GPS_ground_speed},
    {"velocity", AP_GPS_velocity},
    {"vertical_accuracy", AP_GPS_vertical_accuracy},
    {"horizontal_accuracy", AP_GPS_horizontal_accuracy},
    {"speed_accuracy", AP_GPS_speed_accuracy},
    {"location", AP_GPS_location},
    {"status", AP_GPS_status},
    {"primary_sensor", AP_GPS_primary_sensor},
    {"num_sensors", AP_GPS_num_sensors},
};

struct userdata_enum AP_GPS_enums[] = {
    {"GPS_OK_FIX_3D_RTK_FIXED", AP_GPS::GPS_OK_FIX_3D_RTK_FIXED},
    {"GPS_OK_FIX_3D_RTK_FLOAT", AP_GPS::GPS_OK_FIX_3D_RTK_FLOAT},
    {"GPS_OK_FIX_3D_DGPS", AP_GPS::GPS_OK_FIX_3D_DGPS},
    {"GPS_OK_FIX_3D", AP_GPS::GPS_OK_FIX_3D},
    {"GPS_OK_FIX_2D", AP_GPS::GPS_OK_FIX_2D},
    {"NO_FIX", AP_GPS::NO_FIX},
    {"NO_GPS", AP_GPS::NO_GPS},
};

static int AP_GPS_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_GPS_meta,ARRAY_SIZE(AP_GPS_meta),name) || load_enum(L,AP_GPS_enums,ARRAY_SIZE(AP_GPS_enums),name)) {
        return 1;
    }
    return 0;
}
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))

#if AP_BATTERY_ENABLED
const luaL_Reg AP_BattMonitor_meta[] = {
#if AP_BATTERY_SCRIPTING_ENABLED
    {"handle_scripting", AP_BattMonitor_handle_scripting},
#endif // AP_BATTERY_SCRIPTING_ENABLED
    {"get_cell_voltage", AP_BattMonitor_get_cell_voltage},
    {"reset_remaining", AP_BattMonitor_reset_remaining},
    {"get_cycle_count", AP_BattMonitor_get_cycle_count},
    {"get_temperature", AP_BattMonitor_get_temperature},
    {"overpower_detected", AP_BattMonitor_overpower_detected},
    {"has_failsafed", AP_BattMonitor_has_failsafed},
    {"pack_capacity_mah", AP_BattMonitor_pack_capacity_mah},
    {"capacity_remaining_pct", AP_BattMonitor_capacity_remaining_pct},
    {"consumed_wh", AP_BattMonitor_consumed_wh},
    {"consumed_mah", AP_BattMonitor_consumed_mah},
    {"current_amps", AP_BattMonitor_current_amps},
    {"voltage_resting_estimate", AP_BattMonitor_voltage_resting_estimate},
    {"voltage", AP_BattMonitor_voltage},
    {"healthy", AP_BattMonitor_healthy},
    {"num_instances", AP_BattMonitor_num_instances},
};

static int AP_BattMonitor_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_BattMonitor_meta,ARRAY_SIZE(AP_BattMonitor_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_ENABLED

#if AP_ARMING_ENABLED
const luaL_Reg AP_Arming_meta[] = {
    {"set_aux_auth_failed", AP_Arming_set_aux_auth_failed},
    {"set_aux_auth_passed", AP_Arming_set_aux_auth_passed},
    {"get_aux_auth_id", AP_Arming_get_aux_auth_id},
    {"arm", AP_Arming_arm},
    {"pre_arm_checks", AP_Arming_pre_arm_checks},
    {"is_armed", AP_Arming_is_armed},
    {"disarm", AP_Arming_disarm},
};

static int AP_Arming_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Arming_meta,ARRAY_SIZE(AP_Arming_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_ARMING_ENABLED

#if AP_AHRS_ENABLED
const luaL_Reg AP_AHRS_meta[] = {
    {"get_quaternion", AP_AHRS_get_quaternion},
    {"get_posvelyaw_source_set", AP_AHRS_get_posvelyaw_source_set},
    {"initialised", AP_AHRS_initialised},
    {"set_origin", AP_AHRS_set_origin},
    {"get_origin", AP_AHRS_get_origin},
    {"set_home", AP_AHRS_set_home},
    {"get_vel_innovations_and_variances_for_source", AP_AHRS_get_vel_innovations_and_variances_for_source},
    {"set_posvelyaw_source_set", AP_AHRS_set_posvelyaw_source_set},
    {"get_variances", AP_AHRS_get_variances},
    {"get_EAS2TAS", AP_AHRS_get_EAS2TAS},
    {"body_to_earth", AP_AHRS_body_to_earth},
    {"earth_to_body", AP_AHRS_earth_to_body},
    {"get_vibration", AP_AHRS_get_vibration},
    {"airspeed_estimate", AP_AHRS_airspeed_estimate},
    {"healthy", AP_AHRS_healthy},
    {"home_is_set", AP_AHRS_home_is_set},
    {"get_relative_position_D_home", AP_AHRS_get_relative_position_D_home},
    {"get_relative_position_NED_origin", AP_AHRS_get_relative_position_NED_origin},
    {"get_relative_position_NED_home", AP_AHRS_get_relative_position_NED_home},
    {"get_velocity_NED", AP_AHRS_get_velocity_NED},
    {"groundspeed_vector", AP_AHRS_groundspeed_vector},
    {"head_wind", AP_AHRS_head_wind},
    {"wind_alignment", AP_AHRS_wind_alignment},
    {"wind_estimate", AP_AHRS_wind_estimate},
    {"get_hagl", AP_AHRS_get_hagl},
    {"get_accel", AP_AHRS_get_accel},
    {"get_gyro", AP_AHRS_get_gyro},
    {"get_home", AP_AHRS_get_home},
    {"get_location", AP_AHRS_get_location},
    {"get_yaw", AP_AHRS_get_yaw},
    {"get_pitch", AP_AHRS_get_pitch},
    {"get_roll", AP_AHRS_get_roll},
    {"get_position", AP_AHRS_get_location},
};

static int AP_AHRS_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_AHRS_meta,ARRAY_SIZE(AP_AHRS_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_FILESYSTEM_FILE_READING_ENABLED
static int AP_Filesystem__stat_t_ctime(lua_State *L) {
    AP_Filesystem::stat_t *ud = check_AP_Filesystem__stat_t(L, 1);
    binding_argcheck(L, 1);
    new_uint32_t(L);
    *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->ctime;
    return 1;
}

static int AP_Filesystem__stat_t_atime(lua_State *L) {
    AP_Filesystem::stat_t *ud = check_AP_Filesystem__stat_t(L, 1);
    binding_argcheck(L, 1);
    new_uint32_t(L);
    *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->atime;
    return 1;
}

static int AP_Filesystem__stat_t_mtime(lua_State *L) {
    AP_Filesystem::stat_t *ud = check_AP_Filesystem__stat_t(L, 1);
    binding_argcheck(L, 1);
    new_uint32_t(L);
    *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->mtime;
    return 1;
}

static int AP_Filesystem__stat_t_mode(lua_State *L) {
    AP_Filesystem::stat_t *ud = check_AP_Filesystem__stat_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushinteger(L, ud->mode);
    return 1;
}

static int AP_Filesystem__stat_t_size(lua_State *L) {
    AP_Filesystem::stat_t *ud = check_AP_Filesystem__stat_t(L, 1);
    binding_argcheck(L, 1);
    new_uint32_t(L);
    *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->size;
    return 1;
}

#endif // AP_FILESYSTEM_FILE_READING_ENABLED
#if (AP_EFI_SCRIPTING_ENABLED == 1)
static int EFI_State_pt_compensation(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->pt_compensation);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->pt_compensation = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_throttle_out(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->throttle_out);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->throttle_out = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_ignition_voltage(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->ignition_voltage);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->ignition_voltage = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_cylinder_status(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            new_Cylinder_Status(L);
            *check_Cylinder_Status(L, -1) = ud->cylinder_status;
            return 1;
        case 2: {
            Cylinder_Status & data_2 = *check_Cylinder_Status(L, 2);
            ud->cylinder_status = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_ecu_index(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->ecu_index);
            return 1;
        case 2: {
            const uint8_t raw_data_2 = get_uint8_t(L, 2);
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->ecu_index = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_throttle_position_percent(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->throttle_position_percent);
            return 1;
        case 2: {
            const uint8_t raw_data_2 = get_uint8_t(L, 2);
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->throttle_position_percent = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_estimated_consumed_fuel_volume_cm3(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->estimated_consumed_fuel_volume_cm3);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->estimated_consumed_fuel_volume_cm3 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_fuel_consumption_rate_cm3pm(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->fuel_consumption_rate_cm3pm);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->fuel_consumption_rate_cm3pm = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_fuel_pressure_status(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, static_cast<int32_t>(ud->fuel_pressure_status));
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(Fuel_Pressure_Status::NOT_SUPPORTED), static_cast<int32_t>(Fuel_Pressure_Status::ABOVE_NOMINAL));
            const Fuel_Pressure_Status data_2 = static_cast<Fuel_Pressure_Status>(raw_data_2);
            ud->fuel_pressure_status = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_fuel_pressure(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->fuel_pressure);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->fuel_pressure = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_oil_temperature(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->oil_temperature);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->oil_temperature = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_oil_pressure(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->oil_pressure);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->oil_pressure = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_coolant_temperature(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->coolant_temperature);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->coolant_temperature = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_intake_manifold_temperature(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->intake_manifold_temperature);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->intake_manifold_temperature = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_intake_manifold_pressure_kpa(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->intake_manifold_pressure_kpa);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->intake_manifold_pressure_kpa = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_atmospheric_pressure_kpa(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->atmospheric_pressure_kpa);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->atmospheric_pressure_kpa = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_spark_dwell_time_ms(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->spark_dwell_time_ms);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->spark_dwell_time_ms = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_engine_speed_rpm(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            new_uint32_t(L);
            *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->engine_speed_rpm;
            return 1;
        case 2: {
            const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
            const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
            ud->engine_speed_rpm = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_engine_load_percent(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->engine_load_percent);
            return 1;
        case 2: {
            const uint8_t raw_data_2 = get_uint8_t(L, 2);
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->engine_load_percent = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_general_error(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->general_error);
            return 1;
        case 2: {
            const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
            ud->general_error = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int EFI_State_last_updated_ms(lua_State *L) {
    EFI_State *ud = check_EFI_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            new_uint32_t(L);
            *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->last_updated_ms;
            return 1;
        case 2: {
            const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
            const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
            ud->last_updated_ms = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if (AP_EFI_SCRIPTING_ENABLED == 1)
static int Cylinder_Status_lambda_coefficient(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->lambda_coefficient);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->lambda_coefficient = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Cylinder_Status_exhaust_gas_temperature2(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->exhaust_gas_temperature2);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->exhaust_gas_temperature2 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Cylinder_Status_exhaust_gas_temperature(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->exhaust_gas_temperature);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->exhaust_gas_temperature = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Cylinder_Status_cylinder_head_temperature2(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->cylinder_head_temperature2);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->cylinder_head_temperature2 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Cylinder_Status_cylinder_head_temperature(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->cylinder_head_temperature);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->cylinder_head_temperature = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Cylinder_Status_injection_time_ms(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->injection_time_ms);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->injection_time_ms = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Cylinder_Status_ignition_timing_deg(lua_State *L) {
    Cylinder_Status *ud = check_Cylinder_Status(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->ignition_timing_deg);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->ignition_timing_deg = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
static int AP_Camera__camera_state_t_tracking_p2(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    new_Vector2f(L);
    *check_Vector2f(L, -1) = ud->tracking_p2;
    return 1;
}

static int AP_Camera__camera_state_t_tracking_p1(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    new_Vector2f(L);
    *check_Vector2f(L, -1) = ud->tracking_p1;
    return 1;
}

static int AP_Camera__camera_state_t_tracking_type(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushinteger(L, ud->tracking_type);
    return 1;
}

static int AP_Camera__camera_state_t_focus_value(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushnumber(L, ud->focus_value);
    return 1;
}

static int AP_Camera__camera_state_t_focus_type(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushinteger(L, ud->focus_type);
    return 1;
}

static int AP_Camera__camera_state_t_zoom_value(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushnumber(L, ud->zoom_value);
    return 1;
}

static int AP_Camera__camera_state_t_zoom_type(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushinteger(L, ud->zoom_type);
    return 1;
}

static int AP_Camera__camera_state_t_recording_video(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushinteger(L, ud->recording_video);
    return 1;
}

static int AP_Camera__camera_state_t_take_pic_incr(lua_State *L) {
    AP_Camera::camera_state_t *ud = check_AP_Camera__camera_state_t(L, 1);
    binding_argcheck(L, 1);
    lua_pushinteger(L, ud->take_pic_incr);
    return 1;
}

#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int AP_HAL__CANFrame_dlc(lua_State *L) {
    AP_HAL::CANFrame *ud = check_AP_HAL__CANFrame(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->dlc);
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(int(ARRAY_SIZE(ud->data)), UINT8_MAX));
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->dlc = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int AP_HAL__CANFrame_data(lua_State *L) {
    AP_HAL::CANFrame *ud = check_AP_HAL__CANFrame(L, 1);

    const lua_Integer raw_index = get_integer(L, 2, 0, MIN(int(ARRAY_SIZE(ud->data))-1, UINT8_MAX));
    const uint8_t index = static_cast<uint8_t>(raw_index);

    switch(lua_gettop(L)-1) {
        case 1:
            lua_pushinteger(L, ud->data[index]);
            return 1;
        case 2: {
            const uint8_t raw_data_3 = get_uint8_t(L, 3);
            const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
            ud->data[index] = data_3;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int AP_HAL__CANFrame_id(lua_State *L) {
    AP_HAL::CANFrame *ud = check_AP_HAL__CANFrame(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            new_uint32_t(L);
            *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->id;
            return 1;
        case 2: {
            const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
            const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
            ud->id = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
static int AP_MotorsMatrix_Scripting_Dynamic__factor_table_throttle(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic::factor_table *ud = check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(L, 1);

    const lua_Integer raw_index = get_integer(L, 2, 0, MIN(AP_MOTORS_MAX_NUM_MOTORS-1, UINT8_MAX));
    const uint8_t index = static_cast<uint8_t>(raw_index);

    switch(lua_gettop(L)-1) {
        case 1:
            lua_pushnumber(L, ud->throttle[index]);
            return 1;
        case 2: {
            const float raw_data_3 = luaL_checknumber(L, 3);
            const float data_3 = raw_data_3;
            ud->throttle[index] = data_3;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int AP_MotorsMatrix_Scripting_Dynamic__factor_table_yaw(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic::factor_table *ud = check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(L, 1);

    const lua_Integer raw_index = get_integer(L, 2, 0, MIN(AP_MOTORS_MAX_NUM_MOTORS-1, UINT8_MAX));
    const uint8_t index = static_cast<uint8_t>(raw_index);

    switch(lua_gettop(L)-1) {
        case 1:
            lua_pushnumber(L, ud->yaw[index]);
            return 1;
        case 2: {
            const float raw_data_3 = luaL_checknumber(L, 3);
            const float data_3 = raw_data_3;
            ud->yaw[index] = data_3;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int AP_MotorsMatrix_Scripting_Dynamic__factor_table_pitch(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic::factor_table *ud = check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(L, 1);

    const lua_Integer raw_index = get_integer(L, 2, 0, MIN(AP_MOTORS_MAX_NUM_MOTORS-1, UINT8_MAX));
    const uint8_t index = static_cast<uint8_t>(raw_index);

    switch(lua_gettop(L)-1) {
        case 1:
            lua_pushnumber(L, ud->pitch[index]);
            return 1;
        case 2: {
            const float raw_data_3 = luaL_checknumber(L, 3);
            const float data_3 = raw_data_3;
            ud->pitch[index] = data_3;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int AP_MotorsMatrix_Scripting_Dynamic__factor_table_roll(lua_State *L) {
    AP_MotorsMatrix_Scripting_Dynamic::factor_table *ud = check_AP_MotorsMatrix_Scripting_Dynamic__factor_table(L, 1);

    const lua_Integer raw_index = get_integer(L, 2, 0, MIN(AP_MOTORS_MAX_NUM_MOTORS-1, UINT8_MAX));
    const uint8_t index = static_cast<uint8_t>(raw_index);

    switch(lua_gettop(L)-1) {
        case 1:
            lua_pushnumber(L, ud->roll[index]);
            return 1;
        case 2: {
            const float raw_data_3 = luaL_checknumber(L, 3);
            const float data_3 = raw_data_3;
            ud->roll[index] = data_3;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if AP_MISSION_ENABLED
static int mavlink_mission_item_int_t_current(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->current);
            return 1;
        case 2: {
            const uint8_t raw_data_2 = get_uint8_t(L, 2);
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->current = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_frame(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->frame);
            return 1;
        case 2: {
            const uint8_t raw_data_2 = get_uint8_t(L, 2);
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->frame = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_command(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->command);
            return 1;
        case 2: {
            const uint16_t raw_data_2 = get_uint16_t(L, 2);
            const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
            ud->command = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_seq(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->seq);
            return 1;
        case 2: {
            const uint16_t raw_data_2 = get_uint16_t(L, 2);
            const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
            ud->seq = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_z(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->z);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->z = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_y(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->y);
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = luaL_checkinteger(L, 2);
            const int32_t data_2 = raw_data_2;
            ud->y = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_x(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->x);
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = luaL_checkinteger(L, 2);
            const int32_t data_2 = raw_data_2;
            ud->x = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_param4(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->param4);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->param4 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_param3(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->param3);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->param3 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_param2(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->param2);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->param2 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int mavlink_mission_item_int_t_param1(lua_State *L) {
    mavlink_mission_item_int_t *ud = check_mavlink_mission_item_int_t(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->param1);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->param1 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // AP_MISSION_ENABLED
#if (HAL_WITH_ESC_TELEM == 1)
static int AP_ESC_Telem_Backend__TelemetryData_motor_temp_cdeg(lua_State *L) {
    AP_ESC_Telem_Backend::TelemetryData *ud = check_AP_ESC_Telem_Backend__TelemetryData(L, 1);
    binding_argcheck(L, 2);
    const int16_t raw_data_2 = get_int16_t(L, 2);
    const int16_t data_2 = static_cast<int16_t>(raw_data_2);
    ud->motor_temp_cdeg = data_2;
    return 0;
}

static int AP_ESC_Telem_Backend__TelemetryData_consumption_mah(lua_State *L) {
    AP_ESC_Telem_Backend::TelemetryData *ud = check_AP_ESC_Telem_Backend__TelemetryData(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->consumption_mah = data_2;
    return 0;
}

static int AP_ESC_Telem_Backend__TelemetryData_current(lua_State *L) {
    AP_ESC_Telem_Backend::TelemetryData *ud = check_AP_ESC_Telem_Backend__TelemetryData(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->current = data_2;
    return 0;
}

static int AP_ESC_Telem_Backend__TelemetryData_voltage(lua_State *L) {
    AP_ESC_Telem_Backend::TelemetryData *ud = check_AP_ESC_Telem_Backend__TelemetryData(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->voltage = data_2;
    return 0;
}

static int AP_ESC_Telem_Backend__TelemetryData_temperature_cdeg(lua_State *L) {
    AP_ESC_Telem_Backend::TelemetryData *ud = check_AP_ESC_Telem_Backend__TelemetryData(L, 1);
    binding_argcheck(L, 2);
    const int16_t raw_data_2 = get_int16_t(L, 2);
    const int16_t data_2 = static_cast<int16_t>(raw_data_2);
    ud->temperature_cdeg = data_2;
    return 0;
}

#endif // (HAL_WITH_ESC_TELEM == 1)
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int RangeFinder__RangeFinder_State_voltage_mv(lua_State *L) {
    RangeFinder::RangeFinder_State *ud = check_RangeFinder__RangeFinder_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->voltage_mv);
            return 1;
        case 2: {
            const uint16_t raw_data_2 = get_uint16_t(L, 2);
            const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
            ud->voltage_mv = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int RangeFinder__RangeFinder_State_signal_quality_pct(lua_State *L) {
    RangeFinder::RangeFinder_State *ud = check_RangeFinder__RangeFinder_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->signal_quality_pct);
            return 1;
        case 2: {
            const int8_t raw_data_2 = get_int8_t(L, 2);
            const int8_t data_2 = static_cast<int8_t>(raw_data_2);
            ud->signal_quality_pct = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int RangeFinder__RangeFinder_State_distance_m(lua_State *L) {
    RangeFinder::RangeFinder_State *ud = check_RangeFinder__RangeFinder_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->distance_m);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->distance_m = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int RangeFinder__RangeFinder_State_range_valid_count(lua_State *L) {
    RangeFinder::RangeFinder_State *ud = check_RangeFinder__RangeFinder_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->range_valid_count);
            return 1;
        case 2: {
            const uint8_t raw_data_2 = get_uint8_t(L, 2);
            const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
            ud->range_valid_count = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int RangeFinder__RangeFinder_State_status(lua_State *L) {
    RangeFinder::RangeFinder_State *ud = check_RangeFinder__RangeFinder_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, static_cast<int32_t>(ud->status));
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(RangeFinder::Status::NotConnected), static_cast<int32_t>(RangeFinder::Status::Good));
            const RangeFinder::Status data_2 = static_cast<RangeFinder::Status>(raw_data_2);
            ud->status = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int RangeFinder__RangeFinder_State_last_reading_ms(lua_State *L) {
    RangeFinder::RangeFinder_State *ud = check_RangeFinder__RangeFinder_State(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            new_uint32_t(L);
            *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = ud->last_reading_ms;
            return 1;
        case 2: {
            const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
            const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
            ud->last_reading_ms = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if AP_AHRS_ENABLED
static int Quaternion_q4(lua_State *L) {
    Quaternion *ud = check_Quaternion(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->q4);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->q4 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Quaternion_q3(lua_State *L) {
    Quaternion *ud = check_Quaternion(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->q3);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->q3 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Quaternion_q2(lua_State *L) {
    Quaternion *ud = check_Quaternion(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->q2);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->q2 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Quaternion_q1(lua_State *L) {
    Quaternion *ud = check_Quaternion(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->q1);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->q1 = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#endif // AP_AHRS_ENABLED
static int Vector2f_y(lua_State *L) {
    Vector2f *ud = check_Vector2f(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->y);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->y = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Vector2f_x(lua_State *L) {
    Vector2f *ud = check_Vector2f(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->x);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->x = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Vector3f_z(lua_State *L) {
    Vector3f *ud = check_Vector3f(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->z);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->z = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Vector3f_y(lua_State *L) {
    Vector3f *ud = check_Vector3f(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->y);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->y = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Vector3f_x(lua_State *L) {
    Vector3f *ud = check_Vector3f(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushnumber(L, ud->x);
            return 1;
        case 2: {
            const float raw_data_2 = luaL_checknumber(L, 2);
            const float data_2 = raw_data_2;
            ud->x = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#if AP_BATTERY_SCRIPTING_ENABLED
static int BattMonitorScript_State_temperature(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->temperature = data_2;
    return 0;
}

static int BattMonitorScript_State_consumed_wh(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->consumed_wh = data_2;
    return 0;
}

static int BattMonitorScript_State_consumed_mah(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->consumed_mah = data_2;
    return 0;
}

static int BattMonitorScript_State_current_amps(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->current_amps = data_2;
    return 0;
}

static int BattMonitorScript_State_cycle_count(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
    ud->cycle_count = data_2;
    return 0;
}

static int BattMonitorScript_State_cell_voltages(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 3);

    const lua_Integer raw_index = get_integer(L, 2, 0, MIN(int(ARRAY_SIZE(ud->cell_voltages))-1, UINT8_MAX));
    const uint8_t index = static_cast<uint8_t>(raw_index);

    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    ud->cell_voltages[index] = data_3;
    return 0;
}

static int BattMonitorScript_State_capacity_remaining_pct(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->capacity_remaining_pct = data_2;
    return 0;
}

static int BattMonitorScript_State_cell_count(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->cell_count = data_2;
    return 0;
}

static int BattMonitorScript_State_voltage(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->voltage = data_2;
    return 0;
}

static int BattMonitorScript_State_healthy(lua_State *L) {
    BattMonitorScript_State *ud = check_BattMonitorScript_State(L, 1);
    binding_argcheck(L, 2);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    ud->healthy = data_2;
    return 0;
}

#endif // AP_BATTERY_SCRIPTING_ENABLED
static int Location_loiter_xtrack(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->loiter_xtrack);
            return 1;
        case 2: {
            const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
            ud->loiter_xtrack = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Location_origin_alt(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->origin_alt);
            return 1;
        case 2: {
            const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
            ud->origin_alt = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Location_terrain_alt(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->terrain_alt);
            return 1;
        case 2: {
            const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
            ud->terrain_alt = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Location_relative_alt(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->relative_alt);
            return 1;
        case 2: {
            const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
            ud->relative_alt = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Location_alt(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->alt);
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = get_integer(L, 2, MAX((-LOCATION_ALT_MAX_M*100+1), INT32_MIN), MIN((LOCATION_ALT_MAX_M*100-1), INT32_MAX));
            const int32_t data_2 = raw_data_2;
            ud->alt = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Location_lng(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->lng);
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = get_integer(L, 2, MAX(-1800000000, INT32_MIN), MIN(1800000000, INT32_MAX));
            const int32_t data_2 = raw_data_2;
            ud->lng = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

static int Location_lat(lua_State *L) {
    Location *ud = check_Location(L, 1);
    switch(lua_gettop(L)) {
        case 1:
            lua_pushinteger(L, ud->lat);
            return 1;
        case 2: {
            const lua_Integer raw_data_2 = get_integer(L, 2, MAX(-900000000, INT32_MIN), MIN(900000000, INT32_MAX));
            const int32_t data_2 = raw_data_2;
            ud->lat = data_2;
            return 0;
         }
        default:
            return luaL_argerror(L, lua_gettop(L), "too many arguments");
    }
}

#if AP_FILESYSTEM_FILE_READING_ENABLED
static int AP_Filesystem__stat_t_is_directory(lua_State *L) {
    binding_argcheck(L, 1);
    AP_Filesystem::stat_t * ud = check_AP_Filesystem__stat_t(L, 1);
    const bool data = static_cast<bool>(ud->is_directory());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_FILESYSTEM_FILE_READING_ENABLED

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int AP_HAL__CANFrame_isErrorFrame(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::CANFrame * ud = check_AP_HAL__CANFrame(L, 1);
    const bool data = static_cast<bool>(ud->isErrorFrame());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int AP_HAL__CANFrame_isRemoteTransmissionRequest(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::CANFrame * ud = check_AP_HAL__CANFrame(L, 1);
    const bool data = static_cast<bool>(ud->isRemoteTransmissionRequest());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int AP_HAL__CANFrame_isExtended(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::CANFrame * ud = check_AP_HAL__CANFrame(L, 1);
    const bool data = static_cast<bool>(ud->isExtended());

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int AP_HAL__CANFrame_id_signed(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::CANFrame * ud = check_AP_HAL__CANFrame(L, 1);
    const int32_t data = static_cast<int32_t>(ud->id_signed());

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

static int Parameter_set_default(lua_State *L) {
    binding_argcheck(L, 2);
    Parameter * ud = check_Parameter(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const bool data = static_cast<bool>(ud->set_default(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}

static int Parameter_configured(lua_State *L) {
    binding_argcheck(L, 1);
    Parameter * ud = check_Parameter(L, 1);
    const bool data = static_cast<bool>(ud->configured());

    lua_pushboolean(L, data);
    return 1;
}

static int Parameter_set_and_save(lua_State *L) {
    binding_argcheck(L, 2);
    Parameter * ud = check_Parameter(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const bool data = static_cast<bool>(ud->set_and_save(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}

static int Parameter_set(lua_State *L) {
    binding_argcheck(L, 2);
    Parameter * ud = check_Parameter(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const bool data = static_cast<bool>(ud->set(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}

static int Parameter_get(lua_State *L) {
    binding_argcheck(L, 1);
    Parameter * ud = check_Parameter(L, 1);
    float data_5002 {};
    const bool data = static_cast<bool>(ud->get(
            data_5002));

    if (data) {
        lua_pushnumber(L, data_5002);
        return 1;
    }
    return 0;
}

static int Parameter_init_by_info(lua_State *L) {
    binding_argcheck(L, 4);
    Parameter * ud = check_Parameter(L, 1);
    const uint16_t raw_data_2 = get_uint16_t(L, 2);
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
    const uint32_t raw_data_3 = coerce_to_uint32_t(L, 3);
    const uint32_t data_3 = static_cast<uint32_t>(raw_data_3);
    const lua_Integer raw_data_4 = get_integer(L, 4, static_cast<int32_t>(AP_PARAM_INT8), static_cast<int32_t>(AP_PARAM_FLOAT));
    const ap_var_type data_4 = static_cast<ap_var_type>(raw_data_4);
    const bool data = static_cast<bool>(ud->init_by_info(
            data_2,
            data_3,
            data_4));

    lua_pushboolean(L, data);
    return 1;
}

static int Parameter_init(lua_State *L) {
    binding_argcheck(L, 2);
    Parameter * ud = check_Parameter(L, 1);
    const char * data_2 = luaL_checkstring(L, 2);
    const bool data = static_cast<bool>(ud->init(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}

#if AP_AHRS_ENABLED
static int Quaternion_from_angular_velocity(lua_State *L) {
    binding_argcheck(L, 3);
    Quaternion * ud = check_Quaternion(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->from_angular_velocity(
            data_2,
            data_3);

    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_from_axis_angle(lua_State *L) {
    binding_argcheck(L, 3);
    Quaternion * ud = check_Quaternion(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->from_axis_angle(
            data_2,
            data_3);

    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_to_axis_angle(lua_State *L) {
    binding_argcheck(L, 2);
    Quaternion * ud = check_Quaternion(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    ud->to_axis_angle(
            data_2);

    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_earth_to_body(lua_State *L) {
    binding_argcheck(L, 2);
    Quaternion * ud = check_Quaternion(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    ud->earth_to_body(
            data_2);

    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_inverse(lua_State *L) {
    binding_argcheck(L, 1);
    Quaternion * ud = check_Quaternion(L, 1);
    const Quaternion &data = ud->inverse();

    new_Quaternion(L);
    *check_Quaternion(L, -1) = data;
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_from_euler(lua_State *L) {
    binding_argcheck(L, 4);
    Quaternion * ud = check_Quaternion(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    ud->from_euler(
            data_2,
            data_3,
            data_4);

    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_get_euler_yaw(lua_State *L) {
    binding_argcheck(L, 1);
    Quaternion * ud = check_Quaternion(L, 1);
    const float data = static_cast<float>(ud->get_euler_yaw());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_get_euler_pitch(lua_State *L) {
    binding_argcheck(L, 1);
    Quaternion * ud = check_Quaternion(L, 1);
    const float data = static_cast<float>(ud->get_euler_pitch());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_get_euler_roll(lua_State *L) {
    binding_argcheck(L, 1);
    Quaternion * ud = check_Quaternion(L, 1);
    const float data = static_cast<float>(ud->get_euler_roll());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_normalize(lua_State *L) {
    binding_argcheck(L, 1);
    Quaternion * ud = check_Quaternion(L, 1);
    ud->normalize();

    return 0;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion_length(lua_State *L) {
    binding_argcheck(L, 1);
    Quaternion * ud = check_Quaternion(L, 1);
    const float data = static_cast<float>(ud->length());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_AHRS_ENABLED

#if AP_AHRS_ENABLED
static int Quaternion___mul(lua_State *L) {
    binding_argcheck(L, 2);
    Quaternion *ud = check_Quaternion(L, 1);
    Quaternion *ud2 = check_Quaternion(L, 2);
    new_Quaternion(L);
    *check_Quaternion(L, -1) = *ud * *ud2;
    return 1;
}

#endif // AP_AHRS_ENABLED
static int Vector2f_copy(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    const Vector2f data = (*ud);

    new_Vector2f(L);
    *check_Vector2f(L, -1) = data;
    return 1;
}

static int Vector2f_rotate(lua_State *L) {
    binding_argcheck(L, 2);
    Vector2f * ud = check_Vector2f(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->rotate(
            data_2);

    return 0;
}

static int Vector2f_angle(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    const float data = static_cast<float>(ud->angle());

    lua_pushnumber(L, data);
    return 1;
}

static int Vector2f_is_zero(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    const bool data = static_cast<bool>(ud->is_zero());

    lua_pushboolean(L, data);
    return 1;
}

static int Vector2f_is_inf(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    const bool data = static_cast<bool>(ud->is_inf());

    lua_pushboolean(L, data);
    return 1;
}

static int Vector2f_is_nan(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    const bool data = static_cast<bool>(ud->is_nan());

    lua_pushboolean(L, data);
    return 1;
}

static int Vector2f_normalize(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    ud->normalize();

    return 0;
}

static int Vector2f_length(lua_State *L) {
    binding_argcheck(L, 1);
    Vector2f * ud = check_Vector2f(L, 1);
    const float data = static_cast<float>(ud->length());

    lua_pushnumber(L, data);
    return 1;
}

static int Vector2f___add(lua_State *L) {
    binding_argcheck(L, 2);
    Vector2f *ud = check_Vector2f(L, 1);
    Vector2f *ud2 = check_Vector2f(L, 2);
    new_Vector2f(L);
    *check_Vector2f(L, -1) = *ud + *ud2;
    return 1;
}

static int Vector2f___sub(lua_State *L) {
    binding_argcheck(L, 2);
    Vector2f *ud = check_Vector2f(L, 1);
    Vector2f *ud2 = check_Vector2f(L, 2);
    new_Vector2f(L);
    *check_Vector2f(L, -1) = *ud - *ud2;
    return 1;
}

static int Vector3f_angle(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f * ud = check_Vector3f(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const float data = static_cast<float>(ud->angle(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}

static int Vector3f_rotate_xy(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f * ud = check_Vector3f(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    ud->rotate_xy(
            data_2);

    return 0;
}

static int Vector3f_xy(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    const Vector2f &data = ud->xy();

    new_Vector2f(L);
    *check_Vector2f(L, -1) = data;
    return 1;
}

static int Vector3f_copy(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    const Vector3f data = (*ud);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}

static int Vector3f_scale(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f * ud = check_Vector3f(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const Vector3f &data = ud->scale(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}

static int Vector3f_cross(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f * ud = check_Vector3f(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const Vector3f &data = ud->cross(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}

static int Vector3f_dot(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f * ud = check_Vector3f(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const float data = static_cast<float>(ud->dot(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}

static int Vector3f_is_zero(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    const bool data = static_cast<bool>(ud->is_zero());

    lua_pushboolean(L, data);
    return 1;
}

static int Vector3f_is_inf(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    const bool data = static_cast<bool>(ud->is_inf());

    lua_pushboolean(L, data);
    return 1;
}

static int Vector3f_is_nan(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    const bool data = static_cast<bool>(ud->is_nan());

    lua_pushboolean(L, data);
    return 1;
}

static int Vector3f_normalize(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    ud->normalize();

    return 0;
}

static int Vector3f_length(lua_State *L) {
    binding_argcheck(L, 1);
    Vector3f * ud = check_Vector3f(L, 1);
    const float data = static_cast<float>(ud->length());

    lua_pushnumber(L, data);
    return 1;
}

static int Vector3f___add(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f *ud = check_Vector3f(L, 1);
    Vector3f *ud2 = check_Vector3f(L, 2);
    new_Vector3f(L);
    *check_Vector3f(L, -1) = *ud + *ud2;
    return 1;
}

static int Vector3f___sub(lua_State *L) {
    binding_argcheck(L, 2);
    Vector3f *ud = check_Vector3f(L, 1);
    Vector3f *ud2 = check_Vector3f(L, 2);
    new_Vector3f(L);
    *check_Vector3f(L, -1) = *ud - *ud2;
    return 1;
}

static int Location_copy(lua_State *L) {
    binding_argcheck(L, 1);
    Location * ud = check_Location(L, 1);
    const Location data = (*ud);

    new_Location(L);
    *check_Location(L, -1) = data;
    return 1;
}

static int Location_change_alt_frame(lua_State *L) {
    binding_argcheck(L, 2);
    Location * ud = check_Location(L, 1);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(Location::AltFrame::ABSOLUTE), static_cast<int32_t>(Location::AltFrame::ABOVE_TERRAIN));
    const Location::AltFrame data_2 = static_cast<Location::AltFrame>(raw_data_2);
    const bool data = static_cast<bool>(ud->change_alt_frame(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}

static int Location_get_alt_frame(lua_State *L) {
    binding_argcheck(L, 1);
    Location * ud = check_Location(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_alt_frame());

    lua_pushinteger(L, data);
    return 1;
}

static int Location_get_distance_NE(lua_State *L) {
    binding_argcheck(L, 2);
    Location * ud = check_Location(L, 1);
    Location & data_2 = *check_Location(L, 2);
    const Vector2f &data = ud->get_distance_NE(
            data_2);

    new_Vector2f(L);
    *check_Vector2f(L, -1) = data;
    return 1;
}

static int Location_get_distance_NED(lua_State *L) {
    binding_argcheck(L, 2);
    Location * ud = check_Location(L, 1);
    Location & data_2 = *check_Location(L, 2);
    const Vector3f &data = ud->get_distance_NED(
            data_2);

    new_Vector3f(L);
    *check_Vector3f(L, -1) = data;
    return 1;
}

static int Location_get_bearing(lua_State *L) {
    binding_argcheck(L, 2);
    Location * ud = check_Location(L, 1);
    Location & data_2 = *check_Location(L, 2);
    const float data = static_cast<float>(ud->get_bearing(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}

#if AP_AHRS_ENABLED
static int Location_get_vector_from_origin_NEU(lua_State *L) {
    binding_argcheck(L, 1);
    Location * ud = check_Location(L, 1);
    Vector3f data_5002 {};
    const bool data = static_cast<bool>(ud->get_vector_from_origin_NEU(
            data_5002));

    if (data) {
        new_Vector3f(L);
        *check_Vector3f(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

static int Location_offset_bearing_and_pitch(lua_State *L) {
    binding_argcheck(L, 4);
    Location * ud = check_Location(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    ud->offset_bearing_and_pitch(
            data_2,
            data_3,
            data_4);

    return 0;
}

static int Location_offset_bearing(lua_State *L) {
    binding_argcheck(L, 3);
    Location * ud = check_Location(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->offset_bearing(
            data_2,
            data_3);

    return 0;
}

static int Location_offset(lua_State *L) {
    binding_argcheck(L, 3);
    Location * ud = check_Location(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    ud->offset(
            data_2,
            data_3);

    return 0;
}

static int Location_get_distance(lua_State *L) {
    binding_argcheck(L, 2);
    Location * ud = check_Location(L, 1);
    Location & data_2 = *check_Location(L, 2);
    const float data = static_cast<float>(ud->get_distance(
            data_2));

    lua_pushnumber(L, data);
    return 1;
}

#if AP_FILESYSTEM_FILE_READING_ENABLED
const luaL_Reg AP_Filesystem__stat_t_meta[] = {
    {"is_directory", AP_Filesystem__stat_t_is_directory},
    {"ctime", AP_Filesystem__stat_t_ctime},
    {"atime", AP_Filesystem__stat_t_atime},
    {"mtime", AP_Filesystem__stat_t_mtime},
    {"mode", AP_Filesystem__stat_t_mode},
    {"size", AP_Filesystem__stat_t_size},
};

static int AP_Filesystem__stat_t_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Filesystem__stat_t_meta,ARRAY_SIZE(AP_Filesystem__stat_t_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_FILESYSTEM_FILE_READING_ENABLED

const luaL_Reg uint32_t_meta[] = {
    {"tofloat", uint32_t_tofloat},
    {"toint", uint32_t_toint},
};

const luaL_Reg uint32_t_operators[] = {
    {"__tostring", uint32_t___tostring},
    {"__bnot", uint32_t___bnot},
    {"__le", uint32_t___le},
    {"__lt", uint32_t___lt},
    {"__eq", uint32_t___eq},
    {"__shr", uint32_t___shr},
    {"__shl", uint32_t___shl},
    {"__bxor", uint32_t___bxor},
    {"__bor", uint32_t___bor},
    {"__band", uint32_t___band},
    {"__idiv", uint32_t___div},
    {"__mod", uint32_t___mod},
    {"__div", uint32_t___div},
    {"__mul", uint32_t___mul},
    {"__sub", uint32_t___sub},
    {"__add", uint32_t___add},
    {NULL, NULL},
};

static int uint32_t_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,uint32_t_meta,ARRAY_SIZE(uint32_t_meta),name)) {
        return 1;
    }
    return 0;
}

#if (AP_EFI_SCRIPTING_ENABLED == 1)
const luaL_Reg EFI_State_meta[] = {
    {"pt_compensation", EFI_State_pt_compensation},
    {"throttle_out", EFI_State_throttle_out},
    {"ignition_voltage", EFI_State_ignition_voltage},
    {"cylinder_status", EFI_State_cylinder_status},
    {"ecu_index", EFI_State_ecu_index},
    {"throttle_position_percent", EFI_State_throttle_position_percent},
    {"estimated_consumed_fuel_volume_cm3", EFI_State_estimated_consumed_fuel_volume_cm3},
    {"fuel_consumption_rate_cm3pm", EFI_State_fuel_consumption_rate_cm3pm},
    {"fuel_pressure_status", EFI_State_fuel_pressure_status},
    {"fuel_pressure", EFI_State_fuel_pressure},
    {"oil_temperature", EFI_State_oil_temperature},
    {"oil_pressure", EFI_State_oil_pressure},
    {"coolant_temperature", EFI_State_coolant_temperature},
    {"intake_manifold_temperature", EFI_State_intake_manifold_temperature},
    {"intake_manifold_pressure_kpa", EFI_State_intake_manifold_pressure_kpa},
    {"atmospheric_pressure_kpa", EFI_State_atmospheric_pressure_kpa},
    {"spark_dwell_time_ms", EFI_State_spark_dwell_time_ms},
    {"engine_speed_rpm", EFI_State_engine_speed_rpm},
    {"engine_load_percent", EFI_State_engine_load_percent},
    {"general_error", EFI_State_general_error},
    {"last_updated_ms", EFI_State_last_updated_ms},
};

static int EFI_State_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,EFI_State_meta,ARRAY_SIZE(EFI_State_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if (AP_EFI_SCRIPTING_ENABLED == 1)
const luaL_Reg Cylinder_Status_meta[] = {
    {"lambda_coefficient", Cylinder_Status_lambda_coefficient},
    {"exhaust_gas_temperature2", Cylinder_Status_exhaust_gas_temperature2},
    {"exhaust_gas_temperature", Cylinder_Status_exhaust_gas_temperature},
    {"cylinder_head_temperature2", Cylinder_Status_cylinder_head_temperature2},
    {"cylinder_head_temperature", Cylinder_Status_cylinder_head_temperature},
    {"injection_time_ms", Cylinder_Status_injection_time_ms},
    {"ignition_timing_deg", Cylinder_Status_ignition_timing_deg},
};

static int Cylinder_Status_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Cylinder_Status_meta,ARRAY_SIZE(Cylinder_Status_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
const luaL_Reg AP_Camera__camera_state_t_meta[] = {
    {"tracking_p2", AP_Camera__camera_state_t_tracking_p2},
    {"tracking_p1", AP_Camera__camera_state_t_tracking_p1},
    {"tracking_type", AP_Camera__camera_state_t_tracking_type},
    {"focus_value", AP_Camera__camera_state_t_focus_value},
    {"focus_type", AP_Camera__camera_state_t_focus_type},
    {"zoom_value", AP_Camera__camera_state_t_zoom_value},
    {"zoom_type", AP_Camera__camera_state_t_zoom_type},
    {"recording_video", AP_Camera__camera_state_t_recording_video},
    {"take_pic_incr", AP_Camera__camera_state_t_take_pic_incr},
};

static int AP_Camera__camera_state_t_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Camera__camera_state_t_meta,ARRAY_SIZE(AP_Camera__camera_state_t_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
const luaL_Reg AP_HAL__CANFrame_meta[] = {
    {"isErrorFrame", AP_HAL__CANFrame_isErrorFrame},
    {"isRemoteTransmissionRequest", AP_HAL__CANFrame_isRemoteTransmissionRequest},
    {"isExtended", AP_HAL__CANFrame_isExtended},
    {"id_signed", AP_HAL__CANFrame_id_signed},
    {"dlc", AP_HAL__CANFrame_dlc},
    {"data", AP_HAL__CANFrame_data},
    {"id", AP_HAL__CANFrame_id},
};

static int AP_HAL__CANFrame_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_HAL__CANFrame_meta,ARRAY_SIZE(AP_HAL__CANFrame_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
const luaL_Reg AP_MotorsMatrix_Scripting_Dynamic__factor_table_meta[] = {
    {"throttle", AP_MotorsMatrix_Scripting_Dynamic__factor_table_throttle},
    {"yaw", AP_MotorsMatrix_Scripting_Dynamic__factor_table_yaw},
    {"pitch", AP_MotorsMatrix_Scripting_Dynamic__factor_table_pitch},
    {"roll", AP_MotorsMatrix_Scripting_Dynamic__factor_table_roll},
};

static int AP_MotorsMatrix_Scripting_Dynamic__factor_table_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_MotorsMatrix_Scripting_Dynamic__factor_table_meta,ARRAY_SIZE(AP_MotorsMatrix_Scripting_Dynamic__factor_table_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI

#if AP_MISSION_ENABLED
const luaL_Reg mavlink_mission_item_int_t_meta[] = {
    {"current", mavlink_mission_item_int_t_current},
    {"frame", mavlink_mission_item_int_t_frame},
    {"command", mavlink_mission_item_int_t_command},
    {"seq", mavlink_mission_item_int_t_seq},
    {"z", mavlink_mission_item_int_t_z},
    {"y", mavlink_mission_item_int_t_y},
    {"x", mavlink_mission_item_int_t_x},
    {"param4", mavlink_mission_item_int_t_param4},
    {"param3", mavlink_mission_item_int_t_param3},
    {"param2", mavlink_mission_item_int_t_param2},
    {"param1", mavlink_mission_item_int_t_param1},
};

static int mavlink_mission_item_int_t_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,mavlink_mission_item_int_t_meta,ARRAY_SIZE(mavlink_mission_item_int_t_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_MISSION_ENABLED

const luaL_Reg Parameter_meta[] = {
    {"set_default", Parameter_set_default},
    {"configured", Parameter_configured},
    {"set_and_save", Parameter_set_and_save},
    {"set", Parameter_set},
    {"get", Parameter_get},
    {"init_by_info", Parameter_init_by_info},
    {"init", Parameter_init},
};

static int Parameter_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Parameter_meta,ARRAY_SIZE(Parameter_meta),name)) {
        return 1;
    }
    return 0;
}

#if (HAL_WITH_ESC_TELEM == 1)
const luaL_Reg AP_ESC_Telem_Backend__TelemetryData_meta[] = {
    {"motor_temp_cdeg", AP_ESC_Telem_Backend__TelemetryData_motor_temp_cdeg},
    {"consumption_mah", AP_ESC_Telem_Backend__TelemetryData_consumption_mah},
    {"current", AP_ESC_Telem_Backend__TelemetryData_current},
    {"voltage", AP_ESC_Telem_Backend__TelemetryData_voltage},
    {"temperature_cdeg", AP_ESC_Telem_Backend__TelemetryData_temperature_cdeg},
};

static int AP_ESC_Telem_Backend__TelemetryData_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_ESC_Telem_Backend__TelemetryData_meta,ARRAY_SIZE(AP_ESC_Telem_Backend__TelemetryData_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (HAL_WITH_ESC_TELEM == 1)

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
const luaL_Reg RangeFinder__RangeFinder_State_meta[] = {
    {"voltage", RangeFinder__RangeFinder_State_voltage_mv},
    {"signal_quality", RangeFinder__RangeFinder_State_signal_quality_pct},
    {"distance", RangeFinder__RangeFinder_State_distance_m},
    {"range_valid_count", RangeFinder__RangeFinder_State_range_valid_count},
    {"status", RangeFinder__RangeFinder_State_status},
    {"last_reading", RangeFinder__RangeFinder_State_last_reading_ms},
};

static int RangeFinder__RangeFinder_State_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,RangeFinder__RangeFinder_State_meta,ARRAY_SIZE(RangeFinder__RangeFinder_State_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if AP_AHRS_ENABLED
const luaL_Reg Quaternion_meta[] = {
    {"from_angular_velocity", Quaternion_from_angular_velocity},
    {"from_axis_angle", Quaternion_from_axis_angle},
    {"to_axis_angle", Quaternion_to_axis_angle},
    {"earth_to_body", Quaternion_earth_to_body},
    {"inverse", Quaternion_inverse},
    {"from_euler", Quaternion_from_euler},
    {"get_euler_yaw", Quaternion_get_euler_yaw},
    {"get_euler_pitch", Quaternion_get_euler_pitch},
    {"get_euler_roll", Quaternion_get_euler_roll},
    {"normalize", Quaternion_normalize},
    {"length", Quaternion_length},
    {"q4", Quaternion_q4},
    {"q3", Quaternion_q3},
    {"q2", Quaternion_q2},
    {"q1", Quaternion_q1},
};

const luaL_Reg Quaternion_operators[] = {
    {"__mul", Quaternion___mul},
    {NULL, NULL},
};

static int Quaternion_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Quaternion_meta,ARRAY_SIZE(Quaternion_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_AHRS_ENABLED

const luaL_Reg Vector2f_meta[] = {
    {"copy", Vector2f_copy},
    {"rotate", Vector2f_rotate},
    {"angle", Vector2f_angle},
    {"is_zero", Vector2f_is_zero},
    {"is_inf", Vector2f_is_inf},
    {"is_nan", Vector2f_is_nan},
    {"normalize", Vector2f_normalize},
    {"length", Vector2f_length},
    {"y", Vector2f_y},
    {"x", Vector2f_x},
};

const luaL_Reg Vector2f_operators[] = {
    {"__add", Vector2f___add},
    {"__sub", Vector2f___sub},
    {NULL, NULL},
};

static int Vector2f_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Vector2f_meta,ARRAY_SIZE(Vector2f_meta),name)) {
        return 1;
    }
    return 0;
}

const luaL_Reg Vector3f_meta[] = {
    {"angle", Vector3f_angle},
    {"rotate_xy", Vector3f_rotate_xy},
    {"xy", Vector3f_xy},
    {"copy", Vector3f_copy},
    {"scale", Vector3f_scale},
    {"cross", Vector3f_cross},
    {"dot", Vector3f_dot},
    {"is_zero", Vector3f_is_zero},
    {"is_inf", Vector3f_is_inf},
    {"is_nan", Vector3f_is_nan},
    {"normalize", Vector3f_normalize},
    {"length", Vector3f_length},
    {"z", Vector3f_z},
    {"y", Vector3f_y},
    {"x", Vector3f_x},
};

const luaL_Reg Vector3f_operators[] = {
    {"__add", Vector3f___add},
    {"__sub", Vector3f___sub},
    {NULL, NULL},
};

static int Vector3f_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Vector3f_meta,ARRAY_SIZE(Vector3f_meta),name)) {
        return 1;
    }
    return 0;
}

#if AP_BATTERY_SCRIPTING_ENABLED
const luaL_Reg BattMonitorScript_State_meta[] = {
    {"temperature", BattMonitorScript_State_temperature},
    {"consumed_wh", BattMonitorScript_State_consumed_wh},
    {"consumed_mah", BattMonitorScript_State_consumed_mah},
    {"current_amps", BattMonitorScript_State_current_amps},
    {"cycle_count", BattMonitorScript_State_cycle_count},
    {"cell_voltages", BattMonitorScript_State_cell_voltages},
    {"capacity_remaining_pct", BattMonitorScript_State_capacity_remaining_pct},
    {"cell_count", BattMonitorScript_State_cell_count},
    {"voltage", BattMonitorScript_State_voltage},
    {"healthy", BattMonitorScript_State_healthy},
};

static int BattMonitorScript_State_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,BattMonitorScript_State_meta,ARRAY_SIZE(BattMonitorScript_State_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_BATTERY_SCRIPTING_ENABLED

const luaL_Reg Location_meta[] = {
    {"copy", Location_copy},
    {"change_alt_frame", Location_change_alt_frame},
    {"get_alt_frame", Location_get_alt_frame},
    {"get_distance_NE", Location_get_distance_NE},
    {"get_distance_NED", Location_get_distance_NED},
    {"get_bearing", Location_get_bearing},
#if AP_AHRS_ENABLED
    {"get_vector_from_origin_NEU", Location_get_vector_from_origin_NEU},
#endif // AP_AHRS_ENABLED
    {"offset_bearing_and_pitch", Location_offset_bearing_and_pitch},
    {"offset_bearing", Location_offset_bearing},
    {"offset", Location_offset},
    {"get_distance", Location_get_distance},
    {"loiter_xtrack", Location_loiter_xtrack},
    {"origin_alt", Location_origin_alt},
    {"terrain_alt", Location_terrain_alt},
    {"relative_alt", Location_relative_alt},
    {"alt", Location_alt},
    {"lng", Location_lng},
    {"lat", Location_lat},
};

static int Location_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,Location_meta,ARRAY_SIZE(Location_meta),name)) {
        return 1;
    }
    return 0;
}

#if (AP_EFI_SCRIPTING_ENABLED == 1)
static int AP_EFI_Backend_handle_scripting(lua_State *L) {
    binding_argcheck(L, 2);
    AP_EFI_Backend * ud = *check_AP_EFI_Backend(L, 1);
    EFI_State & data_2 = *check_EFI_State(L, 2);
    const bool data = static_cast<bool>(ud->handle_scripting(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int ScriptingCANBuffer_add_filter(lua_State *L) {
    binding_argcheck(L, 3);
    ScriptingCANBuffer * ud = *check_ScriptingCANBuffer(L, 1);
    const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
    const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
    const uint32_t raw_data_3 = coerce_to_uint32_t(L, 3);
    const uint32_t data_3 = static_cast<uint32_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->add_filter(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int ScriptingCANBuffer_read_frame(lua_State *L) {
    binding_argcheck(L, 1);
    ScriptingCANBuffer * ud = *check_ScriptingCANBuffer(L, 1);
    AP_HAL::CANFrame data_5002 {};
    const bool data = static_cast<bool>(ud->read_frame(
            data_5002));

    if (data) {
        new_AP_HAL__CANFrame(L);
        *check_AP_HAL__CANFrame(L, -1) = data_5002;
        return 1;
    }
    return 0;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
static int ScriptingCANBuffer_write_frame(lua_State *L) {
    binding_argcheck(L, 3);
    ScriptingCANBuffer * ud = *check_ScriptingCANBuffer(L, 1);
    AP_HAL::CANFrame & data_2 = *check_AP_HAL__CANFrame(L, 2);
    const uint32_t raw_data_3 = coerce_to_uint32_t(L, 3);
    const uint32_t data_3 = static_cast<uint32_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->write_frame(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

static int AP_HAL__PWMSource_get_pwm_avg_us(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::PWMSource * ud = *check_AP_HAL__PWMSource(L, 1);
    const uint16_t data = static_cast<uint16_t>(ud->get_pwm_avg_us());

    lua_pushinteger(L, data);
    return 1;
}

static int AP_HAL__PWMSource_get_pwm_us(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::PWMSource * ud = *check_AP_HAL__PWMSource(L, 1);
    const uint16_t data = static_cast<uint16_t>(ud->get_pwm_us());

    lua_pushinteger(L, data);
    return 1;
}

static int AP_HAL__PWMSource_set_pin(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::PWMSource * ud = *check_AP_HAL__PWMSource(L, 1);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->set_pin(
            data_2,
            "Scripting"));

    lua_pushboolean(L, data);
    return 1;
}

#if !defined(HAL_DISABLE_ADC_DRIVER)
static int AP_HAL__AnalogSource_voltage_average_ratiometric(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::AnalogSource * ud = *check_AP_HAL__AnalogSource(L, 1);
    const float data = static_cast<float>(ud->voltage_average_ratiometric());

    lua_pushnumber(L, data);
    return 1;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if !defined(HAL_DISABLE_ADC_DRIVER)
static int AP_HAL__AnalogSource_voltage_latest(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::AnalogSource * ud = *check_AP_HAL__AnalogSource(L, 1);
    const float data = static_cast<float>(ud->voltage_latest());

    lua_pushnumber(L, data);
    return 1;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if !defined(HAL_DISABLE_ADC_DRIVER)
static int AP_HAL__AnalogSource_voltage_average(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::AnalogSource * ud = *check_AP_HAL__AnalogSource(L, 1);
    const float data = static_cast<float>(ud->voltage_average());

    lua_pushnumber(L, data);
    return 1;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if !defined(HAL_DISABLE_ADC_DRIVER)
static int AP_HAL__AnalogSource_set_pin(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::AnalogSource * ud = *check_AP_HAL__AnalogSource(L, 1);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->set_pin(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_reuseaddress(lua_State *L) {
    binding_argcheck(L, 1);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const bool data = static_cast<bool>(ud->reuseaddress());

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_pollin(lua_State *L) {
    binding_argcheck(L, 2);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
    const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->pollin(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_pollout(lua_State *L) {
    binding_argcheck(L, 2);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const uint32_t raw_data_2 = coerce_to_uint32_t(L, 2);
    const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->pollout(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_is_connected(lua_State *L) {
    binding_argcheck(L, 1);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const bool data = static_cast<bool>(ud->is_connected());

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_set_blocking(lua_State *L) {
    binding_argcheck(L, 2);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const bool data_2 = static_cast<bool>(lua_toboolean(L, 2));
    const bool data = static_cast<bool>(ud->set_blocking(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_listen(lua_State *L) {
    binding_argcheck(L, 2);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const bool data = static_cast<bool>(ud->listen(
            data_2));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_send(lua_State *L) {
    binding_argcheck(L, 3);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const char * data_2 = luaL_checkstring(L, 2);
    const uint32_t raw_data_3 = coerce_to_uint32_t(L, 3);
    const uint32_t data_3 = static_cast<uint32_t>(raw_data_3);
    const int32_t data = static_cast<int32_t>(ud->send(
            data_2,
            data_3));

    lua_pushinteger(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_bind(lua_State *L) {
    binding_argcheck(L, 3);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const char * data_2 = luaL_checkstring(L, 2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->bind(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

#if (AP_NETWORKING_ENABLED==1)
static int SocketAPM_connect(lua_State *L) {
    binding_argcheck(L, 3);
    SocketAPM * ud = *check_SocketAPM(L, 1);
    const char * data_2 = luaL_checkstring(L, 2);
    const uint16_t raw_data_3 = get_uint16_t(L, 3);
    const uint16_t data_3 = static_cast<uint16_t>(raw_data_3);
    const bool data = static_cast<bool>(ud->connect(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // (AP_NETWORKING_ENABLED==1)

static int AP_HAL__I2CDevice_set_address(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::I2CDevice * ud = *check_AP_HAL__I2CDevice(L, 1);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->get_semaphore()->take_blocking();
    ud->set_address(
            data_2);

    ud->get_semaphore()->give();
    return 0;
}

static int AP_HAL__I2CDevice_write_register(lua_State *L) {
    binding_argcheck(L, 3);
    AP_HAL::I2CDevice * ud = *check_AP_HAL__I2CDevice(L, 1);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint8_t raw_data_3 = get_uint8_t(L, 3);
    const uint8_t data_3 = static_cast<uint8_t>(raw_data_3);
    ud->get_semaphore()->take_blocking();
    const bool data = static_cast<bool>(ud->write_register(
            data_2,
            data_3));

    ud->get_semaphore()->give();
    lua_pushboolean(L, data);
    return 1;
}

static int AP_HAL__I2CDevice_set_retries(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::I2CDevice * ud = *check_AP_HAL__I2CDevice(L, 1);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(20, UINT8_MAX));
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    ud->get_semaphore()->take_blocking();
    ud->set_retries(
            data_2);

    ud->get_semaphore()->give();
    return 0;
}

static int AP_HAL__UARTDriver_set_flow_control(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::UARTDriver * ud = *check_AP_HAL__UARTDriver(L, 1);
    const lua_Integer raw_data_2 = get_integer(L, 2, static_cast<int32_t>(AP_HAL::UARTDriver::FLOW_CONTROL_DISABLE), static_cast<int32_t>(AP_HAL::UARTDriver::FLOW_CONTROL_RTS_DE));
    const AP_HAL::UARTDriver::flow_control data_2 = static_cast<AP_HAL::UARTDriver::flow_control>(raw_data_2);
    ud->set_flow_control(
            data_2);

    return 0;
}

static int AP_HAL__UARTDriver_available(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::UARTDriver * ud = *check_AP_HAL__UARTDriver(L, 1);
    const uint32_t data = static_cast<uint32_t>(ud->available());

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}

static int AP_HAL__UARTDriver_write(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::UARTDriver * ud = *check_AP_HAL__UARTDriver(L, 1);
    const uint8_t raw_data_2 = get_uint8_t(L, 2);
    const uint8_t data_2 = static_cast<uint8_t>(raw_data_2);
    const uint32_t data = static_cast<uint32_t>(ud->write(
            data_2));

        new_uint32_t(L);
        *static_cast<uint32_t *>(luaL_checkudata(L, -1, "uint32_t")) = data;
    return 1;
}

static int AP_HAL__UARTDriver_read(lua_State *L) {
    binding_argcheck(L, 1);
    AP_HAL::UARTDriver * ud = *check_AP_HAL__UARTDriver(L, 1);
    const int16_t data = static_cast<int16_t>(ud->read());

    lua_pushinteger(L, data);
    return 1;
}

static int AP_HAL__UARTDriver_begin(lua_State *L) {
    binding_argcheck(L, 2);
    AP_HAL::UARTDriver * ud = *check_AP_HAL__UARTDriver(L, 1);
    const uint32_t raw_data_2 = get_uint32(L, 2, MAX(1U, 0U), MIN(UINT32_MAX, UINT32_MAX));
    const uint32_t data_2 = static_cast<uint32_t>(raw_data_2);
    ud->begin(
            data_2);

    return 0;
}

#if AP_RC_CHANNEL_ENABLED
static int RC_Channel_set_override(lua_State *L) {
    binding_argcheck(L, 2);
    RC_Channel * ud = *check_RC_Channel(L, 1);
    const lua_Integer raw_data_2 = get_integer(L, 2, MAX(0, 0), MIN(2200, UINT16_MAX));
    const uint16_t data_2 = static_cast<uint16_t>(raw_data_2);
    ud->set_override(
            data_2,
            0);

    return 0;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channel_norm_input_ignore_trim(lua_State *L) {
    binding_argcheck(L, 1);
    RC_Channel * ud = *check_RC_Channel(L, 1);
    const float data = static_cast<float>(ud->norm_input_ignore_trim());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channel_get_aux_switch_pos(lua_State *L) {
    binding_argcheck(L, 1);
    RC_Channel * ud = *check_RC_Channel(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->get_aux_switch_pos());

    lua_pushinteger(L, data);
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channel_norm_input_dz(lua_State *L) {
    binding_argcheck(L, 1);
    RC_Channel * ud = *check_RC_Channel(L, 1);
    const float data = static_cast<float>(ud->norm_input_dz());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if AP_RC_CHANNEL_ENABLED
static int RC_Channel_norm_input(lua_State *L) {
    binding_argcheck(L, 1);
    RC_Channel * ud = *check_RC_Channel(L, 1);
    const float data = static_cast<float>(ud->norm_input());

    lua_pushnumber(L, data);
    return 1;
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int AP_RangeFinder_Backend_get_state(lua_State *L) {
    binding_argcheck(L, 1);
    AP_RangeFinder_Backend * ud = *check_AP_RangeFinder_Backend(L, 1);
    RangeFinder::RangeFinder_State data_5002 {};
    ud->get_state(
            data_5002);

    new_RangeFinder__RangeFinder_State(L);
    *check_RangeFinder__RangeFinder_State(L, -1) = data_5002;
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int AP_RangeFinder_Backend_status(lua_State *L) {
    binding_argcheck(L, 1);
    AP_RangeFinder_Backend * ud = *check_AP_RangeFinder_Backend(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->status());

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int AP_RangeFinder_Backend_type(lua_State *L) {
    binding_argcheck(L, 1);
    AP_RangeFinder_Backend * ud = *check_AP_RangeFinder_Backend(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->type());

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int AP_RangeFinder_Backend_orientation(lua_State *L) {
    binding_argcheck(L, 1);
    AP_RangeFinder_Backend * ud = *check_AP_RangeFinder_Backend(L, 1);
    const Rotation &data = ud->orientation();

    lua_pushinteger(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int AP_RangeFinder_Backend_signal_quality_pct(lua_State *L) {
    binding_argcheck(L, 1);
    AP_RangeFinder_Backend * ud = *check_AP_RangeFinder_Backend(L, 1);
    const float data = static_cast<float>(ud->signal_quality_pct());

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
static int AP_RangeFinder_Backend_distance(lua_State *L) {
    binding_argcheck(L, 1);
    AP_RangeFinder_Backend * ud = *check_AP_RangeFinder_Backend(L, 1);
    const float data = static_cast<float>(ud->distance());

    lua_pushnumber(L, data);
    return 1;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_Backend_update_virtual_boundary(lua_State *L) {
    binding_argcheck(L, 1);
    AP_Proximity_Backend * ud = *check_AP_Proximity_Backend(L, 1);
    const bool data = static_cast<bool>(ud->update_virtual_boundary());

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_Backend_set_distance_min_max(lua_State *L) {
    binding_argcheck(L, 3);
    AP_Proximity_Backend * ud = *check_AP_Proximity_Backend(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const bool data = static_cast<bool>(ud->set_distance_min_max(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_Backend_type(lua_State *L) {
    binding_argcheck(L, 1);
    AP_Proximity_Backend * ud = *check_AP_Proximity_Backend(L, 1);
    const uint8_t data = static_cast<uint8_t>(ud->type());

    lua_pushinteger(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_Backend_handle_script_3d_msg(lua_State *L) {
    binding_argcheck(L, 3);
    AP_Proximity_Backend * ud = *check_AP_Proximity_Backend(L, 1);
    Vector3f & data_2 = *check_Vector3f(L, 2);
    const bool data_3 = static_cast<bool>(lua_toboolean(L, 3));
    const bool data = static_cast<bool>(ud->handle_script_3d_msg(
            data_2,
            data_3));

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if HAL_PROXIMITY_ENABLED == 1
static int AP_Proximity_Backend_handle_script_distance_msg(lua_State *L) {
    binding_argcheck(L, 5);
    AP_Proximity_Backend * ud = *check_AP_Proximity_Backend(L, 1);
    const float raw_data_2 = luaL_checknumber(L, 2);
    const float data_2 = raw_data_2;
    const float raw_data_3 = luaL_checknumber(L, 3);
    const float data_3 = raw_data_3;
    const float raw_data_4 = luaL_checknumber(L, 4);
    const float data_4 = raw_data_4;
    const bool data_5 = static_cast<bool>(lua_toboolean(L, 5));
    const bool data = static_cast<bool>(ud->handle_script_distance_msg(
            data_2,
            data_3,
            data_4,
            data_5));

    lua_pushboolean(L, data);
    return 1;
}
#endif // HAL_PROXIMITY_ENABLED == 1

#if (AP_EFI_SCRIPTING_ENABLED == 1)
const luaL_Reg AP_EFI_Backend_meta[] = {
    {"handle_scripting", AP_EFI_Backend_handle_scripting},
};

static int AP_EFI_Backend_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_EFI_Backend_meta,ARRAY_SIZE(AP_EFI_Backend_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)

#if AP_SCRIPTING_CAN_SENSOR_ENABLED
const luaL_Reg ScriptingCANBuffer_meta[] = {
    {"add_filter", ScriptingCANBuffer_add_filter},
    {"read_frame", ScriptingCANBuffer_read_frame},
    {"write_frame", ScriptingCANBuffer_write_frame},
};

static int ScriptingCANBuffer_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,ScriptingCANBuffer_meta,ARRAY_SIZE(ScriptingCANBuffer_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED

const luaL_Reg AP_HAL__PWMSource_meta[] = {
    {"get_pwm_avg_us", AP_HAL__PWMSource_get_pwm_avg_us},
    {"get_pwm_us", AP_HAL__PWMSource_get_pwm_us},
    {"set_pin", AP_HAL__PWMSource_set_pin},
};

static int AP_HAL__PWMSource_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_HAL__PWMSource_meta,ARRAY_SIZE(AP_HAL__PWMSource_meta),name)) {
        return 1;
    }
    return 0;
}

#if !defined(HAL_DISABLE_ADC_DRIVER)
const luaL_Reg AP_HAL__AnalogSource_meta[] = {
    {"voltage_average_ratiometric", AP_HAL__AnalogSource_voltage_average_ratiometric},
    {"voltage_latest", AP_HAL__AnalogSource_voltage_latest},
    {"voltage_average", AP_HAL__AnalogSource_voltage_average},
    {"set_pin", AP_HAL__AnalogSource_set_pin},
};

static int AP_HAL__AnalogSource_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_HAL__AnalogSource_meta,ARRAY_SIZE(AP_HAL__AnalogSource_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // !defined(HAL_DISABLE_ADC_DRIVER)

#if (AP_NETWORKING_ENABLED==1)
const luaL_Reg SocketAPM_meta[] = {
    {"reuseaddress", SocketAPM_reuseaddress},
    {"pollin", SocketAPM_pollin},
    {"pollout", SocketAPM_pollout},
    {"is_connected", SocketAPM_is_connected},
    {"set_blocking", SocketAPM_set_blocking},
    {"listen", SocketAPM_listen},
    {"send", SocketAPM_send},
    {"bind", SocketAPM_bind},
    {"connect", SocketAPM_connect},
    {"accept", SocketAPM_accept},
    {"recv", SocketAPM_recv},
    {"close", SocketAPM_close},
    {"sendfile", SocketAPM_sendfile},
};

static int SocketAPM_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,SocketAPM_meta,ARRAY_SIZE(SocketAPM_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (AP_NETWORKING_ENABLED==1)

const luaL_Reg AP_HAL__I2CDevice_meta[] = {
    {"set_address", AP_HAL__I2CDevice_set_address},
    {"write_register", AP_HAL__I2CDevice_write_register},
    {"set_retries", AP_HAL__I2CDevice_set_retries},
    {"read_registers", AP_HAL__I2CDevice_read_registers},
};

static int AP_HAL__I2CDevice_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_HAL__I2CDevice_meta,ARRAY_SIZE(AP_HAL__I2CDevice_meta),name)) {
        return 1;
    }
    return 0;
}

const luaL_Reg AP_HAL__UARTDriver_meta[] = {
    {"set_flow_control", AP_HAL__UARTDriver_set_flow_control},
    {"available", AP_HAL__UARTDriver_available},
    {"write", AP_HAL__UARTDriver_write},
    {"read", AP_HAL__UARTDriver_read},
    {"begin", AP_HAL__UARTDriver_begin},
    {"readstring", AP_HAL__UARTDriver_readstring},
};

static int AP_HAL__UARTDriver_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_HAL__UARTDriver_meta,ARRAY_SIZE(AP_HAL__UARTDriver_meta),name)) {
        return 1;
    }
    return 0;
}

#if AP_RC_CHANNEL_ENABLED
const luaL_Reg RC_Channel_meta[] = {
    {"set_override", RC_Channel_set_override},
    {"norm_input_ignore_trim", RC_Channel_norm_input_ignore_trim},
    {"get_aux_switch_pos", RC_Channel_get_aux_switch_pos},
    {"norm_input_dz", RC_Channel_norm_input_dz},
    {"norm_input", RC_Channel_norm_input},
};

static int RC_Channel_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,RC_Channel_meta,ARRAY_SIZE(RC_Channel_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // AP_RC_CHANNEL_ENABLED

#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
const luaL_Reg AP_RangeFinder_Backend_meta[] = {
    {"get_state", AP_RangeFinder_Backend_get_state},
    {"status", AP_RangeFinder_Backend_status},
    {"type", AP_RangeFinder_Backend_type},
    {"orientation", AP_RangeFinder_Backend_orientation},
    {"signal_quality", AP_RangeFinder_Backend_signal_quality_pct},
    {"distance", AP_RangeFinder_Backend_distance},
    {"handle_script_msg", lua_range_finder_handle_script_msg},
};

static int AP_RangeFinder_Backend_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_RangeFinder_Backend_meta,ARRAY_SIZE(AP_RangeFinder_Backend_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))

#if HAL_PROXIMITY_ENABLED == 1
const luaL_Reg AP_Proximity_Backend_meta[] = {
    {"update_virtual_boundary", AP_Proximity_Backend_update_virtual_boundary},
    {"set_distance_min_max", AP_Proximity_Backend_set_distance_min_max},
    {"type", AP_Proximity_Backend_type},
    {"handle_script_3d_msg", AP_Proximity_Backend_handle_script_3d_msg},
    {"handle_script_distance_msg", AP_Proximity_Backend_handle_script_distance_msg},
};

static int AP_Proximity_Backend_index(lua_State *L) {
    const char * name = luaL_checkstring(L, 2);
    if (load_function(L,AP_Proximity_Backend_meta,ARRAY_SIZE(AP_Proximity_Backend_meta),name)) {
        return 1;
    }
    return 0;
}
#endif // HAL_PROXIMITY_ENABLED == 1

const struct userdata_meta userdata_fun[] = {
#if AP_FILESYSTEM_FILE_READING_ENABLED
    {"stat_t", AP_Filesystem__stat_t_index, nullptr},
#endif // AP_FILESYSTEM_FILE_READING_ENABLED
    {"uint32_t", uint32_t_index, uint32_t_operators},
#if (AP_EFI_SCRIPTING_ENABLED == 1)
    {"EFI_State", EFI_State_index, nullptr},
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if (AP_EFI_SCRIPTING_ENABLED == 1)
    {"Cylinder_Status", Cylinder_Status_index, nullptr},
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
    {"AP_Camera::camera_state_t", AP_Camera__camera_state_t_index, nullptr},
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
    {"CANFrame", AP_HAL__CANFrame_index, nullptr},
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
    {"motor_factor_table", AP_MotorsMatrix_Scripting_Dynamic__factor_table_index, nullptr},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if AP_MISSION_ENABLED
    {"mavlink_mission_item_int_t", mavlink_mission_item_int_t_index, nullptr},
#endif // AP_MISSION_ENABLED
    {"Parameter", Parameter_index, nullptr},
#if (HAL_WITH_ESC_TELEM == 1)
    {"ESCTelemetryData", AP_ESC_Telem_Backend__TelemetryData_index, nullptr},
#endif // (HAL_WITH_ESC_TELEM == 1)
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
    {"RangeFinder_State", RangeFinder__RangeFinder_State_index, nullptr},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if AP_AHRS_ENABLED
    {"Quaternion", Quaternion_index, Quaternion_operators},
#endif // AP_AHRS_ENABLED
    {"Vector2f", Vector2f_index, Vector2f_operators},
    {"Vector3f", Vector3f_index, Vector3f_operators},
#if AP_BATTERY_SCRIPTING_ENABLED
    {"BattMonitorScript_State", BattMonitorScript_State_index, nullptr},
#endif // AP_BATTERY_SCRIPTING_ENABLED
    {"Location", Location_index, nullptr},
};

const struct luaL_Reg singleton_fun[] = {
#if HAL_VISUALODOM_ENABLED
    {"visual_odom", AP_VisualOdom_index},
#endif // HAL_VISUALODOM_ENABLED
#if AP_NETWORKING_ENABLED
    {"networking", AP_Networking_index},
#endif // AP_NETWORKING_ENABLED
#if AP_RTC_ENABLED
    {"rtc", AP_RTC_index},
#endif // AP_RTC_ENABLED
    {"fs", AP_Filesystem_index},
#if AP_FENCE_ENABLED
    {"fence", AC_Fence_index},
#endif // AP_FENCE_ENABLED
#if HAL_GCS_ENABLED
    {"mavlink", mavlink_index},
#endif // HAL_GCS_ENABLED
    {"i2c", i2c_index},
#if HAL_LOGGING_ENABLED
    {"logger", AP_Logger_index},
#endif // HAL_LOGGING_ENABLED
#if (AP_EFI_SCRIPTING_ENABLED == 1)
    {"efi", AP_EFI_index},
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_COMPASS_ENABLED
    {"compass", Compass_index},
#endif // AP_COMPASS_ENABLED
#if HAL_WITH_IO_MCU
    {"iomcu", AP_IOMCU_index},
#endif // HAL_WITH_IO_MCU
#if AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
    {"winch", AP_Winch_index},
#endif // AP_WINCH_ENABLED && APM_BUILD_COPTER_OR_HELI
#if AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
    {"camera", AP_Camera_index},
#endif // AP_CAMERA_ENABLED && (AP_CAMERA_SCRIPTING_ENABLED == 1)
#if HAL_MOUNT_ENABLED == 1
    {"mount", AP_Mount_index},
#endif // HAL_MOUNT_ENABLED == 1
#if APM_BUILD_TYPE(APM_BUILD_Rover)
    {"AR_PosControl", AR_PosControl_index},
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)
#if APM_BUILD_TYPE(APM_BUILD_Rover)
    {"AR_AttitudeControl", AR_AttitudeControl_index},
#endif // APM_BUILD_TYPE(APM_BUILD_Rover)
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
    {"AC_AttitudeControl", AC_AttitudeControl_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
    {"precland", AC_PrecLand_index},
#endif // AC_PRECLAND_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
#if AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
    {"follow", AP_Follow_index},
#endif // AP_FOLLOW_ENABLED && (APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI)
    {"FWVersion", AP__fwversion___index},
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
    {"motors", AP__motors___index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if defined(HAL_BUILD_AP_PERIPH)
    {"periph", AP_Periph_FW_index},
#endif // defined(HAL_BUILD_AP_PERIPH)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
    {"CAN", CAN_index},
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
#if AP_INERTIALSENSOR_ENABLED
    {"ins", AP_InertialSensor_index},
#endif // AP_INERTIALSENSOR_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
    {"Motors_dynamic", AP_MotorsMatrix_Scripting_Dynamic_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if !defined(HAL_DISABLE_ADC_DRIVER)
    {"analog", hal_analogin_index},
#endif // !defined(HAL_DISABLE_ADC_DRIVER)
    {"gpio", hal_gpio_index},
#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
    {"Motors_6DoF", AP_MotorsMatrix_6DoF_Scripting_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#if APM_BUILD_TYPE(APM_BUILD_ArduCopter)
    {"attitude_control", AC_AttitudeControl_Multi_6DoF_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduCopter)
#if AP_FRSKY_SPORT_TELEM_ENABLED
    {"frsky_sport", AP_Frsky_SPort_index},
#endif // AP_FRSKY_SPORT_TELEM_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
    {"MotorsMatrix", AP_MotorsMatrix_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if APM_BUILD_TYPE(APM_BUILD_ArduSub)
    {"sub", Sub_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduSub)
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
    {"quadplane", QuadPlane_index},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane) && HAL_QUADPLANE_ENABLED
#if AP_NOTIFY_SCRIPTING_LED_ENABLED
    {"LED", ScriptingLED_index},
#endif // AP_NOTIFY_SCRIPTING_LED_ENABLED
#if HAL_BUTTON_ENABLED == 1
    {"button", AP_Button_index},
#endif // HAL_BUTTON_ENABLED == 1
#if AP_RPM_ENABLED
    {"RPM", AP_RPM_index},
#endif // AP_RPM_ENABLED
#if AP_MISSION_ENABLED
    {"mission", AP_Mission_index},
#endif // AP_MISSION_ENABLED
    {"scripting", AP_Scripting_index},
    {"param", AP_Param_index},
#if HAL_WITH_ESC_TELEM == 1
    {"esc_telem", AP_ESC_Telem_index},
#endif // HAL_WITH_ESC_TELEM == 1
#if AP_OPTICALFLOW_ENABLED
    {"optical_flow", AP_OpticalFlow_index},
#endif // AP_OPTICALFLOW_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
    {"baro", AP_Baro_index},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_BARO))
#if HAL_GCS_ENABLED
    {"serial", AP_SerialManager_index},
#endif // HAL_GCS_ENABLED
#if AP_RC_CHANNEL_ENABLED
    {"rc", RC_Channels_index},
#endif // AP_RC_CHANNEL_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
    {"SRV_Channels", SRV_Channels_index},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RC_OUT))
#if AP_SERIALLED_ENABLED
    {"serialLED", AP_SerialLED_index},
#endif // AP_SERIALLED_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH))
    {"vehicle", AP_Vehicle_index},
#endif // (!defined(HAL_BUILD_AP_PERIPH))
#if ENABLE_ONVIF == 1
    {"onvif", AP_ONVIF_index},
#endif // ENABLE_ONVIF == 1
#if HAL_GCS_ENABLED
    {"gcs", GCS_index},
#endif // HAL_GCS_ENABLED
#if AP_RELAY_ENABLED
    {"relay", AP_Relay_index},
#endif // AP_RELAY_ENABLED
#if defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
    {"terrain", AP_Terrain_index},
#endif // defined(AP_TERRAIN_AVAILABLE) && AP_TERRAIN_AVAILABLE == 1
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
    {"rangefinder", RangeFinder_index},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if HAL_PROXIMITY_ENABLED == 1
    {"proximity", AP_Proximity_index},
#endif // HAL_PROXIMITY_ENABLED == 1
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
    {"notify", AP_Notify_index},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_NOTIFY))
#if (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
    {"gps", AP_GPS_index},
#endif // (AP_GPS_ENABLED && (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_GPS)))
#if AP_BATTERY_ENABLED
    {"battery", AP_BattMonitor_index},
#endif // AP_BATTERY_ENABLED
#if AP_ARMING_ENABLED
    {"arming", AP_Arming_index},
#endif // AP_ARMING_ENABLED
#if AP_AHRS_ENABLED
    {"ahrs", AP_AHRS_index},
#endif // AP_AHRS_ENABLED
};

const struct luaL_Reg ap_object_fun[] = {
#if (AP_EFI_SCRIPTING_ENABLED == 1)
    {"AP_EFI_Backend", AP_EFI_Backend_index},
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
    {"ScriptingCANBuffer", ScriptingCANBuffer_index},
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
    {"AP_HAL::PWMSource", AP_HAL__PWMSource_index},
#if !defined(HAL_DISABLE_ADC_DRIVER)
    {"AP_HAL::AnalogSource", AP_HAL__AnalogSource_index},
#endif // !defined(HAL_DISABLE_ADC_DRIVER)
#if (AP_NETWORKING_ENABLED==1)
    {"SocketAPM", SocketAPM_index},
#endif // (AP_NETWORKING_ENABLED==1)
    {"AP_HAL::I2CDevice", AP_HAL__I2CDevice_index},
    {"AP_HAL::UARTDriver", AP_HAL__UARTDriver_index},
#if AP_RC_CHANNEL_ENABLED
    {"RC_Channel", RC_Channel_index},
#endif // AP_RC_CHANNEL_ENABLED
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
    {"AP_RangeFinder_Backend", AP_RangeFinder_Backend_index},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if HAL_PROXIMITY_ENABLED == 1
    {"AP_Proximity_Backend", AP_Proximity_Backend_index},
#endif // HAL_PROXIMITY_ENABLED == 1
};

void load_generated_bindings(lua_State *L) {
    luaL_checkstack(L, 5, "Out of stack");
    // userdata metatables
    for (uint32_t i = 0; i < ARRAY_SIZE(userdata_fun); i++) {
        luaL_newmetatable(L, userdata_fun[i].name);
        lua_pushcclosure(L, userdata_fun[i].func, 0);
        lua_setfield(L, -2, "__index");
        if (userdata_fun[i].operators != nullptr) {
            luaL_setfuncs(L, userdata_fun[i].operators, 0);
        }
        lua_pushstring(L, "__call");
        lua_pushvalue(L, -2);
        lua_settable(L, -3);
        lua_pop(L, 1);
        lua_newuserdata(L, 0);
        luaL_getmetatable(L, userdata_fun[i].name);
        lua_setmetatable(L, -2);
        lua_setglobal(L, userdata_fun[i].name);
    }

    // ap object metatables
    for (uint32_t i = 0; i < ARRAY_SIZE(ap_object_fun); i++) {
        luaL_newmetatable(L, ap_object_fun[i].name);
        lua_pushcclosure(L, ap_object_fun[i].func, 0);
        lua_setfield(L, -2, "__index");
        lua_pushstring(L, "__call");
        lua_pushvalue(L, -2);
        lua_settable(L, -3);
        lua_pop(L, 1);
        lua_newuserdata(L, 0);
        luaL_getmetatable(L, ap_object_fun[i].name);
        lua_setmetatable(L, -2);
        lua_setglobal(L, ap_object_fun[i].name);
    }

    // singleton metatables
    for (uint32_t i = 0; i < ARRAY_SIZE(singleton_fun); i++) {
        luaL_newmetatable(L, singleton_fun[i].name);
        lua_pushcclosure(L, singleton_fun[i].func, 0);
        lua_setfield(L, -2, "__index");
        lua_pushstring(L, "__call");
        lua_pushvalue(L, -2);
        lua_settable(L, -3);
        lua_pop(L, 1);
        lua_newuserdata(L, 0);
        luaL_getmetatable(L, singleton_fun[i].name);
        lua_setmetatable(L, -2);
        lua_setglobal(L, singleton_fun[i].name);
    }

}

const struct userdata {
    const char *name;
    const lua_CFunction fun;
} new_userdata[] = {
#if AP_FILESYSTEM_FILE_READING_ENABLED
    {"stat_t", lua_new_AP_Filesystem__stat_t},
#endif // AP_FILESYSTEM_FILE_READING_ENABLED
    {"uint32_t", lua_new_uint32_t},
#if (AP_EFI_SCRIPTING_ENABLED == 1)
    {"EFI_State", lua_new_EFI_State},
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if (AP_EFI_SCRIPTING_ENABLED == 1)
    {"Cylinder_Status", lua_new_Cylinder_Status},
#endif // (AP_EFI_SCRIPTING_ENABLED == 1)
#if AP_SCRIPTING_CAN_SENSOR_ENABLED
    {"CANFrame", lua_new_AP_HAL__CANFrame},
#endif // AP_SCRIPTING_CAN_SENSOR_ENABLED
#if APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
    {"motor_factor_table", lua_new_AP_MotorsMatrix_Scripting_Dynamic__factor_table},
#endif // APM_BUILD_TYPE(APM_BUILD_ArduPlane)||APM_BUILD_COPTER_OR_HELI
#if AP_MISSION_ENABLED
    {"mavlink_mission_item_int_t", lua_new_mavlink_mission_item_int_t},
#endif // AP_MISSION_ENABLED
    {"Parameter", lua_new_Parameter},
#if (HAL_WITH_ESC_TELEM == 1)
    {"ESCTelemetryData", lua_new_AP_ESC_Telem_Backend__TelemetryData},
#endif // (HAL_WITH_ESC_TELEM == 1)
#if (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
    {"RangeFinder_State", lua_new_RangeFinder__RangeFinder_State},
#endif // (!defined(HAL_BUILD_AP_PERIPH) || defined(HAL_PERIPH_ENABLE_RANGEFINDER))
#if AP_AHRS_ENABLED
    {"Quaternion", lua_new_Quaternion},
#endif // AP_AHRS_ENABLED
    {"Vector2f", lua_new_Vector2f},
    {"Vector3f", lua_new_Vector3f},
#if AP_BATTERY_SCRIPTING_ENABLED
    {"BattMonitorScript_State", lua_new_BattMonitorScript_State},
#endif // AP_BATTERY_SCRIPTING_ENABLED
    {"Location", lua_new_Location},
    {"print", lua_print},
    {"remove", lua_removefile},
    {"dirlist", lua_dirlist},
#if AP_MISSION_ENABLED
    {"mission_receive", lua_mission_receive},
#endif // AP_MISSION_ENABLED
    {"micros", lua_micros},
    {"millis", lua_millis},
    {"PWMSource", lua_get_PWMSource},
#if (AP_NETWORKING_ENABLED==1)
    {"Socket", lua_get_SocketAPM},
#endif // (AP_NETWORKING_ENABLED==1)
};

void load_generated_sandbox(lua_State *L) {
    for (uint32_t i = 0; i < ARRAY_SIZE(singleton_fun); i++) {
        lua_pushstring(L, singleton_fun[i].name);
        lua_getglobal(L, singleton_fun[i].name);
        lua_settable(L, -3);
    }
    for (uint32_t i = 0; i < ARRAY_SIZE(new_userdata); i++) {
        lua_pushstring(L, new_userdata[i].name);
        lua_pushcfunction(L, new_userdata[i].fun);
        lua_settable(L, -3);
    }

}
#endif  // AP_SCRIPTING_ENABLED
