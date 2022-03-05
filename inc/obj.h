#ifndef __OBJ_H__
#define __OBJ_H__

#include "lmrtypes.h"

namespace lmr {

class Obj
{
public:
    explicit Obj(const String& name = "obj");
    virtual ~Obj();

    Void SetName(String name);
    String GetName();
private:
    String name_;
}; // class Obj

} // namespace lmr

#endif //  __OBJ_H__
