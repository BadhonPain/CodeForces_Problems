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
        arr[0] = 1, arr[n - 1] = 2;
        for (int i = 1; i < n - 1; i++)
            arr[i] = n - i + 1;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}