// SelectionSortAlgorithm - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    int arr[] = {10, 5, 8, 2, 20, 18};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    SelectionSort(arr, n);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}