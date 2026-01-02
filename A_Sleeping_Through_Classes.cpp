#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string str;
        str = s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                for (int j = i + 1; j <= i + k && j < n; j++)
                {
                    str[j] = '1';
                }
            }
        }
        cout << count(str.begin(), str.end(), '0') << endl;
    }
}