#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int finalist1 = max(arr[0], arr[1]);
        int finalist2 = max(arr[2], arr[3]);
        sort(arr, arr + 4);
        if (arr[2] == min(finalist1, finalist2))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}