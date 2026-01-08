#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = y + ((n - y) / x) * x;
        cout << k << "\n";
    }
}
