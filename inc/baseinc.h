#ifndef __BASEINC_H__
#define __BASEINC_H__

#include "lmrtypes.h"
#include "obj.h"

#include <cstdio>


#define ENABLE_LOG

#ifdef ENABLE_LOG
#define LOG_S(format, ...) printf("\033[32m[S]",format, ##__VA_ARGS__);
#else
#define LOG_S(format, ...) do{}while(0);
#endif


#endif // __BASEINC_H__
