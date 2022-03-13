#ifndef __LMRTYPES_H__
#define __LMRTYPES_H__

#include <string>

namespace lmr {

typedef unsigned long int U64;
typedef unsigned int U32;
typedef unsigned short U16;
typedef unsigned char U8;

typedef long int S64;
typedef int S32;
typedef short S16;
typedef char S8;

typedef void Void;
typedef bool Bool;



typedef enum {
    DISABLE = 0,
    ENABLE,
} FunctionState;

typedef enum {
    TimeSec = 0,
    TimeMSec,
    TimeUSec,
} TimeUnit_t;

typedef std::string String;
typedef unsigned long int Time_t;


} // namespace lmr

#endif // __LMRTYPES_H__
