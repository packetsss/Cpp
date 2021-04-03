#include <iostream>
#include <vector>
using namespace std;

string GetName()
{
    return "NAme";
}

int main()
{
    int a = 5;
    auto b = a;
    // assign b to int as well

    auto s = "Char";
    auto n = nullptr;
    auto name = GetName();
    // use auto for functions

    printf("Print out craps: %d, %s\n", a, s);

    vector<string> str;
    str.push_back("Apple");
    str.push_back("Banana");

    for(auto it = str.begin(); it != str.end(); it++)
    {
        cout << *it << endl;
    }

}