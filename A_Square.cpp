#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int arr[4];
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + 4);
        if (sum == 4 * arr[0])
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}