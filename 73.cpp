 // PalindromeCheckInStrings - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;
 
 int PalindromeCheck(string $str)
 {
     int begin = 0;
     int end = $str.length()-1;

     while (begin < end)
     {
         if ($str[begin] != $str[end])  
         {
             return -1;
         }
         begin++;
         end--;
     }
       return 1;
 }

 
int main() {
   
   string str;

   cout<<"Enter any String to check whether its a Palindrome or not"<<endl;
   cin>>str;

   cout<<PalindromeCheck(str);
 
return 0;
}