#include "clock.h"


namespace lmr {


Clock::Clock(String name)
     : Obj(name)
{
    clock_gettime(CLOCK_BOOTTIME, &tick_);
}


Clock::~Clock()
{
    ;
}

Time_t Clock::TFTime(TimeUnit_t unit, struct timespec& ts)
{

    Time_t ret = 0;

    switch (unit)
    {
        case TimeSec:
             ret = ts.tv_sec;
             break;

        case TimeMSec:
             ret = ts.tv_sec * 1000 + ts.tv_nsec / 1000000;
             break;

        case TimeUSec:
             ret = ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
             break;
    }

    return ret;
}

Time_t Clock::GetTime(TimeUnit_t unit)
{
    struct timespec ts;

    clock_gettime(CLOCK_BOOTTIME, &ts);

    return TFTime(unit, ts);
}


Void Clock::Reset()
{
    clock_gettime(CLOCK_BOOTTIME, &tick_);
}

S32 Clock::IsTimeLapses(TimeUnit_t unit, Time_t time)
{
    S32 ret = 0;

    if (GetTime(unit) - TFTime(unit, tick_) > time)
    {
        ret = 1;
    }

    return ret;
}

} // namespace lmr

