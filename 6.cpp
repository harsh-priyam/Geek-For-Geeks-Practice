// Feversing The ARRAY - By- Harsh Priyam
// Time Complexity --->the(n)
// aux space --> the(1)

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int low = 0;
    int high = n-1;
    int arr[] = {10, 5, 7, 30};

    cout << "Before Reversal::" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\t";
    }

    while (low <= high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }
    cout<<endl;
    cout << "After Reversal::" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\t";
    }

    return 0;
}