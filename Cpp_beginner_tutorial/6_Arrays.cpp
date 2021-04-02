# include <iostream>
#include <cmath>
using namespace std;

int main()
{  
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    // indexes:    0  1  2   3   4   5

    luckyNumbers[0] = 90;
    // change assignment
    cout << luckyNumbers[0] << endl;
    cout << luckyNumbers[1] << endl;

}
