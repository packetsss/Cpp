# include <iostream>
using namespace std;

int main()
{
    char grade = 'A';
    string phrase = "College";
    // plain text
    int age = 20;
    double gpa = 3.77777777;
    float gpa2 = 3.454;
    bool isTrue = false;

    // cout << isTrue << endl;

    
    // #include <string>
    string greeting = "Hello";
    //      indexes:   01234


    cout << greeting[0] << endl;
    // access index
    cout << greeting.find("llo", 0) << endl;
    // start with 2
    cout << greeting.substr(2) << endl;
    // slice the string (starting idx, length)
    cout << greeting.substr(1, 3) << endl;

}
