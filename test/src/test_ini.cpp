#include "lmrinc.h"
#include "ini.h"

namespace lmr {

S32 test_ini()
{
    S32 ret = 0;

    DEBUG_D("test ini start");

    Ini tini("/home/lmr/MyGit/lmrframe/test/test_ini.ini", "test_ini");

    DEBUG_D("test ini end");

    return ret;
}

} // namespace lmr
