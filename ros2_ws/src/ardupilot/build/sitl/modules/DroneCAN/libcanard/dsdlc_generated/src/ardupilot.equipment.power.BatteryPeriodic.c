#define CANARD_DSDLC_INTERNAL
#include <ardupilot.equipment.power.BatteryPeriodic.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t ardupilot_equipment_power_BatteryPeriodic_encode(struct ardupilot_equipment_power_BatteryPeriodic* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_MAX_SIZE);
    _ardupilot_equipment_power_BatteryPeriodic_encode(buffer, &bit_ofs, msg, 
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
bool ardupilot_equipment_power_BatteryPeriodic_decode(const CanardRxTransfer* transfer, struct ardupilot_equipment_power_BatteryPeriodic* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > ARDUPILOT_EQUIPMENT_POWER_BATTERYPERIODIC_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_ardupilot_equipment_power_BatteryPeriodic_decode(transfer, &bit_ofs, msg,
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
struct ardupilot_equipment_power_BatteryPeriodic sample_ardupilot_equipment_power_BatteryPeriodic_msg(void) {
    struct ardupilot_equipment_power_BatteryPeriodic msg;

    msg.name.len = (uint8_t)random_range_unsigned_val(0, 50);
    for (size_t i=0; i < msg.name.len; i++) {
        msg.name.data[i] = (uint8_t)random_bitlen_unsigned_val(8);
    }
    msg.serial_number.len = (uint8_t)random_range_unsigned_val(0, 32);
    for (size_t i=0; i < msg.serial_number.len; i++) {
        msg.serial_number.data[i] = (uint8_t)random_bitlen_unsigned_val(8);
    }
    msg.manufacture_date.len = (uint8_t)random_range_unsigned_val(0, 9);
    for (size_t i=0; i < msg.manufacture_date.len; i++) {
        msg.manufacture_date.data[i] = (uint8_t)random_bitlen_unsigned_val(8);
    }
    msg.design_capacity = random_float_val();
    msg.cells_in_series = (uint8_t)random_bitlen_unsigned_val(8);
    msg.nominal_voltage = random_float16_val();
    msg.discharge_minimum_voltage = random_float16_val();
    msg.charging_minimum_voltage = random_float16_val();
    msg.charging_maximum_voltage = random_float16_val();
    msg.charging_maximum_current = random_float_val();
    msg.discharge_maximum_current = random_float_val();
    msg.discharge_maximum_burst_current = random_float_val();
    msg.full_charge_capacity = random_float_val();
    msg.cycle_count = (uint16_t)random_bitlen_unsigned_val(16);
    msg.state_of_health = (uint8_t)random_bitlen_unsigned_val(8);
    return msg;
}
#endif
