#include<iostream>
#include"mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m = 0)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes += minutes % 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h = 0, int m = 0)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time & t) const{
    Time sum;
    sum.minutes = this->minutes;
    sum.hours = this->hours + t.hours + sum.minutes / 60;
    sum.minutes = sum.minutes % 60;
    return sum;
}

void Time::show() const{
    std::cout << hours << " hours, " << minutes << " minutes." << std::endl;
}