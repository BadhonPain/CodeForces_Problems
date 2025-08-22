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

        int digit_count = to_string(n).size();

        int ans = 9 * (digit_count - 1);

        int first_digit = n / (int)pow(10, digit_count - 1);

        int rep = 0;
        for (int i = 0; i < digit_count; i++)
            rep = rep * 10 + first_digit;

        if (rep <= n)
            ans += first_digit;
        else
            ans += first_digit - 1;

        cout << ans << "\n";
    }
}
