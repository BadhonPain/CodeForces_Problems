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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool is_equal = false;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == arr[i])
            {
                is_equal = true;
                break;
            }
        }
        if (!is_equal)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}