#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_RESPONSE_MAX_SIZE 4
#define COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_RESPONSE_SIGNATURE (0x1FD0404420983DEBULL)
#define COM_HOBBYWING_ESC_SETREPORTINGFREQUENCY_RESPONSE_ID 214

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_SetReportingFrequency_cxx_iface;
#endif

struct com_hobbywing_esc_SetReportingFrequencyResponse {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_SetReportingFrequency_cxx_iface;
#endif
    uint8_t option;
    uint16_t MSG_ID;
    uint8_t rate;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_SetReportingFrequencyResponse_encode(struct com_hobbywing_esc_SetReportingFrequencyResponse* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_SetReportingFrequencyResponse_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_SetReportingFrequencyResponse* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_SetReportingFrequencyResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetReportingFrequencyResponse* msg, bool tao);
static inline bool _com_hobbywing_esc_SetReportingFrequencyResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetReportingFrequencyResponse* msg, bool tao);
void _com_hobbywing_esc_SetReportingFrequencyResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetReportingFrequencyResponse* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->option);
    *bit_ofs += 8;
    canardEncodeScalar(buffer, *bit_ofs, 16, &msg->MSG_ID);
    *bit_ofs += 16;
    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->rate);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_SetReportingFrequencyResponse, return true on failure, false on success
*/
bool _com_hobbywing_esc_SetReportingFrequencyResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetReportingFrequencyResponse* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->option);
    *bit_ofs += 8;

    canardDecodeScalar(transfer, *bit_ofs, 16, false, &msg->MSG_ID);
    *bit_ofs += 16;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->rate);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_SetReportingFrequencyResponse sample_com_hobbywing_esc_SetReportingFrequencyResponse_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
