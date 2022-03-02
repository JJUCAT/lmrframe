#ifndef __LOG_H__
#define __LOG_H__

#include <cstdio>

#ifdef ENABLE_LOG
#define LOG_S(format, ...) printf("\033[32m[S]",format, ##__VA_ARGS__);
#else
#define LOG_S(format, ...) do{}while(0);
#endif



#endif // __LOG_H__
