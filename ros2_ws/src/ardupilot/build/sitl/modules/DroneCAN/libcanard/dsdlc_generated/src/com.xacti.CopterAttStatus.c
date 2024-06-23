#define CANARD_DSDLC_INTERNAL
#include <com.xacti.CopterAttStatus.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t com_xacti_CopterAttStatus_encode(struct com_xacti_CopterAttStatus* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, COM_XACTI_COPTERATTSTATUS_MAX_SIZE);
    _com_xacti_CopterAttStatus_encode(buffer, &bit_ofs, msg, 
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
bool com_xacti_CopterAttStatus_decode(const CanardRxTransfer* transfer, struct com_xacti_CopterAttStatus* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > COM_XACTI_COPTERATTSTATUS_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_com_xacti_CopterAttStatus_decode(transfer, &bit_ofs, msg,
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
struct com_xacti_CopterAttStatus sample_com_xacti_CopterAttStatus_msg(void) {
    struct com_xacti_CopterAttStatus msg;

    for (size_t i=0; i < 4; i++) {
        msg.quaternion_wxyz_e4[i] = (int16_t)random_bitlen_signed_val(16);
    }
    msg.reserved.len = (uint8_t)random_range_unsigned_val(0, 2);
    for (size_t i=0; i < msg.reserved.len; i++) {
        msg.reserved.data[i] = random_float16_val();
    }
    return msg;
}
#endif
