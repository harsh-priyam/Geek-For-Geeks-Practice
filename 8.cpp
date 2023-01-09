// MovZeroToLast - By- Harsh Priyam
// Time Complexity --->
#include <iostream>
using namespace std;

void MovZeroToLast(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[n - 1];
            arr[n - 1] = temp;
        }
    }
}

int main()
{
int arr[] = {8,5,0,10,0,20};
int n = 6;

cout<<"Before Setting 0s.."<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\t";
    
}

MovZeroToLast(arr,n);

cout<<endl;

cout<<"After Setting 0s.."<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\t";
  
}

    return 0;
}