#include "lmrinc.h"
#include "clock.h"


namespace lmr {

S32 test_clock()
{
    S32 ret = 0;

    DEBUG_D("test clock start");
    Clock c1("c1");
    Clock c2("c2");

    while (!c1.IsTimeLapses(TimeSec, 3))
    {
        if (c2.IsTimeLapses(TimeMSec, 500))
        {
            c2.Reset();
            DEBUG_D("system time ms:%ld",Clock::GetTime(TimeMSec));    
            DEBUG_D("system time s:%ld",Clock::GetTime(TimeSec));          
        }
        usleep(1000);
    }
    c1.Reset();

    while (!c1.IsTimeLapses(TimeSec, 3))
    {
        if (c2.IsTimeLapses(TimeUSec, 500000))
        {
            c2.Reset();
            DEBUG_D("system time us:%ld",Clock::GetTime(TimeUSec));         
        }
        usleep(1000);
    }
    c1.Reset();

    DEBUG_D("test clock end");

    return ret;
}

} // namespace lmr
