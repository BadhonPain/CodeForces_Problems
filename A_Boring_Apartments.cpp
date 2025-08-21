#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num;
        cin >> num;
        int num2 = num % 10;
        string s = to_string(num);
        cout << (num2 - 1) * 10 + sum(s.length()) << endl;
    }
}