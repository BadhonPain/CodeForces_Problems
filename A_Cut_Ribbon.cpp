#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max_count = INT_MIN;
    if (n % a == 0)
        max_count = max(max_count, n / a);
    if (n % b == 0)
        max_count = max(max_count, n / b);
    if (n % c == 0)
        max_count = max(max_count, n / c);
    if (n == a + b + c)
        max_count = max(max_count, 3);
    else if (n == a + b || n == a + c || n == b + c)
        max_count = max(max_count, 2);
    cout << max_count << endl;
}