#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student
{
 private:
    std::string name;
    std::ostream&  arr_out(std::ostream& os) const;

public:
    Student() : name("Null Student"), scores() {}
    explicit Student(const std::string& s) : name(s), scores() {}
    explicit Student(int n) : name("Nully"), scores(n) {}
    Student(const std::string& s, const ArrayDb& a) : name(s), scores(a) {}
    
}