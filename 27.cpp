// ReccursiveApproachForTheBinarySearch - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int BinarySearch(int *arr, int n, int x, int low, int high)
{
    
    int mid = low + high / 2;

    if (low > high)
    {
        return -1;
    }
    else if (arr[mid] == x)
    {
        return 1;
    }
    else if (arr[mid] < x)
    {
        return BinarySearch(arr, n, x, mid + 1, high);
    }
    else
    {
        return BinarySearch(arr, n, x, low, mid - 1);
    }
}

int main()
{
   int arr[]={10,20,30,40,50,60};
   int n = 6;
   int x = 60;
   cout<<BinarySearch(arr,n,x,0,n-1);
    return 0;
}