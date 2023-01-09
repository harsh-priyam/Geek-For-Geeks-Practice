//BubbleSortAlgorithm  -By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void BubbleSort(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        bool SwapVar = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                SwapVar = true;
            }
        }
        if (SwapVar == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {10, 5, 8, 20, 2, 18};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    BubbleSort(arr, n);
    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}