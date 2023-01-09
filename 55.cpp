// Segregate Binary - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void SegBinary(int *arr, int n)
{
    int i = -1;
    int j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] == 0);
        do
        {
            j--;
        } while (arr[j] == 1);

        if (i >= j)
        {
            return;
        }
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[]={1,0,1,0,0,1,1,0,1,1,1,0,0,0,0};
    int n = 15;
    SegBinary(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}