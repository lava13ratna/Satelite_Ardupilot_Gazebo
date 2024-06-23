#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_GETMAJORCONFIG_RESPONSE_MAX_SIZE 7
#define COM_HOBBYWING_ESC_GETMAJORCONFIG_RESPONSE_SIGNATURE (0x1506774DA3930BFDULL)
#define COM_HOBBYWING_ESC_GETMAJORCONFIG_RESPONSE_ID 242

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_GetMajorConfig_cxx_iface;
#endif

struct com_hobbywing_esc_GetMajorConfigResponse {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_GetMajorConfig_cxx_iface;
#endif
    bool direction;
    bool throttle_source;
    uint8_t throttle_channel;
    uint8_t led_status;
    uint8_t led_color;
    uint8_t MSG2_rate;
    uint8_t MSG1_rate;
    uint16_t positioning_angle;
    uint8_t reserved[2];
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_GetMajorConfigResponse_encode(struct com_hobbywing_esc_GetMajorConfigResponse* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_GetMajorConfigResponse_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_GetMajorConfigResponse* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_GetMajorConfigResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMajorConfigResponse* msg, bool tao);
static inline bool _com_hobbywing_esc_GetMajorConfigResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMajorConfigResponse* msg, bool tao);
void _com_hobbywing_esc_GetMajorConfigResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMajorConfigResponse* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 1, &msg->direction);
    *bit_ofs += 1;
    canardEncodeScalar(buffer, *bit_ofs, 1, &msg->throttle_source);
    *bit_ofs += 1;
    canardEncodeScalar(buffer, *bit_ofs, 6, &msg->throttle_channel);
    *bit_ofs += 6;
    canardEncodeScalar(buffer, *bit_ofs, 5, &msg->led_status);
    *bit_ofs += 5;
    canardEncodeScalar(buffer, *bit_ofs, 3, &msg->led_color);
    *bit_ofs += 3;
    canardEncodeScalar(buffer, *bit_ofs, 4, &msg->MSG2_rate);
    *bit_ofs += 4;
    canardEncodeScalar(buffer, *bit_ofs, 4, &msg->MSG1_rate);
    *bit_ofs += 4;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->positioning_angle);
    *bit_ofs += 16;
    for (size_t i=0; i < 2; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 8, &msg->reserved[i]);
        *bit_ofs += 8;
    }
}

/*
 decode com_hobbywing_esc_GetMajorConfigResponse, return true on failure, false on success
*/
bool _com_hobbywing_esc_GetMajorConfigResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMajorConfigResponse* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 1, false, &msg->direction);
    *bit_ofs += 1;

    canardDecodeScalar(transfer, *bit_ofs, 1, false, &msg->throttle_source);
    *bit_ofs += 1;

    canardDecodeScalar(transfer, *bit_ofs, 6, false, &msg->throttle_channel);
    *bit_ofs += 6;

    canardDecodeScalar(transfer, *bit_ofs, 5, false, &msg->led_status);
    *bit_ofs += 5;

    canardDecodeScalar(transfer, *bit_ofs, 3, false, &msg->led_color);
    *bit_ofs += 3;

    canardDecodeScalar(transfer, *bit_ofs, 4, false, &msg->MSG2_rate);
    *bit_ofs += 4;

    canardDecodeScalar(transfer, *bit_ofs, 4, false, &msg->MSG1_rate);
    *bit_ofs += 4;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->positioning_angle);
    *bit_ofs += 16;

    for (size_t i=0; i < 2; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->reserved[i]);
        *bit_ofs += 8;
    }

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_GetMajorConfigResponse sample_com_hobbywing_esc_GetMajorConfigResponse_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
