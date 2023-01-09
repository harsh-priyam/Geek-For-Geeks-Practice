// PrintingTheBoundaryElementsInAnArray - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int r = 4;
const int c = 4;

void BoundaryTraversal(int matrix[r][c])
{
    if (r == 1)
    {
        for (int i = 0; i < c; i++)
        {
            cout << matrix[0][i] << " ";
        }
    }

    if (c == 1)
    {
        for (int i = 0; i < r; i++)
        {
            cout << matrix[i][0] << " ";
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << matrix[0][i] << " ";
    }
    for (int i = 1; i < r; i++)
    {
        cout << matrix[i][c - 1] << " ";
    }
    for (int i = c - 2; i >= 0; i--)
    {
        cout << matrix[r - 1][i] << " ";
    }
    for (int i = r - 2; i >= 1; i--)
    {
        cout << matrix[i][0] << " ";
    }
}

int main()
{
    int matrix[r][c] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    BoundaryTraversal(matrix);

    return 0;
}