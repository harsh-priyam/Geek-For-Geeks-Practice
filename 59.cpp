// MeetingMaximumGuests -> By -> Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <bits/stdc++.h>
using namespace std;

int MaximumGuest(int *arr, int *dep, int n)
{
    int i = 1, j = 0, curr = 1, res = 1;
    sort(arr, arr + n);
    sort(dep, dep + n);
    while (i < n && j < n)
    {
        if (arr[i] < dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(curr, res);
    }
    return res;
}

int main()
{
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = 6;
    cout << MaximumGuest(arr, dep, n);
    return 0;
}