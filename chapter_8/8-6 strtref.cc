#include<iostream>
#include<string>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float precent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main()
{
    free_throws one = {"one", 13, 14};
    free_throws two = {"two", 1, 2};
    free_throws three = {"three", 3, 4};
    free_throws four = {"four", 4, 5};
    free_throws five = {"five", 5, 6};
    free_throws six = {"six", 0, 0};

    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(six, one);
    display(six);

}

void display(const free_throws & ft){
    std::cout << "name: " << ft.name << " made: " << ft.made << " attempts: " << ft.attempts << " precents: " << ft.precent << std::endl;
}  

void set_pc(free_throws & ft){
    if (ft.attempts != 0)
        ft.precent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.precent = 0.0;
}

free_throws & accumulate(free_throws & target, const free_throws & source){
    target.made += source.made;
    target.attempts += source.attempts;
    set_pc(target);
    return target;
}
