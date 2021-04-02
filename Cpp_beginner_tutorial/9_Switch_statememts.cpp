# include <iostream>
# include <cmath>
using namespace std;

string get_day_of_week(int day)
{
    string name;

    switch(day)
    {
        case 0:
        name = "Sunday";
        break;

        case 1:
        name = "Monday";
        break;

        case 2:
        name = "Tuesday";
        break;

        case 3:
        name = "Wednesday";
        break;

        case 4:
        name = "Thrusday";
        break;

        case 5:
        name = "Friday";
        break;

        case 6:
        name = "Saturday";
        break;

        default:
        name = "Invalid input";
    }

    return name;
}

int main()
{
    cout << get_day_of_week(4) << endl;
}