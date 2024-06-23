#pragma once
#include <com.hobbywing.esc.SelfTest_req.h>
#include <com.hobbywing.esc.SelfTest_res.h>

#define COM_HOBBYWING_ESC_SELFTEST_ID 216
#define COM_HOBBYWING_ESC_SELFTEST_SIGNATURE (0xC48D4DE61C5295DFULL)

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
#include <canard/cxx_wrappers.h>
SERVICE_MESSAGE_CXX_IFACE(com_hobbywing_esc_SelfTest, COM_HOBBYWING_ESC_SELFTEST_ID, COM_HOBBYWING_ESC_SELFTEST_SIGNATURE, COM_HOBBYWING_ESC_SELFTEST_REQUEST_MAX_SIZE, COM_HOBBYWING_ESC_SELFTEST_RESPONSE_MAX_SIZE);
#endif
