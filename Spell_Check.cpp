#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != 5)
        {
            cout << "NO\n";
            continue;
        }

        string target = "Timru";
        sort(s.begin(), s.end());
        if (s == target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
