#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_XACTI_GNSSSTATUSREQ_MAX_SIZE 1
#define COM_XACTI_GNSSSTATUSREQ_SIGNATURE (0x60F5464E1CA03449ULL)
#define COM_XACTI_GNSSSTATUSREQ_ID 20306

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_xacti_GnssStatusReq_cxx_iface;
#endif

struct com_xacti_GnssStatusReq {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_xacti_GnssStatusReq_cxx_iface;
#endif
    uint8_t requirement;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_xacti_GnssStatusReq_encode(struct com_xacti_GnssStatusReq* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_xacti_GnssStatusReq_decode(const CanardRxTransfer* transfer, struct com_xacti_GnssStatusReq* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_xacti_GnssStatusReq_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GnssStatusReq* msg, bool tao);
static inline bool _com_xacti_GnssStatusReq_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GnssStatusReq* msg, bool tao);
void _com_xacti_GnssStatusReq_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GnssStatusReq* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->requirement);
    *bit_ofs += 8;
}

/*
 decode com_xacti_GnssStatusReq, return true on failure, false on success
*/
bool _com_xacti_GnssStatusReq_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GnssStatusReq* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->requirement);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_xacti_GnssStatusReq sample_com_xacti_GnssStatusReq_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_xacti_GnssStatusReq, COM_XACTI_GNSSSTATUSREQ_ID, COM_XACTI_GNSSSTATUSREQ_SIGNATURE, COM_XACTI_GNSSSTATUSREQ_MAX_SIZE);
#endif
#endif
