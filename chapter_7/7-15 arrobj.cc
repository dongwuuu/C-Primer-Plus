#include<iostream>
#include<array>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = 
    {"Spring", "Summer", "Fall", "Winter"};

void show(std::array<double, Seasons> da);
void fill(std::array<double, Seasons> *pa);

int main()
{
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void show(std::array<double, Seasons> da){
    using namespace std;
    cout << "\nExpenses\n";
    double total = 0.0;
    for(int i = 0; i < Seasons; i++){
        cout << "Season " << Snames[i] << " $: " << da[i] << endl;
        total += da[i];
    }
    cout << "Total = " << total << endl;
}

void fill(std::array<double, Seasons> *pa){
    using namespace std;
    for(int i = 0; i < Seasons; i++){
        cout << "Please Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}