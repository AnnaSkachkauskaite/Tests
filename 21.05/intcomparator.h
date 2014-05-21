#pragma once
#include "comparator.h"

///Class which compares two numbers
class IntComparator : public Comparator<int>
{
public:
    IntComparator();
    ~IntComparator(){}
    bool compare(int number1, int number2);
};
