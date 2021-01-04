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

    return 0;
}