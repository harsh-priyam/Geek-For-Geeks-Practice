// StockBuy&SellQuestion - By- Harsh Priyam
// Time Complexity --->
#include <iostream>
using namespace std;

void StockSellBuy(int *arr, int n)
{
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            profit = profit + (arr[i + 1] - arr[i]);
        }
    }
cout << "The Maximum Profit that can be make in the entire period ::" << profit << endl;
}

int main()
{
    int arr[]={1,5,3,1,2,8};
    int n = 6;
    StockSellBuy(arr,n);
    return 0;
}