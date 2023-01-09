// InsertAndRemoveInHashFunction - By- Harsh Priyam
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
        table = new list<int>[BUCKET];
    }

    void InsertFunction(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
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
   mh.InsertFunction(10);
   mh.InsertFunction(20);
   mh.InsertFunction(30);
   mh.InsertFunction(40);
   
   mh.DeleteFunction(20);

    return 0;
}