#include <iostream>

int main()
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamscosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1]  << " yams costs ";
    cout << yamscosts[1] << " cents per yam.\n";
    int total = yams[0] * yamscosts[2];
    cout << "The total yam ecpense is " << total << " cents.\n";
    
    cout << "\nSize od yams array = " << sizeof yams;
    cout << "bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    return 0;
}