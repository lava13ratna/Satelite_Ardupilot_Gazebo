#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_MAX_SIZE 25
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_SIGNATURE (0x756B561340D5E4AEULL)
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_ID 20010

#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_READY_TO_USE 1
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_CHARGING 2
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_CELL_BALANCING 4
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_CELL_IMBALANCE 8
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_AUTO_DISCHARGING 16
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_REQUIRES_SERVICE 32
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_BAD_BATTERY 64
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_PROTECTIONS_ENABLED 128
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_PROTECTION_SYSTEM 256
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_OVER_VOLT 512
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_UNDER_VOLT 1024
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_OVER_TEMP 2048
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_UNDER_TEMP 4096
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_OVER_CURRENT 8192
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_SHORT_CIRCUIT 16384
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_INCOMPATIBLE_VOLTAGE 32768
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_INCOMPATIBLE_FIRMWARE 65536
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_FAULT_INCOMPATIBLE_CELLS_CONFIGURATION 131072
#define ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_STATUS_FLAG_CAPACITY_RELATIVE_TO_FULL 262144

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class ardupilot_equipment_power_BatteryContinuous_cxx_iface;
#endif

struct ardupilot_equipment_power_BatteryContinuous {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = ardupilot_equipment_power_BatteryContinuous_cxx_iface;
#endif
    float temperature_cells;
    float temperature_pcb;
    float temperature_other;
    float current;
    float voltage;
    float state_of_charge;
    uint8_t slot_id;
    float capacity_consumed;
    uint32_t status_flags;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t ardupilot_equipment_power_BatteryContinuous_encode(struct ardupilot_equipment_power_BatteryContinuous* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool ardupilot_equipment_power_BatteryContinuous_decode(const CanardRxTransfer* transfer, struct ardupilot_equipment_power_BatteryContinuous* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _ardupilot_equipment_power_BatteryContinuous_encode(uint8_t* buffer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryContinuous* msg, bool tao);
static inline bool _ardupilot_equipment_power_BatteryContinuous_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryContinuous* msg, bool tao);
void _ardupilot_equipment_power_BatteryContinuous_encode(uint8_t* buffer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryContinuous* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->temperature_cells);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->temperature_pcb);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->temperature_other);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->current);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->voltage);
    *bit_ofs += 32;
    {
        uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->state_of_charge);
        canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
    }
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->slot_id);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->capacity_consumed);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->status_flags);
    *bit_ofs += 32;
}

/*
 decode ardupilot_equipment_power_BatteryContinuous, return true on failure, false on success
*/
bool _ardupilot_equipment_power_BatteryContinuous_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct ardupilot_equipment_power_BatteryContinuous* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->temperature_cells = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->temperature_pcb = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->temperature_other = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->current);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->voltage);
    *bit_ofs += 32;

    {
        uint16_t float16_val;
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
        msg->state_of_charge = canardConvertFloat16ToNativeFloat(float16_val);
    }
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->slot_id);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->capacity_consumed);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->status_flags);
    *bit_ofs += 32;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct ardupilot_equipment_power_BatteryContinuous sample_ardupilot_equipment_power_BatteryContinuous_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(ardupilot_equipment_power_BatteryContinuous, ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_ID, ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_SIGNATURE, ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_MAX_SIZE);
#endif
#endif
