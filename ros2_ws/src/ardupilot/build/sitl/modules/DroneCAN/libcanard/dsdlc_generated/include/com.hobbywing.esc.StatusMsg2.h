#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_STATUSMSG2_MAX_SIZE 5
#define COM_HOBBYWING_ESC_STATUSMSG2_SIGNATURE (0x1675DA01C3B91297ULL)
#define COM_HOBBYWING_ESC_STATUSMSG2_ID 20051

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_StatusMsg2_cxx_iface;
#endif

struct com_hobbywing_esc_StatusMsg2 {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_StatusMsg2_cxx_iface;
#endif
    int16_t input_voltage;
    int16_t current;
    uint8_t temperature;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_StatusMsg2_encode(struct com_hobbywing_esc_StatusMsg2* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_StatusMsg2_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_StatusMsg2* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_StatusMsg2_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg2* msg, bool tao);
static inline bool _com_hobbywing_esc_StatusMsg2_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg2* msg, bool tao);
void _com_hobbywing_esc_StatusMsg2_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg2* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->input_voltage);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->current);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->temperature);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_StatusMsg2, return true on failure, false on success
*/
bool _com_hobbywing_esc_StatusMsg2_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg2* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->input_voltage);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->current);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->temperature);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_StatusMsg2 sample_com_hobbywing_esc_StatusMsg2_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_hobbywing_esc_StatusMsg2, COM_HOBBYWING_ESC_STATUSMSG2_ID, COM_HOBBYWING_ESC_STATUSMSG2_SIGNATURE, COM_HOBBYWING_ESC_STATUSMSG2_MAX_SIZE);
#endif
#endif
