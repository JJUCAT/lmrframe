#ifndef __LMRTYPES_H__
#define __LMRTYPES_H__

#include <string>

namespace lmr {

typedef unsigned int U32;
typedef unsigned short U16;
typedef unsigned char U8;

typedef int S32;
typedef short S16;
typedef char S8;

typedef bool Bool;

typedef enum {
    DISABLE = 0,
    ENABLE,
}FunctionState;


typedef std::string String;

} // namespace lmr

#endif // __LMRTYPES_H__
