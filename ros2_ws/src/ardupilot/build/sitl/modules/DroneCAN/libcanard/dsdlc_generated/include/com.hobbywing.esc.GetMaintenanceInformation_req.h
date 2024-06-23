#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_REQUEST_MAX_SIZE 1
#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_REQUEST_SIGNATURE (0xB81DBD4EC9A5977DULL)
#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_REQUEST_ID 241

#define COM_HOBBYWING_ESC_GETMAINTENANCEINFORMATION_REQUEST_OPTION_CLEAR 1

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_GetMaintenanceInformation_cxx_iface;
#endif

struct com_hobbywing_esc_GetMaintenanceInformationRequest {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_GetMaintenanceInformation_cxx_iface;
#endif
    uint8_t option;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_GetMaintenanceInformationRequest_encode(struct com_hobbywing_esc_GetMaintenanceInformationRequest* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_GetMaintenanceInformationRequest_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_GetMaintenanceInformationRequest* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_GetMaintenanceInformationRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationRequest* msg, bool tao);
static inline bool _com_hobbywing_esc_GetMaintenanceInformationRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationRequest* msg, bool tao);
void _com_hobbywing_esc_GetMaintenanceInformationRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationRequest* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->option);
    *bit_ofs += 8;
}

/*
 decode com_hobbywing_esc_GetMaintenanceInformationRequest, return true on failure, false on success
*/
bool _com_hobbywing_esc_GetMaintenanceInformationRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_GetMaintenanceInformationRequest* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;
    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->option);
    *bit_ofs += 8;

    return false; /* success */
}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_GetMaintenanceInformationRequest sample_com_hobbywing_esc_GetMaintenanceInformationRequest_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
