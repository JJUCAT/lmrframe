#ifndef __Ini_H__
#define __Ini_H__

#include "lmrinc.h"


#include <map>

namespace lmr {

class Ini : public Obj
{
public:
    Ini();
    ~Ini();

    S32 Create(const String& pathname);
    S32 Init(const String& pathname);
    S32 Save(const String& pathname);
    String Read(const String& segment, const String& key);
    S32 Write(const String& segment, const String& key, const String& value);

private:
    Mutex* mtx_;
    std::map<String, String>* skv_;
};

} // namespace lmr

#endif // __Ini_H__
