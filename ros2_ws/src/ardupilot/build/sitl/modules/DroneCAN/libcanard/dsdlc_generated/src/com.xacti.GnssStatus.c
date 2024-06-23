#define CANARD_DSDLC_INTERNAL
#include <com.xacti.GnssStatus.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t com_xacti_GnssStatus_encode(struct com_xacti_GnssStatus* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, COM_XACTI_GNSSSTATUS_MAX_SIZE);
    _com_xacti_GnssStatus_encode(buffer, &bit_ofs, msg, 
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
bool com_xacti_GnssStatus_decode(const CanardRxTransfer* transfer, struct com_xacti_GnssStatus* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > COM_XACTI_GNSSSTATUS_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_com_xacti_GnssStatus_decode(transfer, &bit_ofs, msg,
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
struct com_xacti_GnssStatus sample_com_xacti_GnssStatus_msg(void) {
    struct com_xacti_GnssStatus msg;

    msg.gps_status = (uint8_t)random_bitlen_unsigned_val(8);
    msg.order = (uint8_t)random_bitlen_unsigned_val(8);
    msg.remain_buffer = (uint8_t)random_bitlen_unsigned_val(8);
    msg.utc_year = (uint16_t)random_bitlen_unsigned_val(16);
    msg.utc_month = (uint8_t)random_bitlen_unsigned_val(8);
    msg.utc_day = (uint8_t)random_bitlen_unsigned_val(8);
    msg.utc_hour = (uint8_t)random_bitlen_unsigned_val(8);
    msg.utc_minute = (uint8_t)random_bitlen_unsigned_val(8);
    msg.utc_seconds = random_float_val();
    msg.latitude = random_float_val();
    msg.longitude = random_float_val();
    msg.altitude = random_float_val();
    return msg;
}
#endif
