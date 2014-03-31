#include "myexception.h"

MyException::MyException(const char *text) : message(text)
{
}

const char* MyException::getErrText()
{
    return message;
}
