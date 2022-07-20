#include "fstream.hpp"

std::string replace(std::string cont ,std::string tofind, std::string toreplace)
{
    size_t         found = cont.find(tofind);
    while (found != std::string::npos)
    {
        cont.erase(found , tofind.length());
        cont.insert(found, toreplace);
        found = cont.find(tofind);
    }
    return cont;
}