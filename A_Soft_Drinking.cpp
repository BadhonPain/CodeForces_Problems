#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int lime_slice = c * d;
    int substance = min(min(total_drink / nl, p / np), lime_slice);
    cout << substance / n << endl;
}