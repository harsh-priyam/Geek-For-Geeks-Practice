// DoublePointerApproach(Finding The Desired Pair of Sum if made) - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int DesiredSum(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == x)
        {
            return 1;
        }
        else
        {
            if (arr[low] + arr[high] < x)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    return -1;
}

int main()
{
  int arr[] = {2,5,8,12,30};
  int n = 5;
  int x = 87;
cout<<DesiredSum(arr,n,x);
    return 0;
}