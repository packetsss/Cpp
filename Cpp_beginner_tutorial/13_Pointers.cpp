#include <iostream>
using namespace std;

int main()
{
    int age = 10;
    double gpa = 3.0;
    string name = "Jack";

    cout << "Age: " << &age << endl;
    // pointer
    // memory address

    int *pAge = &age;
    // use * to create pointer variable
    // must be the same type
    double *pGPA = &gpa;
    string *pName = &name;

    cout << "Name: " << *pName << endl;
    cout << "Gpa: " << *&gpa << endl;
    // de-refrencing the pointer --> get "Jack" instead

}