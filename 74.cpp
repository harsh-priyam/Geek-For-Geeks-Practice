 // CheckingTheSubspaceForTwoStrings - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;
 
 int CheckingTheSubspace(string *str1 , string *str2 , int m , int n)
 {
     if (n>m)
     {
         return -1;
     }
     int j = 0;
     for(int i = 0 ; i < m && j < n ; i++)
     {
         if (str1[i] == str2[j])
         {
             j++;
         }
         
     }
     return j=n;
 }
 
int main() {

string str1 = "abcd";
string str2 = "xy";
int m =  str1.length();
int n = str2.length();

cout<<CheckingTheSubspace(&str1,&str2,m,n);
 
return 0;
}