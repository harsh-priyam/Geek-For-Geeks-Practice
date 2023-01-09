// IntersectionOfTheTwoArray-By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

void Intersection(int *arr1,int *arr2, int m , int n)
{

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr1[i - 1] == arr1[i])
        {
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
  int arr1[]={3,5,10,10,10,15,15,20};
   int arr2[] = {5,10,10,15,30};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);

   Intersection(arr1,arr2,m,n);
    return 0;
}  