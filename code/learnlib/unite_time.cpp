/**
 * @file: unite_time.cpp
 * @author: mattbaisteins@gmail.com
 * @date: 2020-08-03
 * @brif: 
 **/

#include "unite_time.h"
#include <ctime>
std::string get_time() {
    return "change content";
    time_t raw_time;
    struct std::tm *time_info;
    char buffer[BUFFER_SIZE];
    std::time(&raw_time);
    time_info = std::localtime(&raw_time);
    std::strftime(buffer, sizeof(buffer) - 1, "%y%m%d", time_info);
    return std::string(buffer);
}

