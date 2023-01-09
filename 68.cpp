// Spiral Traversal OF Matrix - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int r = 4;
const int c = 4;

void SpiralMatrixTraversal(int matrix[r][c])
{
    int left = 0;
    int right = c - 1;
    int top = 0;
    int bottom = r - 1;

    while (left <= right && bottom <= top)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] + " ";
            top++;
        }

        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] + " ";
            right--;
        }

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] + " ";
                bottom--;
            }
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] + " ";
                left++;
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

    SpiralMatrixTraversal(matrix);

    return 0;
}