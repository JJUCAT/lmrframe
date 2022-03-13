#include "lmrinc.h"
#include "clock.h"
#include "test.h"

namespace lmr {

Void test_clock()
{
    DEBUG_D("test clock start");
    Clock c1("c1");
    Clock c2("c2");
    DEBUG_D("test clock num :%d", 2);
    while (!c1.IsTimeLapses(TimeSec, 5))
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

    while (!c1.IsTimeLapses(TimeSec, 5))
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
}

} // namespace lmr
