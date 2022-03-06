#ifndef __OBJ_H__
#define __OBJ_H__

#include "lmrtypes.h"

namespace lmr {

class Obj
{
public:
    explicit Obj();
    explicit Obj(const String& name);
    virtual ~Obj();

    String GetName();
private:
    const String name_;
}; // class Obj

} // namespace lmr


#endif //  __OBJ_H__
