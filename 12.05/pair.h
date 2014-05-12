#pragma once

///Clas for pair of numbers
class Pair
{
public:
    double first;
    double second;
    Pair();
    Pair(double a, double b);
    ~Pair();
    ///Multiply pair on number
    Pair operator * (double mul);
    ///Method for addition pairs
    Pair operator + (Pair pair);
};


