#pragma once
#include "comparator.h"

///Class which compares two symbols
class CharComparator : public Comparator<char>
{
public:
    CharComparator();
    ~CharComparator(){}
    bool compare(char a, char b);
};

