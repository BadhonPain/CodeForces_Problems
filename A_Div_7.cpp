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
        if (n % 7 == 0)
            cout << n << endl;
        else
        {
            if ((n - (n % 7)) < 10)
                cout << n - (n % 7) << endl;
            else
                cout << n + (n % 7) << endl;
        }
    }
}