#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_MAX_SIZE 125
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_SIGNATURE (0xF012494E97358D2ULL)
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_ID 20011

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class ardupilot_equipment_power_BatteryPeriodic_cxx_iface;
#endif

struct ardupilot_equipment_power_BatteryPeriodic {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = ardupilot_equipment_power_BatteryPeriodic_cxx_iface;
#endif
    struct { uint8_t len; uint8_t data[50]; }name;
    struct { uint8_t len; uint8_t data[32]; }serial_number;
    struct { uint8_t len; uint8_t data[9]; }manufacture_date;
    float design_capacity;
    uint8_t cells_in_series;
    float nominal_voltage;
    float discharge_minimum_voltage;
    float charging_minimum_voltage;
    float charging_maximum_voltage;
    float charging_maximum_current;
    float discharge_maximum_current;
    float discharge_maximum_burst_current;
    float full_charge_capacity;
    uint16_t cycle_count;
    uint8_t state_of_health;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t ardupilot_equipment_power_BatteryPeriodic_encode(struct ardupilot_equipment_power_BatteryPeriodic* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool ardupilot_equipment_power_BatteryPeriodic_decode(const CanardRxTransfer* transfer, struct ardupilot_equipment_power_BatteryPeriodic* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _ardupilot_equipment_power_BatteryPeriodic_encode(uint8_t* buffer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryPeriodic* msg, bool tao);
static inline bool _ardupilot_equipment_power_BatteryPeriodic_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryPeriodic* msg, bool tao);
void _ardupilot_equipment_power_BatteryPeriodic_encode(uint8_t* buffer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryPeriodic* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 6, &msg->name.len);
    *bit_ofs += 6;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t name_len = msg->name.len > 50 ? 50 : msg->name.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < name_len; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 8, &msg->name.data[i]);
        *bit_ofs += 8;
    }
    canardEncodeScalar(buffer, *bit_ofs, 6, &msg->serial_number.len);
    *bit_ofs += 6;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t serial_number_len = msg->serial_number.len > 32 ? 32 : msg->serial_number.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < serial_number_len; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 8, &msg->serial_number.data[i]);
        *bit_ofs += 8;
    }
    canardEncodeScalar(buffer, *bit_ofs, 4, &msg->manufacture_date.len);
    *bit_ofs += 4;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t manufacture_date_len = msg->manufacture_date.len > 9 ? 9 : msg->manufacture_date.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < manufacture_date_len; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 8, &msg->manufacture_date.data[i]);
        *bit_ofs += 8;
    }
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->design_capacity);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->cells_in_series);
    *bit_ofs += 8;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->nominal_voltage);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->discharge_minimum_voltage);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->charging_minimum_voltage);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->charging_maximum_voltage);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->charging_maximum_current);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->discharge_maximum_current);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->discharge_maximum_burst_current);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->full_charge_capacity);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->cycle_count);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->state_of_health);
    *bit_ofs += 8;
}

/*
 decode ardupilot_equipment_power_BatteryPeriodic, return true on failure, false on success
*/
bool _ardupilot_equipment_power_BatteryPeriodic_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryPeriodic* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 6, false, &msg->name.len);
    *bit_ofs += 6;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->name.len > 50) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->name.len; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->name.data[i]);
        *bit_ofs += 8;
    }

    canardDecodeScalar(transfer, *bit_ofs, 6, false, &msg->serial_number.len);
    *bit_ofs += 6;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->serial_number.len > 32) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->serial_number.len; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->serial_number.data[i]);
        *bit_ofs += 8;
    }

    canardDecodeScalar(transfer, *bit_ofs, 4, false, &msg->manufacture_date.len);
    *bit_ofs += 4;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->manufacture_date.len > 9) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->manufacture_date.len; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->manufacture_date.data[i]);
        *bit_ofs += 8;
    }

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->design_capacity);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->cells_in_series);
    *bit_ofs += 8;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->nominal_voltage = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->discharge_minimum_voltage = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->charging_minimum_voltage = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->charging_maximum_voltage = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->charging_maximum_current);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->discharge_maximum_current);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->discharge_maximum_burst_current);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->full_charge_capacity);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->cycle_count);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->state_of_health);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct ardupilot_equipment_power_BatteryPeriodic sample_ardupilot_equipment_power_BatteryPeriodic_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(ardupilot_equipment_power_BatteryPeriodic, ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_ID, ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_SIGNATURE, ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_MAX_SIZE);
#endif
#endif
