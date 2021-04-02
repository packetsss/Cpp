# include <iostream>
# include <cmath>
using namespace std;

int main()
{
    int i = 1;

    while(i < 2)
    {
        cout << i << endl;
        i++;
    }

    i = 0;

    do
    {
        cout << i << endl;
        i++;
    }
    while(i <= 2);
    // do stuff first then check condition

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for(int i = 1; i < 5; i++) 
    // variable; condition; increment
    {
        cout << arr[i] << endl;
    }
}