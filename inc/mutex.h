#ifndef __MUTEX_H_
#define __MUTEX_H_

#include "lmrinc.h"

namespace lmr {

class Mutex : public Obj
{
public:
    Mutex(String name = "Mutex");
    ~Mutex();

    S32 Lock();
    S32 Unlock();
    S32 Trylock();
    S32 Destroy();

private:
    Void* lock_;
}; // Class Mutex


class AutoMutex
{
public:
    explicit AutoMutex(Mutex* mtx) : auto_mutex_(mtx)
    {
        auto_mutex_->Lock();
    }

    virtual ~AutoMutex()
    {
        auto_mutex_->Unlock();
    }

private:
    Mutex* auto_mutex_;
}; // Class AutoMutex 


#if 0
class Cond : public Obj 
{
public:
    Cond(String name = "Cond");

    S32 Wait(S32 timeout = -1);
    S32 Signal(Bool flag = true);
    S32 Broadcast(Void);

private:
    Void* cond_;
    Void* lock_;
}; // Class Cond
#endif

} // namespace lmr


#endif //  __MUTEX_H_
