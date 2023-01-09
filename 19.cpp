  // MxmCircularSubArraySum -By- Harsh Priyam
 // Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;


int SubArraySum(int *arr , int n)
{
    int sub_sum = arr[0];
      int res = 0;

    for (int i = 0; i < n; i++)
    {
      sub_sum = max((sub_sum + arr[i]),arr[i]);
      res = max(sub_sum , res);  
    }
    return res;
}

int MxmCircularSubArraySum(int *arr , int n)
{
    int sub_array_sum = SubArraySum(arr , n);
    if (sub_array_sum < 0)
    {
        return sub_array_sum;
    }

     int arr_sum = 0;
     for (int i = 0; i < n; i++)
     {
         arr_sum = arr_sum + arr[i];
         arr[i] = -arr[i];
     }
     int max_circular = arr_sum + sub_array_sum;
     return max(max_circular,sub_array_sum);
}


int main() {
  int arr[] = {8, -4, 3, -5, 4};
  int n = 5;

  cout<<MxmCircularSubArraySum(arr,n);
 
return 0;
}