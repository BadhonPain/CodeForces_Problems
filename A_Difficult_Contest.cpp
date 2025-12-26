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
        sort(s.rbegin(), s.rend());
        cout << s << endl;
    }
}