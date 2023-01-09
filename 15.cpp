// TrappingRainWater - By- Harsh Priyam
// Time Complexity --->
#include <iostream>
#include <cmath>

using namespace std;

int TrappingRainWaterProblem(int *arr, int n)
{
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
         int res = 0;  
        int lmax[n], rmax[n];

        lmax[0] = arr[0];

        for (int i = 1; i < n - 1; i++)
        {
            lmax[i] = max(lmax[i-1], arr[i]);
        }

        rmax[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            rmax[i] = max(rmax[i+1], arr[i]);
        }

        for (int i = 1; i < n; i++)
        {
            res = res + (min(lmax[i], rmax[i])) - arr[i];
        }

        return res;
    }

   return res;
}

int main()
{

    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;

    cout<<TrappingRainWaterProblem(arr, n);

    return 0;
}