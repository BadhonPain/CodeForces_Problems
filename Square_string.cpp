#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;

        int len = s.length();

        if (len % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }

        string subs1 = s.substr(0, len / 2);
        string subs2 = s.substr(len / 2, len / 2);

        if (subs1 == subs2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
