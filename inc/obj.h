#ifndef __OBJ_H__
#define __OBJ_H__

#include "lmrcfg.h"
#include "lmrtypes.h"
#include "lmrlog.h"

namespace lmr {

class Obj
{
public:
    explicit Obj(const String& name);
    virtual ~Obj();

    Void SetName(String name);
    String GetName();
private:
    String name_;
}; // class Obj

} // namespace lmr

#endif //  __OBJ_H__
