#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

time_t start, end1;
int n = 10222345;

int main()
{   
    time(&start);

    int prod = n % 10;
    int sum = n % 10;
    while(n >= 10)
    {
        n /= 10;
        prod *= n % 10;
        sum += n % 10;
    }
    int rst = prod - sum;
    cout << rst << endl;

    time(&end1);
    cout << "Time taken by program is : " << fixed << end1 - start << setprecision(50) << " sec " << endl;

    return rst;
}