#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    int n;
    cin >> a >> b >> c >> d >> n;
    int overall_dragons = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((i % a == 0))
        {
            overall_dragons++;
        }
        else if ((i % b == 0))
        {
            overall_dragons++;
        }
        else if ((i % c == 0))
        {
            overall_dragons++;
        }
        else if ((i % d == 0))
        {
            overall_dragons++;
        }
    }
    cout << overall_dragons << endl;
}