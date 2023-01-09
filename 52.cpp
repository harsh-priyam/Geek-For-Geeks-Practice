 // ChocolateDistributionProblem - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include <bits/stdc++.h>
using namespace std;

int ChocolateDistribution(int *arr , int n , int m)
{
    
    if (m > n)
    {
        return -1;
    }
    
    sort(arr,arr+n);
     
    int res = arr[m-1]-arr[0];
    for (int i = 1; m+i-1 < n ; i++)
    {
        res  = min(res,(arr[m+i-1] - arr[i]));
    }
    return res;
} 
 
int main() {
 int arr[] = {7,3,2,4,9,12,56};
 int n = 7;

 cout<<ChocolateDistribution(arr,n,3);
 
return 0;
}