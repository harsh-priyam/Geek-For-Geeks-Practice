// LomutoPartition - By- Harsh Priyam
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
        swap(arr[i + 1], arr[high]);
    }
    return i + 1;
}

int main()
{
  int arr[] = {3, 8, 6, 12, 10, 7};
  int n = 6;
  LomutoPartition(arr,0,n-1);

  for (int i = 0; i < n; i++)
  {
      cout<<arr[i]<<"\t";
  }
  
   
    return 0;
}