#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int x = 0, y = 0;
        bool got = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'D')
                y--;
            else
                x--;
            if (x == 1 && y == 1)
            {
                got = true;
                break;
            }
        }
        if (got)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}