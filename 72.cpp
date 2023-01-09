// SearchFunction - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;

    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }

    void InsertFunction(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

         bool SearchFunction(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
            else
                return false;
        }
    }


    void DeleteFunction(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }

 
};

int main()
{
    MyHash mh(7);
    mh.InsertFunction(11);
    mh.InsertFunction(22);
    mh.InsertFunction(33);
    mh.InsertFunction(44);
    mh.InsertFunction(55);

    cout << mh.SearchFunction(33);

    mh.DeleteFunction(44);

    cout << mh.SearchFunction(44);
}