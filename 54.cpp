// Segregate Even ANd ODD - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void SegEvenAndOdd(int *arr, int n)
{
    int i = -1;
    int j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] % 2 == 0);
        do
        {
            j--;
        } while (arr[j] % 2 != 0);

        if (i >= j)
        {
            return;
        }
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[]={15,14,13,12};
    int n = 4;
    SegEvenAndOdd(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}