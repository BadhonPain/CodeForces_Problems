#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 4; i < n; i++)
    {
        if (isPrime(i))
            continue;

        for (int j = 4; j < n; j++)
        {
            if (isPrime(j))
                continue;

            if (i + j == n)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
}
