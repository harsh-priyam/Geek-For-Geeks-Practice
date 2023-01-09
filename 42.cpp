// MergeSortAndItsAlgorithms - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void MergeSort(int *arr, int low , int mid , int high)
{
     
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr[] = {10, 15, 20, 11, 30};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    MergeSort(arr,0,2,4);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}