#define CANARD_DSDLC_INTERNAL
#include <com.tmotor.esc.PUSHCAN.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t com_tmotor_esc_PUSHCAN_encode(struct com_tmotor_esc_PUSHCAN* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, COM_TMOTOR_ESC_PUSHCAN_MAX_SIZE);
    _com_tmotor_esc_PUSHCAN_encode(buffer, &bit_ofs, msg, 
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
bool com_tmotor_esc_PUSHCAN_decode(const CanardRxTransfer* transfer, struct com_tmotor_esc_PUSHCAN* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > COM_TMOTOR_ESC_PUSHCAN_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_com_tmotor_esc_PUSHCAN_decode(transfer, &bit_ofs, msg,
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
struct com_tmotor_esc_PUSHCAN sample_com_tmotor_esc_PUSHCAN_msg(void) {
    struct com_tmotor_esc_PUSHCAN msg;

    msg.data_sequence = (uint32_t)random_bitlen_unsigned_val(32);
    msg.data.len = (uint8_t)random_range_unsigned_val(0, 255);
    for (size_t i=0; i < msg.data.len; i++) {
        msg.data.data[i] = (uint8_t)random_bitlen_unsigned_val(8);
    }
    return msg;
}
#endif
