#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        ll cost1 = 0, cost2 = 0, cost = 0;
        cost1 += (x + y) * a;
        if (x && y)
        {
            ll temp = min(x, y);
            cost2 += temp * b;
            x -= temp;
            y -= temp;
        }
        cost2 += (x + y) * a;

        cout << min(cost1, cost2) << endl;
    }
}