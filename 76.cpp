//cHECKINGofApALAGRAM -+-By-+-Harsh Priyam
// Time Complexity  --->
// Space Complexity --->
#include <iostream>
using namespace std;

const int CHAR = 256;

bool CheckingOfAnagram(string &str1, string &str2)
{
    int m = str1.length();
    int n = str2.length();
   
   if (m != n)
   {
       return false;
   }
   


    int count[CHAR] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }

     
    }
    return true;
}

int main()
{
    string str1 = "listen";
    string str2 = "cat";

    if (CheckingOfAnagram(str1, str2))
    {
       cout<<"Anagram Found!!";
    }
    else
    {
        cout<<"Anagram Not Found";
    }

    return 0;
}