#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_TMOTOR_ESC_PARAMCFG_MAX_SIZE 27
#define COM_TMOTOR_ESC_PARAMCFG_SIGNATURE (0x948F5E0B33E0EDEEULL)
#define COM_TMOTOR_ESC_PARAMCFG_ID 1033

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_tmotor_esc_ParamCfg_cxx_iface;
#endif

struct com_tmotor_esc_ParamCfg {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_tmotor_esc_ParamCfg_cxx_iface;
#endif
    uint8_t esc_index;
    uint32_t esc_uuid;
    uint16_t esc_id_set;
    uint16_t esc_ov_threshold;
    uint16_t esc_oc_threshold;
    uint16_t esc_ot_threshold;
    uint16_t esc_acc_threshold;
    uint16_t esc_dacc_threshold;
    int16_t esc_rotate_dir;
    uint8_t esc_timing;
    uint8_t esc_signal_priority;
    uint16_t esc_led_mode;
    uint8_t esc_can_rate;
    uint16_t esc_fdb_rate;
    uint8_t esc_save_option;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_tmotor_esc_ParamCfg_encode(struct com_tmotor_esc_ParamCfg* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_tmotor_esc_ParamCfg_decode(const CanardRxTransfer* transfer, struct com_tmotor_esc_ParamCfg* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_tmotor_esc_ParamCfg_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamCfg* msg, bool tao);
static inline bool _com_tmotor_esc_ParamCfg_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamCfg* msg, bool tao);
void _com_tmotor_esc_ParamCfg_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamCfg* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_index);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->esc_uuid);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_id_set);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_ov_threshold);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_oc_threshold);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_ot_threshold);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_acc_threshold);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_dacc_threshold);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_rotate_dir);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_timing);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_signal_priority);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_led_mode);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_can_rate);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_fdb_rate);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_save_option);
    *bit_ofs += 8;
}

/*
 decode com_tmotor_esc_ParamCfg, return true on failure, false on success
*/
bool _com_tmotor_esc_ParamCfg_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamCfg* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_index);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->esc_uuid);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_id_set);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_ov_threshold);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_oc_threshold);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_ot_threshold);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_acc_threshold);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_dacc_threshold);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 16, true, &msg->esc_rotate_dir);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_timing);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_signal_priority);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_led_mode);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_can_rate);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_fdb_rate);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_save_option);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_tmotor_esc_ParamCfg sample_com_tmotor_esc_ParamCfg_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_tmotor_esc_ParamCfg, COM_TMOTOR_ESC_PARAMCFG_ID, COM_TMOTOR_ESC_PARAMCFG_SIGNATURE, COM_TMOTOR_ESC_PARAMCFG_MAX_SIZE);
#endif
#endif
