#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_SETID_RESPONSE_MAX_SIZE 2
#define COM_HOBBYWING_ESC_SETID_RESPONSE_SIGNATURE (0xC323CB5E9EC2B6F7ULL)
#define COM_HOBBYWING_ESC_SETID_RESPONSE_ID 210

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_SetID_cxx_iface;
#endif

struct com_hobbywing_esc_SetIDResponse {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_SetID_cxx_iface;
#endif
    uint8_t node_id;
    uint8_t throttle_channel;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_SetIDResponse_encode(struct com_hobbywing_esc_SetIDResponse* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_SetIDResponse_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_SetIDResponse* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_SetIDResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetIDResponse* msg, bool tao);
static inline bool _com_hobbywing_esc_SetIDResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetIDResponse* msg, bool tao);
void _com_hobbywing_esc_SetIDResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetIDResponse* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->node_id);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->throttle_channel);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_SetIDResponse, return true on failure, false on success
*/
bool _com_hobbywing_esc_SetIDResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetIDResponse* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->node_id);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->throttle_channel);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_SetIDResponse sample_com_hobbywing_esc_SetIDResponse_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
