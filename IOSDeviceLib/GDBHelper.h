#pragma once

#include "SocketHelper.h"
#include "Declarations.h"
#include <string>

std::string get_gdb_message(std::string message);
int gdb_send_message(std::string message, ServiceInfo info, long long length = -1);
bool run_application(std::string& executable, ServiceInfo info, std::string& application_identifier, DeviceData* device_data, bool wait_for_debugger);
bool stop_application(std::string& executable, ServiceInfo info, std::string& application_identifier, std::map<std::string, ApplicationCache>& apps_cache);
void detach_connection(ServiceInfo info, DeviceData* device_data);

