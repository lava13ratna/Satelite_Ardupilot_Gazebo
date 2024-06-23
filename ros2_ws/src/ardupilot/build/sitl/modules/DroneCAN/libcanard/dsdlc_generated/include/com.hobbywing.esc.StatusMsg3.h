#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_STATUSMSG3_MAX_SIZE 3
#define COM_HOBBYWING_ESC_STATUSMSG3_SIGNATURE (0x24919CD1EB34ECE9ULL)
#define COM_HOBBYWING_ESC_STATUSMSG3_ID 20052

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_StatusMsg3_cxx_iface;
#endif

struct com_hobbywing_esc_StatusMsg3 {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_StatusMsg3_cxx_iface;
#endif
    uint8_t MOS_T;
    uint8_t CAP_T;
    uint8_t Motor_T;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_StatusMsg3_encode(struct com_hobbywing_esc_StatusMsg3* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_StatusMsg3_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_StatusMsg3* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_StatusMsg3_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg3* msg, bool tao);
static inline bool _com_hobbywing_esc_StatusMsg3_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg3* msg, bool tao);
void _com_hobbywing_esc_StatusMsg3_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg3* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->MOS_T);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->CAP_T);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->Motor_T);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_StatusMsg3, return true on failure, false on success
*/
bool _com_hobbywing_esc_StatusMsg3_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_StatusMsg3* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->MOS_T);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->CAP_T);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->Motor_T);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_StatusMsg3 sample_com_hobbywing_esc_StatusMsg3_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_hobbywing_esc_StatusMsg3, COM_HOBBYWING_ESC_STATUSMSG3_ID, COM_HOBBYWING_ESC_STATUSMSG3_SIGNATURE, COM_HOBBYWING_ESC_STATUSMSG3_MAX_SIZE);
#endif
#endif
