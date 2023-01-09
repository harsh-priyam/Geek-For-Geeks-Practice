 // MaxmSumAndSubArray---- By- Harsh Priyam
// Time Complexity --->  
#include<iostream>
using namespace std;
 int MaxmSumAndSubArray(int *arr , int n)
 {
    int res = arr[0];
    int MaxmSub = arr[0];

    for (int i = 1; i < n; i++)
    {
        MaxmSub = max((MaxmSub+arr[i]),arr[i]);
        res = max(MaxmSub,res);
    }
    return res;
 }


 
int main() {
     
     int arr[] = {2,3,-8,7,-1,2,3};
     int n = 7;

     cout<<"The Maximum Sum Division For the Sub Array will be::"<<MaxmSumAndSubArray(arr,n)<<endl;
 
return 0;
}