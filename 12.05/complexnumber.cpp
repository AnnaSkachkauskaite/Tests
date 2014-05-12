#include "complexnumber.h"
#include <cmath>

ComplexNumber::ComplexNumber() : Pair()
{

}

ComplexNumber::ComplexNumber(double a, double b) : Pair(a, b)
{

}

ComplexNumber ComplexNumber::operator *(ComplexNumber number)
{
    ComplexNumber result;
    result.first = first * number.first - second * number.second;
    result.second = first * number.second + second * number.first;
    return result;
}

double ComplexNumber::length()
{
    return sqrt(first * first + second * second);
}

ComplexNumber ComplexNumber::operator *(double mul)
{
    ComplexNumber result;
    result.first = first * mul;
    result.second = second * mul;
    return result;
}

ComplexNumber ComplexNumber::operator +(ComplexNumber pair)
{
    ComplexNumber result;
    result.first = first + pair.first;
    result.second = second + pair.second;
    return result;
}
