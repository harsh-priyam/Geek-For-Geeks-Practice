//  - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int BinarySearch(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high / 2);

        if (arr[mid] == x)
        {
            return 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
        
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    cout<<BinarySearch(arr,n,60);

    return 0;
}