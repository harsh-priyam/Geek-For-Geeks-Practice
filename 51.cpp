// KthSmallestELementInTheArraySet - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int LPart(int *arr, int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];

    for (int j = low; i <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int KthSmallest(int *arr, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int p = LPart(arr, low, high);
        if (p == k - 1)
        {
            return p;
        }
        else if (p < k - 1)
        {
            low = p + 1;
        }
        else
        {
            high = p - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {30, 20, 5, 10, 8};
    int n = 5;
    int k = 4;

    int index = KthSmallest(arr, n, k);
    cout << arr[index];

    return 0;
}