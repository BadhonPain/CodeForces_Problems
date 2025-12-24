#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int hours = 0;

    int left = 0;

    while (a)
    {
        hours += a;
        left += a;
        a = left / b;
        left = left % b;
    }

    cout << hours << endl;
    return 0;
}
