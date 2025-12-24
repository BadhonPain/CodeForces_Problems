#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string a;
        cin >> a;
        reverse(a.begin(), a.end());
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == 'q')
            {
                a[i] = 'p';
            }
            else if (a[i] == 'p')
            {
                a[i] = 'q';
            }
        }

        cout << a << endl;
    }
}