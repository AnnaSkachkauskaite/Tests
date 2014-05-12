#include "pair.h"

Pair::Pair() : first(0), second(0)
{
}

Pair::Pair(double a, double b) : first(a), second(b)
{
}

Pair::~Pair()
{
}

Pair Pair::operator *(double mul)
{
    Pair result;
    result.first = first * mul;
    result.second = second * mul;
    return result;
}

Pair Pair::operator +(Pair pair)
{
    Pair result;
    result.first = first + pair.first;
    result.second = second + pair.second;
    return result;
}
