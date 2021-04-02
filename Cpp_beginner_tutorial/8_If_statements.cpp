# include <iostream>
# include <cmath>
using namespace std;

int getMax(int num1, int num2, int num3)
{

    if(num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    bool isMale = false, isTall;
    isMale = false;
    isTall = true;

    if(isMale)
    {
        cout << "You are a male" << endl;
    }
    else if(isTall || isMale)
    // || --> or operator, && --> and operator, ! --> not
    {
        cout << "You are tall" << endl;
    }
    else
    {
        cout << "You GOOF" << isMale << isTall << endl;
    }

    cout << getMax(13, 15, 7) << endl;

}