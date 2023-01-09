// QucikSortUsingHoaresPartititon - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int HoaresPartition(int *arr, int low, int high)
{
    int i = low - 1;
    int j = high + 1;
    int pivot = arr[high];

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

void QuickSortHP(int *arr, int low, int high)
{
    if (low < high)
    {
        int p = HoaresPartition(arr, low, high);
        QuickSortHP(arr, low, p - 1);
        QuickSortHP(arr, p + 1, high);
    }
}

int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int n = 7;
    QuickSortHP(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}