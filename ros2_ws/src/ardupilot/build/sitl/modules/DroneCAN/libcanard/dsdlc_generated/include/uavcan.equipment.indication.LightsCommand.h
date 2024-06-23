#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>
#include <uavcan.equipment.indication.SingleLightCommand.h>


#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_MAX_SIZE 61
#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_SIGNATURE (0x2031D93C8BDD1EC4ULL)
#define UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_ID 1081

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class uavcan_equipment_indication_LightsCommand_cxx_iface;
#endif

struct uavcan_equipment_indication_LightsCommand {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = uavcan_equipment_indication_LightsCommand_cxx_iface;
#endif
    struct { uint8_t len; struct uavcan_equipment_indication_SingleLightCommand data[20]; }commands;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t uavcan_equipment_indication_LightsCommand_encode(struct uavcan_equipment_indication_LightsCommand* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool uavcan_equipment_indication_LightsCommand_decode(const CanardRxTransfer* transfer, struct uavcan_equipment_indication_LightsCommand* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _uavcan_equipment_indication_LightsCommand_encode(uint8_t* buffer, uint32_t* bit_ofs, struct uavcan_equipment_indication_LightsCommand* msg, bool tao);
static inline bool _uavcan_equipment_indication_LightsCommand_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct uavcan_equipment_indication_LightsCommand* msg, bool tao);
void _uavcan_equipment_indication_LightsCommand_encode(uint8_t* buffer, uint32_t* bit_ofs, struct uavcan_equipment_indication_LightsCommand* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    if (!tao) {
        canardEncodeScalar(buffer, *bit_ofs, 5, &msg->commands.len);
        *bit_ofs += 5;
    }
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t commands_len = msg->commands.len > 20 ? 20 : msg->commands.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < commands_len; i++) {
        _uavcan_equipment_indication_SingleLightCommand_encode(buffer, bit_ofs, &msg->commands.data[i], false);
    }
}

/*
 decode uavcan_equipment_indication_LightsCommand, return true on failure, false on success
*/
bool _uavcan_equipment_indication_LightsCommand_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct uavcan_equipment_indication_LightsCommand* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    if (!tao) {
        canardDecodeScalar(transfer, *bit_ofs, 5, false, &msg->commands.len);
        *bit_ofs += 5;
    }


    if (tao) {
        msg->commands.len = 0;
        while ((transfer->payload_len*8) > *bit_ofs) {
            if (_uavcan_equipment_indication_SingleLightCommand_decode(transfer, bit_ofs, &msg->commands.data[msg->commands.len], false)) {return true;}
            msg->commands.len++;
        }
    } else {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
        if (msg->commands.len > 20) {
            return true; /* invalid value */
        }
#pragma GCC diagnostic pop
        for (size_t i=0; i < msg->commands.len; i++) {
            if (_uavcan_equipment_indication_SingleLightCommand_decode(transfer, bit_ofs, &msg->commands.data[i], false)) {return true;}
        }
    }

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct uavcan_equipment_indication_LightsCommand sample_uavcan_equipment_indication_LightsCommand_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(uavcan_equipment_indication_LightsCommand, UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_ID, UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_SIGNATURE, UAVCAN_EQUIPMENT_INDICATION_LIGHTSCOMMAND_MAX_SIZE);
#endif
#endif
