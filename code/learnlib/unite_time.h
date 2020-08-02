/**
 * @file: unite_time.h
 * @author: mattbaisteins@gmail.com
 * @date: 2020-08-03
 * @brif: 
 **/
#ifndef _UNITE_TIME_H
#define _UNITE_TIME_H
#include <ctime>
#include <sys/time.h>
#include <string>
#include <vector>
#include <cstdlib>


#define BUFFER_SIZE 4096
/*
 * get time yymmdd, eg. 190803
 * @param void
 * @return string now_time
 */
std::string get_time();

#endif // end _UNITE_TIME_H

