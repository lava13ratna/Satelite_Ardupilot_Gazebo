#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_TMOTOR_ESC_FOCCTRL_MAX_SIZE 8
#define COM_TMOTOR_ESC_FOCCTRL_SIGNATURE (0x598143612FBC000BULL)
#define COM_TMOTOR_ESC_FOCCTRL_ID 1035

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_tmotor_esc_FocCtrl_cxx_iface;
#endif

struct com_tmotor_esc_FocCtrl {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_tmotor_esc_FocCtrl_cxx_iface;
#endif
    uint8_t esc_index;
    uint8_t esc_mode;
    uint8_t esc_fdb_rate;
    uint8_t esc_cmd;
    int32_t esc_cmd_val;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_tmotor_esc_FocCtrl_encode(struct com_tmotor_esc_FocCtrl* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_tmotor_esc_FocCtrl_decode(const CanardRxTransfer* transfer, struct com_tmotor_esc_FocCtrl* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_tmotor_esc_FocCtrl_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_tmotor_esc_FocCtrl* msg, bool tao);
static inline bool _com_tmotor_esc_FocCtrl_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_tmotor_esc_FocCtrl* msg, bool tao);
void _com_tmotor_esc_FocCtrl_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_tmotor_esc_FocCtrl* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_index);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_mode);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_fdb_rate);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_cmd);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->esc_cmd_val);
    *bit_ofs += 32;
}

/*
 decode com_tmotor_esc_FocCtrl, return true on failure, false on success
*/
bool _com_tmotor_esc_FocCtrl_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_tmotor_esc_FocCtrl* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_index);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_mode);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_fdb_rate);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_cmd);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 32, true, &msg->esc_cmd_val);
    *bit_ofs += 32;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_tmotor_esc_FocCtrl sample_com_tmotor_esc_FocCtrl_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_tmotor_esc_FocCtrl, COM_TMOTOR_ESC_FOCCTRL_ID, COM_TMOTOR_ESC_FOCCTRL_SIGNATURE, COM_TMOTOR_ESC_FOCCTRL_MAX_SIZE);
#endif
#endif
