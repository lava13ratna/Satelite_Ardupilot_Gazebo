#define CANARD_DSDLC_INTERNAL
#include <ardupilot.equipment.power.BatteryContinuous.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t ardupilot_equipment_power_BatteryContinuous_encode(struct ardupilot_equipment_power_BatteryContinuous* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_MAX_SIZE);
    _ardupilot_equipment_power_BatteryContinuous_encode(buffer, &bit_ofs, msg, 
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
bool ardupilot_equipment_power_BatteryContinuous_decode(const CanardRxTransfer* transfer, struct ardupilot_equipment_power_BatteryContinuous* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > ARDUPILOT_EQUIPMENT_POWER_BATTERYCONTINUOUS_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_ardupilot_equipment_power_BatteryContinuous_decode(transfer, &bit_ofs, msg,
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
struct ardupilot_equipment_power_BatteryContinuous sample_ardupilot_equipment_power_BatteryContinuous_msg(void) {
    struct ardupilot_equipment_power_BatteryContinuous msg;

    msg.temperature_cells = random_float16_val();
    msg.temperature_pcb = random_float16_val();
    msg.temperature_other = random_float16_val();
    msg.current = random_float_val();
    msg.voltage = random_float_val();
    msg.state_of_charge = random_float16_val();
    msg.slot_id = (uint8_t)random_bitlen_unsigned_val(8);
    msg.capacity_consumed = random_float_val();
    msg.status_flags = (uint32_t)random_bitlen_unsigned_val(32);
    return msg;
}
#endif
