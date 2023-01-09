// WindowSlidingTechnique - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
#include <cmath>
using namespace std;

int MaxSumTillK(int *arr, int n, int k)
{
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += arr[i];
    }
    int mxmSum = curr_sum;

    for (int i = k; i < n; i++)
    {
        curr_sum += (arr[i] - arr[i - k]);
        mxmSum = max(mxmSum, curr_sum);
    }
    return mxmSum;
}

int main()
{

    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6;
    int k = 3;

    cout << MaxSumTillK(arr, n, k);

    return 0;
}