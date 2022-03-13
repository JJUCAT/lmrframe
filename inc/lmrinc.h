#ifndef __LMRINC_H__
#define __LMRINC_H__

#include "lmrtypes.h"
#include "obj.h"
#include "clock.h"
#include "mutex.h"


#include <cstdio>
#include "unistd.h"

#define ENABLE_DEBUG

#ifdef ENABLE_DEBUG
#define DEBUG_D(format, ...) printf("\033[37m[SD][%s,%d]" #format "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_D(format, ...) do{}while(0)
#endif

#define DEBUG_W(format, ...) printf("\033[33m[SE]" #format "\n", ##__VA_ARGS__)
#define DEBUG_E(format, ...) printf("\033[31m[SE]" #format "\n", ##__VA_ARGS__)


#endif // __LMRINC_H__
