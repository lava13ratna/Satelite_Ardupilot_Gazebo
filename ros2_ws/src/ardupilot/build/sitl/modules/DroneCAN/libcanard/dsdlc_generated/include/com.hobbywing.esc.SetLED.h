#pragma once
#include <com.hobbywing.esc.SetLED_req.h>
#include <com.hobbywing.esc.SetLED_res.h>

#define COM_HOBBYWING_ESC_SETLED_ID 212
#define COM_HOBBYWING_ESC_SETLED_SIGNATURE (0xB493BD48C0853EE5ULL)

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(com_hobbywing_esc_SetLED, COM_HOBBYWING_ESC_SETLED_ID, COM_HOBBYWING_ESC_SETLED_SIGNATURE, COM_HOBBYWING_ESC_SETLED_REQUEST_MAX_SIZE, COM_HOBBYWING_ESC_SETLED_RESPONSE_MAX_SIZE);
#endif
