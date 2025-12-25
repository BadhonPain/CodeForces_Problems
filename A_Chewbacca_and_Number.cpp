#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    cin >> n;
    string s;
    s = to_string(n);
    if (s[0] == '9')
    {
        s[0] = '9';
    }
    else if (s[0] > '4')
    {
        s[0] = '9' - s[0]+'0';
    }

    for (int i = 1; i < s.length(); i++)
    {

        if (s[i] > '4')
        {
            s[i] = '9' - s[i] + '0';
        }
    }
    cout << s << endl;
}