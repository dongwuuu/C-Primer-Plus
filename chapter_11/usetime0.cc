#include<iostream>
#include"mytime0.h"

int main()
{
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planing time = ";
    planning.show();
    cout << endl;

    cout << "coding time = ";
    coding.show();
    cout << endl;

    cout << "fixing time = ";
    fixing.show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding add fixing time = ";
    total.show();
    cout << endl;

    return 0;
}