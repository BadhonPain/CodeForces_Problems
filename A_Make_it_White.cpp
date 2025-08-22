#include <bits/stdc++.h>
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

        size_t pos1 = s.find('B');
        size_t pos2 = s.rfind('B');
        cout << pos2 - pos1 + 1 << endl;
    }
}