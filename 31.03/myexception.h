#pragma once
//Class for exception with messages
class MyException
{
public:
    MyException(const char* text);
    ///Get message text
    const char *getErrText();

private:
    const char* const message;
};


