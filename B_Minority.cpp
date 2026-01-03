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
        if (count(s.begin(), s.end(), '0') < count(s.begin(), s.end(), '1'))
            cout << count(s.begin(), s.end(), '0') << endl;
        else if (count(s.begin(), s.end(), '0') == count(s.begin(), s.end(), '1'))
            cout << 0 << endl;

        else
            cout << count(s.begin(), s.end(), '1') << endl;
    }
}