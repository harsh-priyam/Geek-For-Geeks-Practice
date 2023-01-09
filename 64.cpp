// Printing A Matrix in A Snake Pattern - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int r = 4;
const int c = 4;

void SnakePattern(int matrix[r][c])
{
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

int main()
{
    int matrix[r][c] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

   SnakePattern(matrix);
    return 0;
}