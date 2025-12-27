#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int c = 1;
        for (int i = 2; i < n; i++)
        {
            if (__gcd(i, n - 1 - i) == 1)
            {
                cout << i << " " << n - 1 - i << " " << 1 << endl;
                break;
            }
        }
    }
}