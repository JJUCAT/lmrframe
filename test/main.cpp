#include "baseinc.h"
#include "obj.h"

#include <iostream>

using namespace std;
using namespace lmr;

int main(int argc, char** argv)
{
    cout << __FILE__ << " test start." << endl;

    Obj* obj1 = new Obj("yamoto");
    cout << "obj1 name: " << obj1->GetName() << endl;
}

