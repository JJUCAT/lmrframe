#include "lmrtypes.h"
#include "obj.h"


namespace lmr {

Obj::Obj():name_("noone")
{
    printf("Obj struct,name = %s\n", name_.c_str());
}

Obj::Obj(const String& name):name_(name)
{
    printf("Obj struct,name = %s\n", name_.c_str());
}

Obj::~Obj()
{
    printf("Obj:%s destruct\n", name_.c_str());
}

String Obj::GetName()
{
    return name_;
}

} // namespace lmr
