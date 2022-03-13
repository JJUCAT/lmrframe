#ifndef __CLOCK_H__
#define __CLOCK_H__

#include "lmrinc.h"


#include <time.h>


namespace lmr {

class Clock : public Obj
{
public:
    Clock(String name);
    ~Clock();

    static Time_t TFTime(TimeUnit_t unit, struct timespec& ts);
    static Time_t GetTime(TimeUnit_t unit);    

    S32 IsTimeLapses(TimeUnit_t unit, Time_t time);
    Void Reset();

private:
    struct timespec tick_;
};




} // namespace lmr


#endif //  __CLOCK_H__
