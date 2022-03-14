#ifndef __POOL_HPP_
#define __POOL_HPP_

#include "lmrinc.h"

namespace lmr {

template <typename T>
class Pool : public Obj
{
public:
    Pool(String name) : Obj(name)
    {
        mutex_ = new Mutex("pool_mutex");
        free_.clear();
        busy_.clear();
    }

    T* Alloc()
    {
        AutoMutex lock(mutex_);
        T* tmp = NULL;

        if (free_.empty())
        {
            tmp = New();
        }
        else
        {
            tmp = free_.begin()->first;

            free_.erase(tmp);
        }
        busy_[tmp] = Clock::GetTime(TimeSec);

        return tmp;
    }

    void Free(T* tmp)
    {
        AutoMutex lock(mutex_);

        if (busy_.find(tmp) != busy_.end())
        {
            busy_.erase(tmp);
            free_[tmp] = Clock::GetTime(TimeSec);
        }
    }
    
private:
    std::map<T* S32> free_, busy_;
    Mutex* mutex_;

    virtual T* New()
    {
        return new T;
    }
};


} // namespace lmr

#endif // __POOL_HPP_
