// Searching in a 2D Matrix - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int r = 4;
const int c = 4;

void SearchIn2DMatrix(int matrix[r][c], int x)
{
    int i = 0;
    int j = c - 1;

    while (i < r && j >= 0)
    {
        if (matrix[i][j] == x)
        {
             cout<<"Element Successfully Founded!!\n";
             return;
        }

        else if (matrix[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
      
    }
    
      cout << "Not Found\n";
}

int main()
{
     int matrix[r][c] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    SearchIn2DMatrix(matrix,7);                    

    

    return 0;
}