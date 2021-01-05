#include<cstring>
#include"strngbad.h"

using std::cout;

int StringBad::number_strings = 0;

StringBad::StringBad(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    number_strings ++;
    cout << number_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
    len = 4;
    str = new char[len];
    std::strcpy(str, "C++");
    number_strings++;
    cout << number_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, ";
    number_strings--;
    cout << number_strings << " left\n";
    delete [] str;
}

std::ostream & operator << (std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}
