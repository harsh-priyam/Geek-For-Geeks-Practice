// CheckingIfTheArrayisSortedOrNot - By- Harsh Priyam
// Time Complexity --->
#include<iostream>
#include<cmath>
using namespace std;

bool CheckArray(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (arr[i - 1] > arr[i])
           return false;
        
    }
       return true;   
}

int main()
{
    int arr[] = {8, 16, 24, 32, 1};
    int n = 5;
    CheckArray(arr, n);
         printf("%s", CheckArray(arr, n)? "true": "false");

    return 0;
}