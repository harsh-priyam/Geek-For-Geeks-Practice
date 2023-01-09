 //MajorityOfTheElement- By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;

int MajorityElement(int *arr , int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
         if (arr[res] == arr[i])
         {
             count++;
         }
         else
         {
             count--;
         }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
                      
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        
        if (count <= n/2)
        {
            res = -1;
        }
        else
        {
            return res;
        }
        
    }
    

}


 
int main() {

  int arr[] = {8,8,6,6,6,4,6};
  int n = 7;
   cout<<MajorityElement(arr,n);
 
return 0;
}