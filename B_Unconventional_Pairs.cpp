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
        int min_max = INT_MIN;
        for (int i = 1; i < n; i += 2)
        {
            min_max = max(min_max, (arr[i] - arr[i - 1]));
        }
        cout << min_max << endl;
    }
}