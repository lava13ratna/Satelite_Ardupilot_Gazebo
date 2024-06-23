#pragma once
#include <com.hobbywing.esc.SetAngle_req.h>
#include <com.hobbywing.esc.SetAngle_res.h>

#define COM_HOBBYWING_ESC_SETANGLE_ID 217
#define COM_HOBBYWING_ESC_SETANGLE_SIGNATURE (0x81D9B10761C28E0AULL)

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(com_hobbywing_esc_SetAngle, COM_HOBBYWING_ESC_SETANGLE_ID, COM_HOBBYWING_ESC_SETANGLE_SIGNATURE, COM_HOBBYWING_ESC_SETANGLE_REQUEST_MAX_SIZE, COM_HOBBYWING_ESC_SETANGLE_RESPONSE_MAX_SIZE);
#endif
