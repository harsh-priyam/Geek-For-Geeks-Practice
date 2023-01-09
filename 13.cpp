// FrequenciesInASortedArray - By- Harsh Priyam
// Time Complexity --->

#include <iostream>
using namespace std;

void CountFreq(int *arr, int n)
{
    int freq = 1;
    int i = 1;

    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " freq is::" << freq << endl;
        i++;
        freq = 1;
    }
}

int main()
{

    int arr[] = {10, 10, 10, 25, 30, 30};
    int n = 6;
    CountFreq(arr, n);
    return 0;
}