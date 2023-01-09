//SegregateTheFollowingBtwnThePivot - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void SegAmongPivot(int *arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] < 2)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
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
   int arr[] = {2,1,2,20,10,20,1};
   int n = 7;
   SegAmongPivot(arr,n);
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<"\t";
   }
   
    return 0;
}