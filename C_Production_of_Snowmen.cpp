#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        long long ij = 0;
        for (int j = 0; j < n; j++)
        {
            bool ok = true;
            for (int k = 0; k < n; k++)
            {
                if (a[k] >= b[(j + k) % n])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ij++;
        }

        long long jk = 0;
        for (int m = 0; m < n; m++)
        {
            bool ok = true;
            for (int l = 0; l < n; l++)
            {
                if (b[l] >= c[(m + l) % n])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                jk++;
        }

        long long result = (long long)n * ij * jk;
        cout << result << endl;
    }

    return 0;
}