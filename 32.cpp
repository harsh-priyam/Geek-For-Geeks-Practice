// FindingSquareRootViaBinarySearchMethod - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int SquareRoot(int x)
{
    int low = 1;
    int high = x;
    int res = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int msq = mid * mid;

        if (msq == x)
        {
            return mid;
        }

        else if (msq > x)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
            res = mid;
        }
    }
    return res;
}

int main()
{
    cout << SquareRoot(25);

    return 0;
}