#pragma once
#include <com.hobbywing.esc.SetID_req.h>
#include <com.hobbywing.esc.SetID_res.h>

#define COM_HOBBYWING_ESC_SETID_ID 210
#define COM_HOBBYWING_ESC_SETID_SIGNATURE (0xC323CB5E9EC2B6F7ULL)

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(com_hobbywing_esc_SetID, COM_HOBBYWING_ESC_SETID_ID, COM_HOBBYWING_ESC_SETID_SIGNATURE, COM_HOBBYWING_ESC_SETID_REQUEST_MAX_SIZE, COM_HOBBYWING_ESC_SETID_RESPONSE_MAX_SIZE);
#endif
