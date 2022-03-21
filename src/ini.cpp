#include "ini.h"

#include <regex>
#include <fstream>
#include <iostream>

using namespace std;

namespace lmr {

Ini::Ini(String pathname, String objname)
   : pathname_(pathname), Obj(objname)
{
    DEBUG_D("init config.ini:%s", pathname_.c_str());
    Parse();
}

Ini::~Ini()
{

}

S32 Ini::Save(const String& pathname)
{
    S32 ret = 0;

    return ret;
}

String Ini::Read(const String& segment, const String& key)
{
    String sk = segment + ":";
    sk += key;

    return skv_[sk];
}

S32 Ini::Write(const String& segment, const String& key, const String& value)
{
    S32 ret = 0;

    return ret;
}

S32 Ini::Parse()
{
    S32 ret = 0;
    ifstream file;

    file.open(pathname_.c_str(), ios::in);

    S32 num = 0, snum = 0;
    String line, segment = "null";
    
    while (num ++, getline(file, line))
    {
        line = line.substr(0, line.find(';'));
        // DEBUG_D("line without note,[%d]:%s", num, line.c_str());

        if ((snum > 0))
        {
            smatch k;
            smatch v;
            regex kr("\\w+(?=\\s*=)");
            regex vr("\\w+$");

            if ((regex_search(line, k, kr)) && (regex_search(line, v, vr)))
            {
                String key = k.str();
                String value = v.str();
                skv_[(segment+key).c_str()] = value.c_str();                
            }
        }

        regex r("\\w+(?=\\])");
        smatch m;
        if (regex_search(line, m, r))
        {
            segment = *(m.begin());
            segment += ":";
            snum ++;
            DEBUG_D("find segment[%d]:%s", snum, segment.c_str());
        }
    }

    S32 i = 0;
    for (auto iter : skv_)
    {
        DEBUG_D("skv_[%d]: k:%s,v:%s", i, iter.first.c_str(), iter.second.c_str());
        i ++;
    }

    return ret;
}








} // namespace lmr
