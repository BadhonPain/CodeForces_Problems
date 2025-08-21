#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int to_win = 6 - max(a, b) + 1;
    cout << to_win / __gcd(to_win, 6) << "/" << 6 / __gcd(to_win, 6) << endl;
}