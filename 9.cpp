// RotateTheArrayCycillalyByOne - By- Harsh Priyam
// Time Complexity --->
#include <iostream>
using namespace std;

void RotateArrayBy1(int *arr, int n)
{
    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];     
    }
      arr[n-1] = temp;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Before Shifting..." << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    RotateArrayBy1(arr, n);
    cout << endl;

    cout << "After Shifting..." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}