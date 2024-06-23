#define CANARD_DSDLC_INTERNAL
#include <ardupilot.equipment.power.BatteryCells.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t ardupilot_equipment_power_BatteryCells_encode(struct ardupilot_equipment_power_BatteryCells* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, ARDUPILOT_EQUIPMENT_POWER_BATTERYCELLS_MAX_SIZE);
    _ardupilot_equipment_power_BatteryCells_encode(buffer, &bit_ofs, msg, 
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
bool ardupilot_equipment_power_BatteryCells_decode(const CanardRxTransfer* transfer, struct ardupilot_equipment_power_BatteryCells* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > ARDUPILOT_EQUIPMENT_POWER_BATTERYCELLS_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_ardupilot_equipment_power_BatteryCells_decode(transfer, &bit_ofs, msg,
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
struct ardupilot_equipment_power_BatteryCells sample_ardupilot_equipment_power_BatteryCells_msg(void) {
    struct ardupilot_equipment_power_BatteryCells msg;

    msg.voltages.len = (uint8_t)random_range_unsigned_val(0, 24);
    for (size_t i=0; i < msg.voltages.len; i++) {
        msg.voltages.data[i] = random_float16_val();
    }
    msg.index = (uint16_t)random_bitlen_unsigned_val(16);
    return msg;
}
#endif
