// rAOTAING THE MATRIX BY 90 DEGREE - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int n = 3;

void RotatingTheMatrix(int matrix[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = n-1;

        while (low < high)
        {
            swap(matrix[low][i], matrix[high][i]);
            low++;
            high--;
        }
    }
}

int main()
{
    int matrix[n][n] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    RotatingTheMatrix(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}