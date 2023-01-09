// MaximumConscecutive1'sInABinaryArray - By- Harsh Priyam
// Time Complexity --->
#include <iostream>
using namespace std;

int MaxConc1sInBinary(int *arr, int n)
{
    int res = 0, curr = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}

int main()
{

    int arr[] = {0, 1, 1, 0, 1, 1, 1, 0, 1};
    int n = 9;

    int rslt = MaxConc1sInBinary(arr, n);
    cout << "The Maximum times 1's repeat in the binary array is::" << rslt << endl;

    return 0;
}