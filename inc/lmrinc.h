#ifndef __LMRINC_H__
#define __LMRINC_H__

#include "lmrtypes.h"
#include "obj.h"

#include <cstdio>

#define ENABLE_LOG

#ifdef ENABLE_LOG
#define LOG_S(format, ...) printf("\033[32m[S]" #format "\n", ##__VA_ARGS__)
#else
#define LOG_S(format, ...) do{}while(0)
#endif


#endif // __LMRINC_H__
