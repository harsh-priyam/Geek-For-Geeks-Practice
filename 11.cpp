 // leadersInaArray - By- Harsh Priyam
// Time Complexity --->  
#include<iostream>
using namespace std;
 
void LeadersInAnArray(int *arr , int n)
{
      int curr_ldr = arr[n-1];
      cout<<curr_ldr<<endl;
    for (int i = n-2; i >= 1; i--)
    {
        if (arr[i] > curr_ldr)
        {
            curr_ldr = arr[i];
            cout<<curr_ldr<<endl;            
        }
        
    }
    
}

 
int main() {

int arr[]= {7,10,4,3,6,5,2};
int n = 7;

LeadersInAnArray(arr,n);
 
return 0;
}