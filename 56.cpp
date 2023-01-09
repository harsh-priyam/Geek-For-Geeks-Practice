// SegregateWithThreeTypes(0,1,2s) - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;
void SegWithThreeType1(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
   int arr[] = {1,2,1,0,1,0,2,0,1,1,1,0};
   int n = 12;
   SegWithThreeType1(arr,n);
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<"\t";
   }
   
    return 0;
}