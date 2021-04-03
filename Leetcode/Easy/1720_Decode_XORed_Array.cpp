#include <iostream>
#include <vector>
using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    encoded.insert(encoded.begin(), first);


    for(int i = 0; i < encoded.size(); i++)
    {   
        encoded[i + 1] = encoded[i + 1] ^ encoded[i];
    }

    return encoded;

};

int main()
{
    vector<int> v = {1, 2, 3};
    v = decode(v, 1);

    for(auto it = v.begin(); it != v.end(); ++it)
    {
        // print all elements in encoded vector
        cout << *it << ", ";
    }

}