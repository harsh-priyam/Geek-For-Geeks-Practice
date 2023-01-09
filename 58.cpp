// MinimumDiffrenceInAnArray - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <bits/stdc++.h>
using namespace std;

int MinimumDiffArray(int *arr, int n)
{

    sort(arr, arr + n);
    int res = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        res = min(res, arr[i] - arr[i - 1]);
    }
    return res;
}
int main()
{

    int arr[] = {1, 8, 12, 5, 18};
    int n = 5;

    cout << MinimumDiffArray(arr, n);

    return 0;
}