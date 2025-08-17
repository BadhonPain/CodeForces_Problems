#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    string s = "codeforces";
    while (test--)
    {

        char ch;
        cin >> ch;
        if (s.find(ch) != string::npos)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
