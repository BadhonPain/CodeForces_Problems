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
        if (!((all_of(arr, arr + n, [](int x)
                      { return x % 2 == 1; })) ||
              (all_of(arr, arr + n, [](int x)
                      { return x % 2 == 0; }))))
            sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}