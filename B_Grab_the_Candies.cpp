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
        int even_sum = 0, odd_sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even_sum += arr[i];
            }
            else
                odd_sum += arr[i];
        }
        if (even_sum <= odd_sum)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}