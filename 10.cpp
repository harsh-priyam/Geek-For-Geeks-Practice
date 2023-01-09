// Rotate The Array By d Spaces  - By- Harsh Priyam
// Time Complexity --->
#include <iostream>
using namespace std;

void Reverse(int *arr, int low, int high)
{
    while (low < high)
    {
       swap(arr[high],arr[low]);
        low++;
        high--;
    }
}

void ReverseArray(int *arr, int d, int n)
{
    Reverse(arr, 0, d - 1);
    Reverse(arr, d, n - 1);
    Reverse(arr, 0, n - 1);
}



int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;

    cout << "Before Shifting..." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    ReverseArray(arr, n, d);
    cout << endl;

    cout << "After Shifting..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}