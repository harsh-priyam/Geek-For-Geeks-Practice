// FindingThePairsForThePythaGorasTriplets - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int PythagorasTriplets(int *arr, int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        int low = i + 1;
        int high = n - 1;

        while (low < high)
        {
            if ((arr[i] * arr[i]) + (arr[low] * arr[low]) == arr[high] * arr[high])
            {
                return 1;
            }
            else
            {
                if ((arr[i] * arr[i]) + (arr[low] * arr[low]) < arr[high] * arr[high])
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
    }
    return -1;
}

int main()
{
   int arr[]={3,1,4,6,5};
   int n = 5;
   cout<<PythagorasTriplets(arr,n);
    return 0;
}