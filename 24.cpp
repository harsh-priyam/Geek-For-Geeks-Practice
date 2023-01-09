// PrefixSum - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int PrefixSumArr[1000];
void PrefixSumFunc(int *arr, int n)
{

    PrefixSumArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        PrefixSumArr[i] = PrefixSumArr[i - 1] + arr[i];
    }
}

int GetSumFunc(int PrefixSumArr[], int l, int r)
{
    if (l != 0)
    {
        return PrefixSumArr[r] - PrefixSumArr[l - 1];
    }
    else
    {
        return PrefixSumArr[r];
    }
}

int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = 7;
    PrefixSumFunc(arr, n);
    cout << GetSumFunc(PrefixSumArr, 0, 3) << endl;

    return 0;
}