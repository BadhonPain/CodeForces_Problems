#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while (s.find("--") != string::npos)
        s.replace(s.find("--"), 2, "2");
    while (s.find("-.") != string::npos)
        s.replace(s.find("-."), 2, "1");
    while (s.find(".") != string::npos)
        s.replace(s.find("."), 1, "0");
    cout << s << endl;
}