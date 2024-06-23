#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_XACTI_COPTERATTSTATUS_MAX_SIZE 13
#define COM_XACTI_COPTERATTSTATUS_SIGNATURE (0x6C1F30F1893763B1ULL)
#define COM_XACTI_COPTERATTSTATUS_ID 20407

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_xacti_CopterAttStatus_cxx_iface;
#endif

struct com_xacti_CopterAttStatus {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_xacti_CopterAttStatus_cxx_iface;
#endif
    int16_t quaternion_wxyz_e4[4];
    struct { uint8_t len; float data[2]; }reserved;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_xacti_CopterAttStatus_encode(struct com_xacti_CopterAttStatus* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_xacti_CopterAttStatus_decode(const CanardRxTransfer* transfer, struct com_xacti_CopterAttStatus* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_xacti_CopterAttStatus_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_CopterAttStatus* msg, bool tao);
static inline bool _com_xacti_CopterAttStatus_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_CopterAttStatus* msg, bool tao);
void _com_xacti_CopterAttStatus_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_CopterAttStatus* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    for (size_t i=0; i < 4; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 16, &msg->quaternion_wxyz_e4[i]);
        *bit_ofs += 16;
    }
    if (!tao) {
        canardEncodeScalar(buffer, *bit_ofs, 2, &msg->reserved.len);
        *bit_ofs += 2;
    }
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t reserved_len = msg->reserved.len > 2 ? 2 : msg->reserved.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < reserved_len; i++) {
        {
            uint16_t float16_val = canardConvertNativeFloatToFloat16(msg->reserved.data[i]);
            canardEncodeScalar(buffer, *bit_ofs, 16, &float16_val);
        }
        *bit_ofs += 16;
    }
}

/*
 decode com_xacti_CopterAttStatus, return true on failure, false on success
*/
bool _com_xacti_CopterAttStatus_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_CopterAttStatus* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    for (size_t i=0; i < 4; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->quaternion_wxyz_e4[i]);
        *bit_ofs += 16;
    }

    if (!tao) {
        canardDecodeScalar(transfer, *bit_ofs, 2, false, &msg->reserved.len);
        *bit_ofs += 2;
    } else {
        msg->reserved.len = ((transfer->payload_len*8)-*bit_ofs)/16;
    }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->reserved.len > 2) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->reserved.len; i++) {
        {
            uint16_t float16_val;
            canardDecodeScalar(transfer, *bit_ofs, 16, true, &float16_val);
            msg->reserved.data[i] = canardConvertFloat16ToNativeFloat(float16_val);
        }
        *bit_ofs += 16;
    }

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_xacti_CopterAttStatus sample_com_xacti_CopterAttStatus_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_xacti_CopterAttStatus, COM_XACTI_COPTERATTSTATUS_ID, COM_XACTI_COPTERATTSTATUS_SIGNATURE, COM_XACTI_COPTERATTSTATUS_MAX_SIZE);
#endif
#endif
