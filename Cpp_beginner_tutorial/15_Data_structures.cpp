#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    cout << v[0] << endl;
    cout << v.size() << endl;
    // runtime O(1)


    set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(105);
    // runtime O(log n)

    cout << s.size() << endl;
    // runtime O(1)

    auto it = s.find(810);
    // iterator points to 810
    cout << (it != s.end() ? "Found":"None") << endl; 
    // print("Found") if it != s.end() else print("None")
    // ? is for evaluation
    // runtime O(log n)
    

    unordered_set<int> s1;
    // all runtime O(1)

    map<string, int> d;
    d["Hi"] = 10;
    d["Me"] = 1;
    d["Hi"]++;

    cout << d["Hi"] << endl;
    cout << d["Me"] << endl;
    // mostly speed O(log n)

    unordered_map<string, int> d1;
    // all speed O(1)

    auto it = s.find(10);

    if (it != s.end())
    {
        // Do something with it, no more lookup needed.
    }
    else
    {
        // Key was not present.
    }
}