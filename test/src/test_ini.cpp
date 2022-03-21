#include "lmrinc.h"
#include "ini.h"

namespace lmr {

S32 test_ini()
{
    S32 ret = 0;

    DEBUG_D("test ini start");

    Ini tini("/home/lmr/MyGit/lmrframe/test/test_ini.ini", "test_ini");

    String v = "yohoho";
    v = tini.Read("yi", "em");
    DEBUG_D("Read segment[yi] key[em]:%s", v.c_str());
    v = tini.Read("yamoto", "maga");
    DEBUG_D("Read segment[yamoto] key[maga]:%s", v.c_str());


    DEBUG_D("test ini end");

    return ret;
}

} // namespace lmr
