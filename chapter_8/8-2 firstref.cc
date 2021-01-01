#include<iostream>

int main()
{
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    cout << "rats = " << rats << " rodents = " << rodents << endl;

    rodents ++;
    cout << "rats = " << rats << " rodents = " << rodents << endl;
    cout << "Address of rats = " << &rats;
    cout << " Address of rodents = " << &rodents << endl;
}