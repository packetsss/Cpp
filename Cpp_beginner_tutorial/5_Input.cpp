# include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int age, goof, goof1;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    // 2 ways of get inputs

    cout << "Hello " << name << " with age: " << age << endl;

}