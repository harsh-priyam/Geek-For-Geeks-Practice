 // GreatesNumberInAnArray - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;
 
 
int main() {

int arr[20] = {34,221,2,35,89};
int n = 5;

int max = 0;
int min = 0;


for(int i = 0 ; i < n ; i++)
  if(arr[max] < arr[i])
    max = i;
cout<<"The Maximum element inside the array"<<arr[max]<<endl;

for(int i = 0 ; i < n ; i++)
   if(arr[min] > arr[i])
      min = i;
cout<<"The Minimum element inside the array"<<arr[min]<<endl;


return 0;
}