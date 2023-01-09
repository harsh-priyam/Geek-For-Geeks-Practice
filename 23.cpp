// SubArrayWithGiivenSum - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int SubArrayWithSum(int *arr, int n)
{
    int MxmSum = arr[0];
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        MxmSum = max((MxmSum + arr[i]), arr[i]);
        res = max(res, MxmSum);
    }
    return res;
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = 6;
    int sum = 33;
    if (SubArrayWithSum(arr, n) == sum)
    {
        cout << "Yes!!" << endl;
    }
    else
    {
        cout << "No!!" << endl;
    }

    return 0;
}