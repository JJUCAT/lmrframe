#include "lmrinc.h"
#include "ini.h"


#include <fstream>

using namespace std;

namespace lmr {

Ini::Ini(String pathname, String objname = "ini")
   : pathname_(pathname), Obj(objname)
{
    DEBUG_D("init config.ini:%s", pathname_.c_str());
}

Ini::~Ini()
{

}

S32 Ini::Save(const String& pathname)
{

}

String Ini::Read(const String& segment, const String& key)
{

}

S32 Ini::Write(const String& segment, const String& key, const String& value)
{

}

S32 Ini::Parse()
{
    S32 ret = 0;
    ifstream file;

    file.open(pathname_.c_str(), ios::in);

    S32 num = 0, snum = 0, idxe = string::npos;
    String line, segment = "null";
    
    while (num ++, getline(file, line))
    {
        DEBUG_D("line[%d]:%s", num, line.c_str());




        idxe = string::npos;
        if ((snum > 0) && ((idxe = line.find('=')) != string::npos))
        {
            skv_[segment+":"] = line;
        }

        if ((line.find('[') == 0) && (line.rfind(']') == (line.size() - 1)))
        {
            segment = line.substr(1, line.size() - 2);
            snum ++;
            DEBUG_D("find segment[%d]:%s", snum, segment.c_str());
        }


    }
}








} // namespace lmr
