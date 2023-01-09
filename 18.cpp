// MaxmLengthEvenOddARRAY - By- Harsh Priyam
//  Time Complexity --->

#include <iostream>
using namespace std;

int MaxmLengthEvenOddArray(int *arr, int n)
{
    int curr = 1;
    int res = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] % 2 == 0 || arr[i + 1] % 2 == 0) && (arr[i + 1] % 2 != 0 || arr[i] % 2 != 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 0;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10,12,14,7,8,16,3,6,1,8,13,11};
    // int arr[] = {10,12,8,4};
    int n = 11;

    cout<<"The Longest of Even Odd numbers is:: "<<MaxmLengthEvenOddArray(arr,n)<<endl;

    return 0;
}