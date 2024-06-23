#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_STATUSMSG1_MAX_SIZE 6
#define COM_HOBBYWING_ESC_STATUSMSG1_SIGNATURE (0x813B3E2C4AD670EULL)
#define COM_HOBBYWING_ESC_STATUSMSG1_ID 20050

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_StatusMsg1_cxx_iface;
#endif

struct com_hobbywing_esc_StatusMsg1 {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_StatusMsg1_cxx_iface;
#endif
    uint16_t rpm;
    uint16_t pwm;
    uint16_t status;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_StatusMsg1_encode(struct com_hobbywing_esc_StatusMsg1* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_StatusMsg1_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_StatusMsg1* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_StatusMsg1_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg1* msg, bool tao);
static inline bool _com_hobbywing_esc_StatusMsg1_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg1* msg, bool tao);
void _com_hobbywing_esc_StatusMsg1_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg1* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->rpm);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->pwm);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->status);
    *bit_ofs += 16;
}

/*
 decode com_hobbywing_esc_StatusMsg1, return true on failure, false on success
*/
bool _com_hobbywing_esc_StatusMsg1_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg1* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->rpm);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->pwm);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->status);
    *bit_ofs += 16;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_StatusMsg1 sample_com_hobbywing_esc_StatusMsg1_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_hobbywing_esc_StatusMsg1, COM_HOBBYWING_ESC_STATUSMSG1_ID, COM_HOBBYWING_ESC_STATUSMSG1_SIGNATURE, COM_HOBBYWING_ESC_STATUSMSG1_MAX_SIZE);
#endif
#endif
