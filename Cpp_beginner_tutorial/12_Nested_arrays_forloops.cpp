# include <iostream>
# include <cmath>
using namespace std;

/*

comment block
lol
lll

*/

int main()
{
    int grid[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    cout << grid[2][0] << endl;
    // access array

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }


}