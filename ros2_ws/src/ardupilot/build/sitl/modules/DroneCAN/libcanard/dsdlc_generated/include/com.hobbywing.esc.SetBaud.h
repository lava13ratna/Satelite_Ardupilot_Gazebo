#pragma once
#include <com.hobbywing.esc.SetBaud_req.h>
#include <com.hobbywing.esc.SetBaud_res.h>

#define COM_HOBBYWING_ESC_SETBAUD_ID 211
#define COM_HOBBYWING_ESC_SETBAUD_SIGNATURE (0xADA98653B52DE435ULL)

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(com_hobbywing_esc_SetBaud, COM_HOBBYWING_ESC_SETBAUD_ID, COM_HOBBYWING_ESC_SETBAUD_SIGNATURE, COM_HOBBYWING_ESC_SETBAUD_REQUEST_MAX_SIZE, COM_HOBBYWING_ESC_SETBAUD_RESPONSE_MAX_SIZE);
#endif
