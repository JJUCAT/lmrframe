#include "lmrinc.h"

#include <pthread.h>

namespace lmr {

Mutex::Mutex(String name)
     : Obj(name)
{
    lock_ = new pthread_mutex_t;

    pthread_mutex_init((pthread_mutex_t*)lock_, NULL);
}

Mutex::~Mutex()
{
    DEBUG_W("mutex destroy by system!");
    Destroy();
}

S32 Mutex::Lock()
{
    S32 ret = 0;

    ret = pthread_mutex_lock((pthread_mutex_t*)lock_);

    return ret;
}

S32 Mutex::Unlock()
{
    S32 ret = 0;

    ret = pthread_mutex_unlock((pthread_mutex_t*)lock_);

    return ret;
}

S32 Mutex::Trylock()
{
    S32 ret = 0;

    ret = pthread_mutex_trylock((pthread_mutex_t*)lock_);

    return ret;
}

S32 Mutex::Destroy()
{
    S32 ret = 0;

    ret = pthread_mutex_destroy((pthread_mutex_t*)lock_);

    return ret;
}

Cond::Cond(String name)
    : Mutex(name)
{
    cond_ = new pthread_cond_t;

    pthread_condattr_t attr;
    pthread_condattr_init(&attr);
    pthread_condattr_setclock(&attr, CLOCK_MONOTONIC);
    pthread_cond_init((pthread_cond_t*)cond_, &attr);
}

S32 Cond::Wait(S32 timeout)
{
    S32 ret;

    Lock();

    if (timeout > 0)
    {
        struct timespec time;

        clock_gettime(CLOCK_BOOTTIME, &time);
        time.tv_sec += timeout;
        ret = pthread_cond_timedwait((pthread_cond_t*)cond_, (pthread_mutex_t*)lock_, &time);
    }
    else
    {
        ret = pthread_cond_wait((pthread_cond_t*)cond_, (pthread_mutex_t*)lock_);
    }

    Unlock();

    return ret;
}

S32 Cond::Signal(Bool flag)
{
    S32 ret = 0;

    if (flag)
    {
        Lock();
    }

    ret = pthread_cond_signal((pthread_cond_t*)cond_);

    if (flag)
    {
        Unlock();
    }

    return ret;
}

S32 Cond::Broadcast()
{
    S32 ret = 0;

    Lock();
    ret = pthread_cond_broadcast((pthread_cond_t*)cond_);
    Unlock();

    return ret;
}

} // namespace lmr

