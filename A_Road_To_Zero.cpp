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
        if (x && y)
        {
            ll temp = min(x, y);
            cost1 += temp * b;
            x -= temp;
            y -= temp;
        }
        else
            cost1 += (x + y) * a;
        cost2 += (x + y) * a;
        cost = min(cost1, cost2);
        cout << cost << endl;
    }
}