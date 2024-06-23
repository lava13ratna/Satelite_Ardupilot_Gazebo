#define CANARD_DSDLC_INTERNAL
#include <com.tmotor.esc.ParamGet.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t com_tmotor_esc_ParamGet_encode(struct com_tmotor_esc_ParamGet* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, COM_TMOTOR_ESC_PARAMGET_MAX_SIZE);
    _com_tmotor_esc_ParamGet_encode(buffer, &bit_ofs, msg, 
#if CANARD_ENABLE_TAO_OPTION
    tao
#else
    true
#endif
    );
    return ((bit_ofs+7)/8);
}

/*
  return true if the decode is invalid
 */
bool com_tmotor_esc_ParamGet_decode(const CanardRxTransfer* transfer, struct com_tmotor_esc_ParamGet* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > COM_TMOTOR_ESC_PARAMGET_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_com_tmotor_esc_ParamGet_decode(transfer, &bit_ofs, msg,
#if CANARD_ENABLE_TAO_OPTION
    transfer->tao
#else
    true
#endif
    )) {
        return true; /* invalid payload */
    }

    const uint32_t byte_len = (bit_ofs+7U)/8U;
#if CANARD_ENABLE_TAO_OPTION
    // if this could be CANFD then the dlc could indicating more bytes than
    // we actually have
    if (!transfer->tao) {
        return byte_len > transfer->payload_len;
    }
#endif
    return byte_len != transfer->payload_len;
}

#ifdef CANARD_DSDLC_TEST_BUILD
struct com_tmotor_esc_ParamGet sample_com_tmotor_esc_ParamGet_msg(void) {
    struct com_tmotor_esc_ParamGet msg;

    msg.esc_index = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_uuid = (uint32_t)random_bitlen_unsigned_val(32);
    msg.esc_id_req = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_ov_threshold = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_oc_threshold = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_ot_threshold = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_acc_threshold = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_dacc_threshold = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_rotate_dir = (int16_t)random_bitlen_signed_val(16);
    msg.esc_timing = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_startup_times = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_startup_duration = (uint32_t)random_bitlen_unsigned_val(32);
    msg.esc_product_date = (uint32_t)random_bitlen_unsigned_val(32);
    msg.esc_error_count = (uint32_t)random_bitlen_unsigned_val(32);
    msg.esc_signal_priority = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_led_mode = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_can_rate = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_fdb_rate = (uint16_t)random_bitlen_unsigned_val(16);
    msg.esc_save_option = (uint8_t)random_bitlen_unsigned_val(8);
    msg.rsvd.len = (uint8_t)random_range_unsigned_val(0, 32);
    for (size_t i=0; i < msg.rsvd.len; i++) {
        msg.rsvd.data[i] = (uint8_t)random_bitlen_unsigned_val(8);
    }
    return msg;
}
#endif
