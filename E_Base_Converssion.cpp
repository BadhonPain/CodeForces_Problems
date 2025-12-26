#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void baseConversion(ll n)
{
    if (n == 0)
        return;
    baseConversion(n / 2);
    cout << n % 2;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll num;
        cin >> num;
        if (num == 0)
        {
            cout << num << endl;
        }
        else
        {
            baseConversion(num);
            cout << endl;
        }
    }
}