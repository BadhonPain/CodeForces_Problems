#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool Primality_test(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        ll a, k;
        cin >> a >> k;
        string s;
        for (int i = 0; i < k; i++)
            s += to_string(a);
        if (s.length() > 18)
            cout << "NO" << endl;
        else
        {
            if (Primality_test(stoll(s)))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}