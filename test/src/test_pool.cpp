#include "lmrinc.h"
#include "pool.hpp"



namespace lmr {

S32 test_pool()
{
    S32 ret = 0;

    DEBUG_D("test pool start");

    Pool<S32> s32pool("S32Pool");

    S32* wula = s32pool.Alloc();
    *wula = 233;
    DEBUG_D("wula = %d", *wula);
    s32pool.Free(wula);

    S32 tmp = 666;
    S32 *ptmp = &tmp;
    DEBUG_D("ptmp = %d", *ptmp);
    ptmp = s32pool.Alloc();
    DEBUG_D("s32pool, ptmp = %d", *ptmp);

    DEBUG_D("test pool start");

    return ret;
}


} // namespace lmr
