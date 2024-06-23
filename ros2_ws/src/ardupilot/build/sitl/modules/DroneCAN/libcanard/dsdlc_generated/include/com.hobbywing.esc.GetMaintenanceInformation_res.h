#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_RESPONSE_MAX_SIZE 7
#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_RESPONSE_SIGNATURE (0xB81DBD4EC9A5977DULL)
#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_RESPONSE_ID 241

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_GetMaintenanceInformation_cxx_iface;
#endif

struct com_hobbywing_esc_GetMaintenanceInformationResponse {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_GetMaintenanceInformation_cxx_iface;
#endif
    uint32_t total_rotation_time_min;
    uint32_t time_since_maintainence_min;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_GetMaintenanceInformationResponse_encode(struct com_hobbywing_esc_GetMaintenanceInformationResponse* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_GetMaintenanceInformationResponse_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_GetMaintenanceInformationResponse* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_GetMaintenanceInformationResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationResponse* msg, bool tao);
static inline bool _com_hobbywing_esc_GetMaintenanceInformationResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationResponse* msg, bool tao);
void _com_hobbywing_esc_GetMaintenanceInformationResponse_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationResponse* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 32, &msg->total_rotation_time_min);
    *bit_ofs += 32;
    canardEncodeScalar(buffer, *bit_ofs, 24, &msg->time_since_maintainence_min);
    *bit_ofs += 24;
}

/*
 decode com_hobbywing_esc_GetMaintenanceInformationResponse, return true on failure, false on success
*/
bool _com_hobbywing_esc_GetMaintenanceInformationResponse_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationResponse* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 32, false, &msg->total_rotation_time_min);
    *bit_ofs += 32;

    canardDecodeScalar(transfer, *bit_ofs, 24, false, &msg->time_since_maintainence_min);
    *bit_ofs += 24;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_GetMaintenanceInformationResponse sample_com_hobbywing_esc_GetMaintenanceInformationResponse_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
