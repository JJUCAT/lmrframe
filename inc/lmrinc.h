#ifndef __LMRINC_H__
#define __LMRINC_H__


#include <cstdio>
#include "unistd.h"

#define ENABLE_DEBUG

#ifdef ENABLE_DEBUG
#define DEBUG_D(format, ...) printf("\033[37m[SD][%s,%d]" #format "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define DEBUG_W(format, ...) printf("\033[33m[SE][%s,%d]" #format "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#define DEBUG_E(format, ...) printf("\033[31m[SE][%s,%d]" #format "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_D(format, ...) do{}while(0)
#define DEBUG_W(format, ...) do{}while(0)
#define DEBUG_E(format, ...) do{}while(0)
#endif

#include "lmrtypes.h"
#include "obj.h"
#include "clock.h"
#include "mutex.h"


#endif // __LMRINC_H__
