// CountInversion - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void MergeSort(int *arr, int low, int mid, int high)
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
    arr2[i] = arr[mid + 1 + i];
  }

  int res = 0, i = 0, j = 0, k = low;

  while (i < n1 && j < n2)
  {
    if (arr1[i] <= arr2[j])
    {
      arr[k] = arr1[i];
      i++;
    }
    else
    {
      arr[k] = arr2[j];
      j++;
      res = res + (n1 - i);
    }
  }
  k++;
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
  res++;
}

int CountInversion(int *arr, int low, int high)
{
  int res = 0;
  if (low < high)
  {
    int mid = low + high / 2;

    res += CountInversion(arr, low, mid);
    res += CountInversion(arr, mid + 1, high);
    res += MergeSort(arr, low, mid, high);
  }
  return res;
}

int main()
{
  int arr[] = {2, 4, 1, 3, 5};
  int n = 5;
  cout << CountInversion(arr, 0, n - 1);
  return 0;
}