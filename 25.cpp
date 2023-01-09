  // EquilribiumPointINArray - By- Harsh Priyam
 // Time Complexity  --->
// Space Complexity --->
#include <iostream>
using namespace std;

void Equilribium(int *arr, int n)
{

    for (int i = 1; i <= n - 1; i++)
    {
        int j = i - 1;
        int sum1 = 0;

        while (j >= 0)
        {
            sum1 = sum1 + arr[j];
            j--;
        }

        int k = i + 1;
        int sum2 = 0;

        while (k <= n - 1)
        {
            sum2 = sum2 + arr[k];
            k++;
        }

        if (sum1 == sum2)
        {
            cout << "Yes!! at " << i << endl;
            break;
        }
    }
}

int main()
{
  int arr[] = {-7, 1, 5, 2, -4, 3, 0};
  int n = 7;
  Equilribium(arr,n);
    return 0;
}