#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (count(arr, arr + n, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}