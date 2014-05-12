#pragma once
#include "pair.h"

///Class for complex numbers
class ComplexNumber : public Pair
{
public:
    ComplexNumber();
    ComplexNumber(double a, double b);
    ///Multiplication of complex numbers
    ComplexNumber operator *(ComplexNumber number);
    ///Modulus of complex number
    double length();
    ComplexNumber operator * (double mul);
    ComplexNumber operator + (ComplexNumber pair);
};


