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
        int start = 0;
        int end = n - 1;
        int length = n;
        while (start < end)
        {
            if (s[start] != s[end])
            {
                if ((s[start] == '1' && s[end] == '0') || (s[start] == '0' && s[end] == '1'))
                    length -= 2;
                start++;
                end--;
            }
            else
                break;
        }

        cout << length << endl;
    }
}