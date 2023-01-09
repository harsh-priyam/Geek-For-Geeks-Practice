// HoaresPartition - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int HoaresPartition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

int main()
{

    int arr[] = {5,3,8,4,2,7,1,10};
    int n = 8;
    HoaresPartition(arr, 0, n - 1);
    
    	for(int x: arr)
	    cout<<x<<" ";

    return 0;
}