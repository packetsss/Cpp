#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;

class ParkingSystem {
public:
    int arr[3];
    ParkingSystem(int big, int medium, int small) {
        arr[0] = big;
        arr[1] = medium;
        arr[2] = small;
    }
    
    bool addCar(int carType) {
        arr[carType - 1]--;
        return arr[carType - 1] >= 0;
    }
};

// -------- BELOW is used to call the class above --------- //

int main()
{
    ParkingSystem p(1, 1, 0);

    int lst[] = {1, 2, 3, 1};

    for(int i = 0; i < *(&lst + 1) - lst; i++) // iterate through length of lst
    {
        printf("Car type: %d, can be added: %s\n", lst[i], p.addCar(lst[i]) ? "true":"false");
    }
    
}