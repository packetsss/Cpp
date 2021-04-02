# include <iostream>
#include <cmath> // default math lib
using namespace std;

int main()
{   
    // << endl; to create a new line

    cout << 2 * 3 << endl;         // Basic Arithmetic: +, -, /, *
    cout << 10 % 3 << endl;        // Modulus Op. : returns remainder of 10/3
    cout << 1 + 2 * 3 << endl;     // order of operations
    cout << 10 / 3.0 << endl;      // int's and doubles


    int num = 10;
    num += 100; // +=, -=, /=, *=
    cout << num << endl;

    num++;
    cout << num << endl;
    
    cout << pow(2, 3) << endl;
    cout << sqrt(144) << endl;
    cout << round(2.7) << endl;
    // ceil, floor, fmax, fmin

}