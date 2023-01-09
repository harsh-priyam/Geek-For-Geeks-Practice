#include<iostream>
using namespace std;

int main()
{
    int num;
    int arr[5] = {2,4,6,8,10};

   cout<<"Enter the number you want to search\n";
   cin>>num;
 
    for(int i = 0 ; i<5 ;i++)
    {
           if(arr[i] == num){

              cout<<"Found at :"<<i<<endl;
              return 1;
           }
            else{

             cout<<"Not Found"; 
             return -1;  
            }
    }

  
    
    
    


}