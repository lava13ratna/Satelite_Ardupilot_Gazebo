#define CANARD_DSDLC_INTERNAL
#include <com.tmotor.esc.FocCtrl.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t com_tmotor_esc_FocCtrl_encode(struct com_tmotor_esc_FocCtrl* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, COM_TMOTOR_ESC_FOCCTRL_MAX_SIZE);
    _com_tmotor_esc_FocCtrl_encode(buffer, &bit_ofs, msg, 
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
bool com_tmotor_esc_FocCtrl_decode(const CanardRxTransfer* transfer, struct com_tmotor_esc_FocCtrl* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > COM_TMOTOR_ESC_FOCCTRL_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_com_tmotor_esc_FocCtrl_decode(transfer, &bit_ofs, msg,
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
struct com_tmotor_esc_FocCtrl sample_com_tmotor_esc_FocCtrl_msg(void) {
    struct com_tmotor_esc_FocCtrl msg;

    msg.esc_index = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_mode = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_fdb_rate = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_cmd = (uint8_t)random_bitlen_unsigned_val(8);
    msg.esc_cmd_val = (int32_t)random_bitlen_signed_val(32);
    return msg;
}
#endif
