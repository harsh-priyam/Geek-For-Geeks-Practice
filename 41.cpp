// InsertionSortAlgorithm - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void InsertionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > flag)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = flag;
    }
}

int main()
{
    int arr[] = {20, 5, 40, 60, 10, 30};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    InsertionSort(arr, n);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}