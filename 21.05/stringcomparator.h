#pragma once
#include "comparator.h"
#include <string>

using namespace std;

///Class which compares two strings
class StringComparator : public Comparator<string>
{
public:
    StringComparator();
    ~StringComparator(){}
    bool compare(string str1, string str2);
};


