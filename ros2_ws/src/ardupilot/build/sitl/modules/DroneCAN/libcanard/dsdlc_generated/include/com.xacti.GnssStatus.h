#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_XACTI_GNSSSTATUS_MAX_SIZE 33
#define COM_XACTI_GNSSSTATUS_SIGNATURE (0x3413AC5D3E1DCBE3ULL)
#define COM_XACTI_GNSSSTATUS_ID 20305

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_xacti_GnssStatus_cxx_iface;
#endif

struct com_xacti_GnssStatus {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_xacti_GnssStatus_cxx_iface;
#endif
    uint8_t gps_status;
    uint8_t order;
    uint8_t remain_buffer;
    uint16_t utc_year;
    uint8_t utc_month;
    uint8_t utc_day;
    uint8_t utc_hour;
    uint8_t utc_minute;
    float utc_seconds;
    double latitude;
    double longitude;
    float altitude;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_xacti_GnssStatus_encode(struct com_xacti_GnssStatus* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_xacti_GnssStatus_decode(const CanardRxTransfer* transfer, struct com_xacti_GnssStatus* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_xacti_GnssStatus_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GnssStatus* msg, bool tao);
static inline bool _com_xacti_GnssStatus_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GnssStatus* msg, bool tao);
void _com_xacti_GnssStatus_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_xacti_GnssStatus* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->gps_status);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->order);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->remain_buffer);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->utc_year);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->utc_month);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->utc_day);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->utc_hour);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->utc_minute);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->utc_seconds);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 64, &msg->latitude);
    *bit_ofs += 64;
    canardEncodeScalar(buffer, *bit_ofs, 64, &msg->longitude);
    *bit_ofs += 64;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->altitude);
    *bit_ofs += 32;
}

/*
 decode com_xacti_GnssStatus, return true on failure, false on success
*/
bool _com_xacti_GnssStatus_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_xacti_GnssStatus* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->gps_status);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->order);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->remain_buffer);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->utc_year);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->utc_month);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->utc_day);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->utc_hour);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->utc_minute);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->utc_seconds);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 64, true, &msg->latitude);
    *bit_ofs += 64;

    canardDecodeScalar(transfer, *bit_ofs, 64, true, &msg->longitude);
    *bit_ofs += 64;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->altitude);
    *bit_ofs += 32;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_xacti_GnssStatus sample_com_xacti_GnssStatus_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_xacti_GnssStatus, COM_XACTI_GNSSSTATUS_ID, COM_XACTI_GNSSSTATUS_SIGNATURE, COM_XACTI_GNSSSTATUS_MAX_SIZE);
#endif
#endif
