#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
        if (s == "YES")
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}