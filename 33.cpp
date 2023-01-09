// SearchingInAInfiniteArray -By- Harsh Priyam
// Time  Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int BinarySearch(int *arr,  int low, int high , int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == x)
    {
        return mid;
    }

    else if (arr[mid] > x)
    {
        return BinarySearch(arr, low, mid - 1, x);
    }
    else
    {
        return BinarySearch(arr, mid+1 , high , x);
    }   
}

int SearchInInfinity(int *arr, int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;

        if (arr[i] == x)
        {
            return i;
        }        
    }
    return BinarySearch(arr,i / 2 + 1, i - 1,x);
}

int main()
{
    
    int arr[] = {1,8,15,21,29,30};
    cout<<SearchInInfinity(arr,28);


    return 0;
}