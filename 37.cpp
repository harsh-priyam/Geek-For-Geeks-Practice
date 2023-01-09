// FindingTheTripletsIfPresentWithAnyPairs - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

int TripletsPair(int *arr, int n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        int high = n - 1;
        int low = i + 1;

        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == x)
            {
                return 1;
            }
            else
            {
                if (arr[i] + arr[low] + arr[high] < x)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    int n = 7;
    int x = 145;

    cout << TripletsPair(arr, n, x);

    return 0;
}