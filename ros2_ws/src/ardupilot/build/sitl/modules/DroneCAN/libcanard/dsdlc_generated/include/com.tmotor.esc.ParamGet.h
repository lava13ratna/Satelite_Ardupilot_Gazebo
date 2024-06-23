#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_TMOTOR_ESC_PARAMGET_MAX_SIZE 74
#define COM_TMOTOR_ESC_PARAMGET_SIGNATURE (0x462875A0ED874302ULL)
#define COM_TMOTOR_ESC_PARAMGET_ID 1332

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_tmotor_esc_ParamGet_cxx_iface;
#endif

struct com_tmotor_esc_ParamGet {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_tmotor_esc_ParamGet_cxx_iface;
#endif
    uint8_t esc_index;
    uint32_t esc_uuid;
    uint16_t esc_id_req;
    uint16_t esc_ov_threshold;
    uint16_t esc_oc_threshold;
    uint16_t esc_ot_threshold;
    uint16_t esc_acc_threshold;
    uint16_t esc_dacc_threshold;
    int16_t esc_rotate_dir;
    uint8_t esc_timing;
    uint16_t esc_startup_times;
    uint32_t esc_startup_duration;
    uint32_t esc_product_date;
    uint32_t esc_error_count;
    uint8_t esc_signal_priority;
    uint16_t esc_led_mode;
    uint8_t esc_can_rate;
    uint16_t esc_fdb_rate;
    uint8_t esc_save_option;
    struct { uint8_t len; uint8_t data[32]; }rsvd;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_tmotor_esc_ParamGet_encode(struct com_tmotor_esc_ParamGet* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_tmotor_esc_ParamGet_decode(const CanardRxTransfer* transfer, struct com_tmotor_esc_ParamGet* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_tmotor_esc_ParamGet_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamGet* msg, bool tao);
static inline bool _com_tmotor_esc_ParamGet_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamGet* msg, bool tao);
void _com_tmotor_esc_ParamGet_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamGet* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->esc_index);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->esc_uuid);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_id_req);
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
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->esc_startup_times);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->esc_startup_duration);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->esc_product_date);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->esc_error_count);
    *bit_ofs += 32;
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
    if (!tao) {
        canardEncodeScalar(buffer, *bit_ofs, 6, &msg->rsvd.len);
        *bit_ofs += 6;
    }
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t rsvd_len = msg->rsvd.len > 32 ? 32 : msg->rsvd.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < rsvd_len; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 8, &msg->rsvd.data[i]);
        *bit_ofs += 8;
    }
}

/*
 decode com_tmotor_esc_ParamGet, return true on failure, false on success
*/
bool _com_tmotor_esc_ParamGet_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_tmotor_esc_ParamGet* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->esc_index);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->esc_uuid);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_id_req);
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

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->esc_startup_times);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->esc_startup_duration);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->esc_product_date);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->esc_error_count);
    *bit_ofs += 32;

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

    if (!tao) {
        canardDecodeScalar(transfer, *bit_ofs, 6, false, &msg->rsvd.len);
        *bit_ofs += 6;
    } else {
        msg->rsvd.len = ((transfer->payload_len*8)-*bit_ofs)/8;
    }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->rsvd.len > 32) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->rsvd.len; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->rsvd.data[i]);
        *bit_ofs += 8;
    }

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_tmotor_esc_ParamGet sample_com_tmotor_esc_ParamGet_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_tmotor_esc_ParamGet, COM_TMOTOR_ESC_PARAMGET_ID, COM_TMOTOR_ESC_PARAMGET_SIGNATURE, COM_TMOTOR_ESC_PARAMGET_MAX_SIZE);
#endif
#endif
