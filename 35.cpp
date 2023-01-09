// PeakElementUsingBinarySearchMethod - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int PeakElement(int *arr, int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = low + high / 2;

        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid - 1]))
        {
            return mid;
        }
        else
        {
            if (mid > 0 && arr[mid] < arr[mid - 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 10, 20, 15, 7};
    int n = 5;

    cout << PeakElement(arr, n);
    return 0;
}