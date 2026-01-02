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
        vector<char> str;
        str.push_back(s[0]);
        for (int i = 1; i < s.size(); i += 2)
        {
            str.push_back(s[i]);
        }
        for (int i = 0; i < str.size(); i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
}