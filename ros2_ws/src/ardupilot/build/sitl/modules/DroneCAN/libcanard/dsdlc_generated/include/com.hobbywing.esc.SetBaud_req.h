#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_MAX_SIZE 1
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_SIGNATURE (0xADA98653B52DE435ULL)
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_ID 211

#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_BAUD_1MBPS 0
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_BAUD_500KBPS 1
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_BAUD_250KBPS 2
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_BAUD_200KBPS 3
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_BAUD_100KBPS 4
#define COM_HOBBYWING_ESC_SETBAUD_REQUEST_BAUD_50KBPS 5

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_SetBaud_cxx_iface;
#endif

struct com_hobbywing_esc_SetBaudRequest {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_SetBaud_cxx_iface;
#endif
    uint8_t baud;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_SetBaudRequest_encode(struct com_hobbywing_esc_SetBaudRequest* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_SetBaudRequest_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_SetBaudRequest* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_SetBaudRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetBaudRequest* msg, bool tao);
static inline bool _com_hobbywing_esc_SetBaudRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetBaudRequest* msg, bool tao);
void _com_hobbywing_esc_SetBaudRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetBaudRequest* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->baud);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_SetBaudRequest, return true on failure, false on success
*/
bool _com_hobbywing_esc_SetBaudRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetBaudRequest* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->baud);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_SetBaudRequest sample_com_hobbywing_esc_SetBaudRequest_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
