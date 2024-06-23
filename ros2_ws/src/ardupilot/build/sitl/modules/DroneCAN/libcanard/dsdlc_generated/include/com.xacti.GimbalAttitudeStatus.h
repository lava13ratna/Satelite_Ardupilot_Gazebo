#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_XACTI_GIMBALATTITUDESTATUS_MAX_SIZE 12
#define COM_XACTI_GIMBALATTITUDESTATUS_SIGNATURE (0xEB428B6C25832692ULL)
#define COM_XACTI_GIMBALATTITUDESTATUS_ID 20402

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_xacti_GimbalAttitudeStatus_cxx_iface;
#endif

struct com_xacti_GimbalAttitudeStatus {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_xacti_GimbalAttitudeStatus_cxx_iface;
#endif
    int16_t gimbal_roll;
    int16_t gimbal_pitch;
    int16_t gimbal_yaw;
    int16_t magneticencoder_roll;
    int16_t magneticencoder_pitch;
    int16_t magneticencoder_yaw;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_xacti_GimbalAttitudeStatus_encode(struct com_xacti_GimbalAttitudeStatus* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_xacti_GimbalAttitudeStatus_decode(const CanardRxTransfer* transfer, struct com_xacti_GimbalAttitudeStatus* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_xacti_GimbalAttitudeStatus_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GimbalAttitudeStatus* msg, bool tao);
static inline bool _com_xacti_GimbalAttitudeStatus_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GimbalAttitudeStatus* msg, bool tao);
void _com_xacti_GimbalAttitudeStatus_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GimbalAttitudeStatus* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->gimbal_roll);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->gimbal_pitch);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->gimbal_yaw);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->magneticencoder_roll);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->magneticencoder_pitch);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->magneticencoder_yaw);
    *bit_ofs += 16;
}

/*
 decode com_xacti_GimbalAttitudeStatus, return true on failure, false on success
*/
bool _com_xacti_GimbalAttitudeStatus_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GimbalAttitudeStatus* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->gimbal_roll);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->gimbal_pitch);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->gimbal_yaw);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->magneticencoder_roll);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->magneticencoder_pitch);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->magneticencoder_yaw);
    *bit_ofs += 16;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_xacti_GimbalAttitudeStatus sample_com_xacti_GimbalAttitudeStatus_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_xacti_GimbalAttitudeStatus, COM_XACTI_GIMBALATTITUDESTATUS_ID, COM_XACTI_GIMBALATTITUDESTATUS_SIGNATURE, COM_XACTI_GIMBALATTITUDESTATUS_MAX_SIZE);
#endif
#endif
