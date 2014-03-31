#pragma once
#include "myexception.h"

class MyExceptionEmptyQueue : public MyException
{
public:
    MyExceptionEmptyQueue(const char *text);
};

