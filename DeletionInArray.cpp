 // Deletion in a Array -: By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;

int DeleteFunc(int *arr , int n)
{
    int pos;
    cout<<"Enter the position from wher eu have to delete"<<endl;
    cin>>pos;
   for(int i = pos+1 ; i <= n ; i++ )
   {
       arr[i-1] = arr[i];
   }
   return n-1;
}

void PrintArray(int *arr , int n)
{
    for(int i = 0 ; i< n ; i++)
      cout<<arr[i]<<'\t';
}
 
 
int main() {
int arr[20] = {10,20,30,40,50};
int n = 5;

DeleteFunc(arr,n);
PrintArray(arr,n-1);
 
return 0;
}