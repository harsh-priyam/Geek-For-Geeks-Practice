//Inserting inside the Array - By- Harsh Priyam
// Time Complexity ---> O(n)


#include<iostream>
using namespace std;

int main()
{
int arr[20] = {3,6,9,12,15,18,21,24};
int pos = 4;
int n = 7;
int num = 156;

for (int i = 7 ; i >= pos-1 ; i--)
{
    arr[i+1] = arr[i];
    arr[pos] = num;
    return (n+1);
}
cout<<"The Edited Array will be:"<<endl;

for (int i = 0; i < 9; i++)
{
    cout<<"The Elements are:::"<<arr[i]<<endl;
}
    return 0;
}
