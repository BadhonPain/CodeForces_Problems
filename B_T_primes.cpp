#include <bits/stdc++.h>
using namespace std;
bool is_prime[1000005];

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < sizeof(is_prime); p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i < sizeof(is_prime); i += p)
                is_prime[i] = false;
        }
    }

    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;

        long long root = round(sqrt(n));

        if (root * root == n && is_prime[root])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}