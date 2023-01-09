 // LastOccurenceViaBinarySearch - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;

int  LastOccurence(int *arr ,int n , int x)
{
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = low+high/2;

        
         if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        
        else
        {
            if (mid == 0 || arr[mid+1] != arr[mid] )
            {
                return mid;
            }
            else
            {
                high = mid-1;
            }
            
        }
        
    }
    return -1;
} 

 
int main() {

int arr[] = {1,10,10,10,20,20,40};
int n = 7;
int x = 20;
cout<<LastOccurence(arr,n,x);
 
return 0;
}