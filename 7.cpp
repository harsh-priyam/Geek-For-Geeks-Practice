 // Removing Duplicates - By- Harsh Priyam
// Time Complexity --->  
#include<iostream>
using namespace std;
 
int RemovingDuplicates(int *arr,int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res-1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
        
    }
    return res;
}


 
int main() {
 int arr[] = {10,20,20,30,30,30};
 int n = 6;

cout<<"Before Removing the Duplicates:::"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\t";
}


n = RemovingDuplicates(arr,n);

cout<<"After Removing the Duplicates:::"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\t";
}
 
return 0;
}