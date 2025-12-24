#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int profit_from_deal_1 = 3;
    int profit_from_deal_2 = 10;

    while (test--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << profit_from_deal_1 << endl;
        }
        else if (n == 3)
        {
            cout << profit_from_deal_2 << endl;
        }
        else 
        {
            cout << ((n/3)* profit_from_deal_2) + (n%3)*profit_from_deal_1 << endl;


        }



    }
}