#pragma once

///Class which compares two objects
template <typename T>
class Comparator
{
public:
    Comparator(){}
    virtual ~Comparator(){}
    virtual bool compare(T a, T b) = 0;
};

