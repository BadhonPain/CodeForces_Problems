#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    if (!(cin >> test)) return 0;
    while (test--)
    {
        string r;
        cin >> r;
        int n = r.length();

        for (char c : r)
        {
            assert(c == 's' || c == 'u');
        }

        int min_ops = n;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int current_ops = 0;
                int s_count = 0;

                for (int k = j; k < n; k += i)
                {
                    if (r[k] == 'u')
                    {
                        current_ops++;
                    }
                    s_count++;
                }

                if (s_count >= 2)
                {
                    if (current_ops < min_ops)
                    {
                        min_ops = current_ops;
                    }
                }
            }
            if (min_ops == 0)
                break;
        }

        cout << min_ops << "\n";
    }
    return 0;
}