#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_RAWCOMMAND_MAX_SIZE 15
#define COM_HOBBYWING_ESC_RAWCOMMAND_SIGNATURE (0xBDF086C79F6640ADULL)
#define COM_HOBBYWING_ESC_RAWCOMMAND_ID 20100

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_RawCommand_cxx_iface;
#endif

struct com_hobbywing_esc_RawCommand {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_RawCommand_cxx_iface;
#endif
    struct { uint8_t len; int16_t data[8]; }command;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_RawCommand_encode(struct com_hobbywing_esc_RawCommand* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_RawCommand_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_RawCommand* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_RawCommand_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_RawCommand* msg, bool tao);
static inline bool _com_hobbywing_esc_RawCommand_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_RawCommand* msg, bool tao);
void _com_hobbywing_esc_RawCommand_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_RawCommand* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    if (!tao) {
        canardEncodeScalar(buffer, *bit_ofs, 4, &msg->command.len);
        *bit_ofs += 4;
    }
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    const size_t command_len = msg->command.len > 8 ? 8 : msg->command.len;
#pragma GCC diagnostic pop
    for (size_t i=0; i < command_len; i++) {
        canardEncodeScalar(buffer, *bit_ofs, 14, &msg->command.data[i]);
        *bit_ofs += 14;
    }
}

/*
 decode com_hobbywing_esc_RawCommand, return true on failure, false on success
*/
bool _com_hobbywing_esc_RawCommand_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_RawCommand* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    if (!tao) {
        canardDecodeScalar(transfer, *bit_ofs, 4, false, &msg->command.len);
        *bit_ofs += 4;
    } else {
        msg->command.len = ((transfer->payload_len*8)-*bit_ofs)/14;
    }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wtype-limits"
    if (msg->command.len > 8) {
        return true; /* invalid value */
    }
#pragma GCC diagnostic pop
    for (size_t i=0; i < msg->command.len; i++) {
        canardDecodeScalar(transfer, *bit_ofs, 14, true, &msg->command.data[i]);
        *bit_ofs += 14;
    }

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_RawCommand sample_com_hobbywing_esc_RawCommand_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
BROADCAST_MESSAGE_CXX_IFACE(com_hobbywing_esc_RawCommand, COM_HOBBYWING_ESC_RAWCOMMAND_ID, COM_HOBBYWING_ESC_RAWCOMMAND_SIGNATURE, COM_HOBBYWING_ESC_RAWCOMMAND_MAX_SIZE);
#endif
#endif
