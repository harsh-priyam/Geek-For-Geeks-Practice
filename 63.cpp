// Passing_2D_Array_As_Arguments -By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int r = 3;
const int c = 2;

void MultiArray(int matrix[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}

int main()
{

    int matrix[r][c] = {{10, 20},
                        {30, 40},
                        {50, 60}};
    MultiArray(matrix);

    return 0;
}