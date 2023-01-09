// Partition(Naive Approach But Stable Algorithm) - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include<iostream>
using namespace std;

void NaivePartition(int *arr, int low, int high, int pivot)
{
    int index = 0;
    int temp[high - low + 1];

    for (int i = low; i <= high; i++)
    {
        if (arr[i] < arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = low; i <= high; i++)
    {
        if (arr[i] == arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = low; i <= high; i++)
    {
        if (arr[i] > arr[pivot])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

int main()
{

    int arr[] = {3, 8, 6, 12, 10, 7};
    int n = 6;
    NaivePartition(arr,0,n-1,5);
     
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<"\t";
     }
     

    return 0;
}