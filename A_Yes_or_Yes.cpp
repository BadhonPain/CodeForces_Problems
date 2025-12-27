#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;

    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;

        int Ycount = 0;
        for (char c : s)
        {
            if (c == 'Y')
            {
                Ycount++;
            }
        }

        if (Ycount > 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}