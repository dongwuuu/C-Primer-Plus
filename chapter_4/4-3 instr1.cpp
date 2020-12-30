#include<iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char desert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite desert:\n";
    cin >> desert;
    cout << "I have some delixious " << desert;
    cout << " for you, " << name << ".\n";
    return 0; 
}