// QuickSortUsingLomutoPartition - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int LomutoPartition(int *arr, int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low; j <= high - 1; j++)
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

void QuickSortLP(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = LomutoPartition(arr, low, high);
        QuickSortLP(arr, low, p-1);
        QuickSortLP(arr, p + 1, high);
    }
}

int main()
{

    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int n = 7;
    QuickSortLP(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}