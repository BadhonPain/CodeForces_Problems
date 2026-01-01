#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        string s2;
        for (int i = 0; i < s.size(); i++)
        {
            int j = 0;
            if (i % 2 == 0)
                s2[j++] = s[i];
        }
        cout << s2 << endl;
    }
}