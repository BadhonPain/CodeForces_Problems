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
        int can_eat = 0;
        for (int i = 1; i < n; i++)
        {
            can_eat += (arr[i] - arr[0]);
        }
        cout << can_eat << endl;
    }
}