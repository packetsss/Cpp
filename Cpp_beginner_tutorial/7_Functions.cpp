# include <iostream>
#include <cmath>
using namespace std;

double cube(double num);

void say_hi(string name, int age)
// function with no return
{
    cout << "Hello " << name << ", you are " << age << endl << endl;
}

int main()
{
    say_hi("AJ", 10);

    cout << cube(10);
}

double cube(double num)
// claim the function and return a value
{
    double rst = num * num * num;
    return rst;
}