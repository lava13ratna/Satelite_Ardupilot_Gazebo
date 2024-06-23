#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_SETDIRECTION_RESPONSE_MAX_SIZE 1
#define COM_HOBBYWING_ESC_SETDIRECTION_RESPONSE_SIGNATURE (0x9D793111D262BA68ULL)
#define COM_HOBBYWING_ESC_SETDIRECTION_RESPONSE_ID 213

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_SetDirection_cxx_iface;
#endif

struct com_hobbywing_esc_SetDirectionResponse {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_SetDirection_cxx_iface;
#endif
    uint8_t direction;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_SetDirectionResponse_encode(struct com_hobbywing_esc_SetDirectionResponse* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_SetDirectionResponse_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_SetDirectionResponse* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_SetDirectionResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetDirectionResponse* msg, bool tao);
static inline bool _com_hobbywing_esc_SetDirectionResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetDirectionResponse* msg, bool tao);
void _com_hobbywing_esc_SetDirectionResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetDirectionResponse* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->direction);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_SetDirectionResponse, return true on failure, false on success
*/
bool _com_hobbywing_esc_SetDirectionResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetDirectionResponse* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->direction);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_SetDirectionResponse sample_com_hobbywing_esc_SetDirectionResponse_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
