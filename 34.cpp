// SearchInARotatedSortedArray- By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int SearchRotatedArray(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return 1;
        }

        if (arr[low] < x)
        {
            if (arr[low] < x && arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] < x && arr[high] > x)
            {
                low = mid - 1;
            }
            else
            {
                high = mid + 1;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,8,9};
    int n = 7;

    cout<<SearchRotatedArray(arr,n,80);

    return 0;
}