#include <bits/stdc++.h>
using namespace std;

long long pow10(int k)
{
    long long res = 1;
    for (int i = 0; i < k; i++)
    {
        if (res > 1e18 / 10)
            return -1; // overflow
        res *= 10;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long possible_x[64];
        int total_x = 0;

        for (int k = 1; k <= 18; k++)
        {
            long long p10 = pow10(k);
            if (p10 == -1)
                break;
            long long factor = p10 + 1;
            if (factor > n)
                break;
            if (n % factor == 0)
            {
                possible_x[total_x++] = n / factor;
            }
        }

        if (total_x == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(possible_x, possible_x + total_x);
            cout << total_x << endl;
            for (int i = 0; i < total_x; i++)
                cout << possible_x[i] << " ";
            cout << "\n";
        }
    }

    return 0;
}
