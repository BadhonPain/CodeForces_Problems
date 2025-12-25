#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    ll l;
    cin >> n >> l;
    int arr1[n];
    double arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    if (n == 1)
    {
        cout << fixed << setprecision(10) << l << endl;
        return 0;
    }

    sort(arr1, arr1 + n);
    for (int i = 1; i < n; i++)
    {
        arr2[i - 1] = (arr1[i] - arr1[i - 1]) / 2.0;
    }
    arr2[n - 1] = (l - arr1[n - 1]) / 2.0;
    double mx = *max_element(arr2, arr2 + (n));
    if (arr1[0] != 0)
    {
        cout << fixed << setprecision(10) << max(max(double(arr1[0]), mx), double(l - arr1[n - 1])) << endl;
    }
    else
        cout << fixed << setprecision(10) << mx << endl;
}