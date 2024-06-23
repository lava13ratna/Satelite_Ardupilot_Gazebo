#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_GETESCID_MAX_SIZE 4
#define COM_HOBBYWING_ESC_GETESCID_SIGNATURE (0x00004E2DULL)
#define COM_HOBBYWING_ESC_GETESCID_ID 20013

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_GetEscID_cxx_iface;
#endif

struct com_hobbywing_esc_GetEscID {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_GetEscID_cxx_iface;
#endif
    struct { uint8_t len; uint8_t data[3]; }payload;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_GetEscID_encode(struct com_hobbywing_esc_GetEscID* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_GetEscID_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_GetEscID* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_GetEscID_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetEscID* msg, bool tao);
static inline bool _com_hobbywing_esc_GetEscID_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetEscID* msg, bool tao);
void _com_hobbywing_esc_GetEscID_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetEscID* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    if (!tao) {
        canardEncodeScalar(buffer, *bit_ofs, 2, &msg->payload.len);
        *bit_ofs += 2;
    }
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t payload_len = msg->payload.len > 3 ? 3 : msg->payload.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < payload_len; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 8, &msg->payload.data[i]);
        *bit_ofs += 8;
    }
}

/*
 decode com_hobbywing_esc_GetEscID, return true on failure, false on success
*/
bool _com_hobbywing_esc_GetEscID_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetEscID* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    if (!tao) {
        canardDecodeScalar(transfer, *bit_ofs, 2, false, &msg->payload.len);
        *bit_ofs += 2;
    } else {
        msg->payload.len = ((transfer->payload_len*8)-*bit_ofs)/8;
    }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->payload.len > 3) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->payload.len; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->payload.data[i]);
        *bit_ofs += 8;
    }

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_GetEscID sample_com_hobbywing_esc_GetEscID_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_hobbywing_esc_GetEscID, COM_HOBBYWING_ESC_GETESCID_ID, COM_HOBBYWING_ESC_GETESCID_SIGNATURE, COM_HOBBYWING_ESC_GETESCID_MAX_SIZE);
#endif
#endif
