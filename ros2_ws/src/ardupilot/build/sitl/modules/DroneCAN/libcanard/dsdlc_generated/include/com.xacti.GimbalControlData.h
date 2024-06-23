#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_XACTI_GIMBALCONTROLDATA_MAX_SIZE 6
#define COM_XACTI_GIMBALCONTROLDATA_SIGNATURE (0x3B058FA5B150C5BEULL)
#define COM_XACTI_GIMBALCONTROLDATA_ID 20554

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_xacti_GimbalControlData_cxx_iface;
#endif

struct com_xacti_GimbalControlData {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_xacti_GimbalControlData_cxx_iface;
#endif
    uint8_t pitch_cmd_type;
    uint8_t yaw_cmd_type;
    uint16_t pitch_cmd_value;
    uint16_t yaw_cmd_value;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_xacti_GimbalControlData_encode(struct com_xacti_GimbalControlData* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_xacti_GimbalControlData_decode(const CanardRxTransfer* transfer, struct com_xacti_GimbalControlData* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_xacti_GimbalControlData_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GimbalControlData* msg, bool tao);
static inline bool _com_xacti_GimbalControlData_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GimbalControlData* msg, bool tao);
void _com_xacti_GimbalControlData_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GimbalControlData* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->pitch_cmd_type);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->yaw_cmd_type);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->pitch_cmd_value);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->yaw_cmd_value);
    *bit_ofs += 16;
}

/*
 decode com_xacti_GimbalControlData, return true on failure, false on success
*/
bool _com_xacti_GimbalControlData_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GimbalControlData* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->pitch_cmd_type);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->yaw_cmd_type);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->pitch_cmd_value);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->yaw_cmd_value);
    *bit_ofs += 16;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_xacti_GimbalControlData sample_com_xacti_GimbalControlData_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_xacti_GimbalControlData, COM_XACTI_GIMBALCONTROLDATA_ID, COM_XACTI_GIMBALCONTROLDATA_SIGNATURE, COM_XACTI_GIMBALCONTROLDATA_MAX_SIZE);
#endif
#endif
