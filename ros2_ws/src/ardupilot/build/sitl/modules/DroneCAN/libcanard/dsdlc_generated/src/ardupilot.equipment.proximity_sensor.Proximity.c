#define CANARD_DSDLC_INTERNAL
#include <ardupilot.equipment.proximity_sensor.Proximity.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t ardupilot_equipment_proximity_sensor_Proximity_encode(struct ardupilot_equipment_proximity_sensor_Proximity* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, ARDUPILOT_EQUIPMENT_PROXIMITY_SENSOR_PROXIMITY_MAX_SIZE);
    _ardupilot_equipment_proximity_sensor_Proximity_encode(buffer, &bit_ofs, msg, 
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
bool ardupilot_equipment_proximity_sensor_Proximity_decode(const CanardRxTransfer* transfer, struct ardupilot_equipment_proximity_sensor_Proximity* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > ARDUPILOT_EQUIPMENT_PROXIMITY_SENSOR_PROXIMITY_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_ardupilot_equipment_proximity_sensor_Proximity_decode(transfer, &bit_ofs, msg,
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
struct ardupilot_equipment_proximity_sensor_Proximity sample_ardupilot_equipment_proximity_sensor_Proximity_msg(void) {
    struct ardupilot_equipment_proximity_sensor_Proximity msg;

    msg.sensor_id = (uint8_t)random_bitlen_unsigned_val(8);
    msg.reading_type = (uint8_t)random_bitlen_unsigned_val(3);
    msg.flags = (uint8_t)random_bitlen_unsigned_val(5);
    msg.yaw = random_float16_val();
    msg.pitch = random_float16_val();
    msg.distance = random_float16_val();
    return msg;
}
#endif
