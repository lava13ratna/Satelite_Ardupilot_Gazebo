#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_SETLED_REQUEST_MAX_SIZE 3
#define COM_HOBBYWING_ESC_SETLED_REQUEST_SIGNATURE (0xB493BD48C0853EE5ULL)
#define COM_HOBBYWING_ESC_SETLED_REQUEST_ID 212

#define COM_HOBBYWING_ESC_SETLED_REQUEST_OPTION_SAVE 1
#define COM_HOBBYWING_ESC_SETLED_REQUEST_COLOR_R 4
#define COM_HOBBYWING_ESC_SETLED_REQUEST_COLOR_G 2
#define COM_HOBBYWING_ESC_SETLED_REQUEST_COLOR_B 1
#define COM_HOBBYWING_ESC_SETLED_REQUEST_BLINK_OFF 0
#define COM_HOBBYWING_ESC_SETLED_REQUEST_BLINK_1HZ 1
#define COM_HOBBYWING_ESC_SETLED_REQUEST_BLINK_2HZ 2
#define COM_HOBBYWING_ESC_SETLED_REQUEST_BLINK_5HZ 5

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_SetLED_cxx_iface;
#endif

struct com_hobbywing_esc_SetLEDRequest {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_SetLED_cxx_iface;
#endif
    uint8_t option;
    uint8_t color;
    uint8_t blink;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_SetLEDRequest_encode(struct com_hobbywing_esc_SetLEDRequest* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_SetLEDRequest_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_SetLEDRequest* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_SetLEDRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetLEDRequest* msg, bool tao);
static inline bool _com_hobbywing_esc_SetLEDRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetLEDRequest* msg, bool tao);
void _com_hobbywing_esc_SetLEDRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetLEDRequest* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->option);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->color);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->blink);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_SetLEDRequest, return true on failure, false on success
*/
bool _com_hobbywing_esc_SetLEDRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetLEDRequest* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->option);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->color);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->blink);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_SetLEDRequest sample_com_hobbywing_esc_SetLEDRequest_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
