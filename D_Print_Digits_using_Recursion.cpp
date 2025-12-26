#include <bits/stdc++.h>
using namespace std;
void printDigits(int n)
{
    if (n == 0)
        return;
    printDigits(n / 10);
    cout << n % 10 << " ";
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num;
        cin >> num;
        if (num == 0)
        {
            cout << num << endl;
        }
        else
        {
            printDigits(num);
            cout << endl;
        }
    }
}