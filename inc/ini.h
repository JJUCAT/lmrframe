#ifndef __Ini_H__
#define __Ini_H__

#include "lmrinc.h"


#include <map>


namespace lmr {

class Ini : public Obj
{
public:
    Ini(String pathname, String objname = "ini");
    ~Ini();

    S32 Save(const String& pathname = "self");
    String Read(const String& segment, const String& key);
    void Write(const String& segment, const String& key, const String& value);

private:
    S32 Parse();




    const String pathname_;
    Mutex mtx_;
    std::map<String, String> skv_;
};

} // namespace lmr

#endif // __Ini_H__
