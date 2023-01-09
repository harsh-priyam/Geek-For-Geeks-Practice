// RecursiveApproachOnCheckingTheSubStrings-By-Harsh Priyam
// Time Complexity --->
// Space Complexity --->

#include <bits/stdc++.h>
using namespace std;

bool CheckingTheSubString(string str1, string str2, int n, int m)
{
    if (m == 0)
    {
        return true;
    }

    if (n == 0)
    {
        return false;
    }

    if (str1[m - 1] == str2[n - 1])
    {
       return CheckingTheSubString(str1, str2, n - 1, m - 1);
    }
    else
    {
       return CheckingTheSubString(str1, str2, n-1, m);
    }
}

int main()
{
    string str1 = "abcd";
    string str2 = "ad";
    int n= str1.length();
    int m = str2.length();

    cout << boolalpha << CheckingTheSubString(str1, str2, n, m);
    return 0;
}