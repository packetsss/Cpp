# include <iostream>
# include <cmath>
using namespace std;

int power(int base, int pow)
{
    int rst = 1;
    for(int i = 0; i < pow; i++)
    {
        rst = rst * base;
    }

    return rst;
}

int main()
{
    cout << power(5, 5) << endl;
}