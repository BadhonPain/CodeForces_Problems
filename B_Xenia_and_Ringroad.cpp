#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n, m;
    cin >> n >> m;
    ll arr[m];
    ll count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    count += (arr[0] - 1);
    for (int i = 1; i < m; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            count += (arr[i] - arr[i - 1]);
        }
        else if (arr[i - 1] > arr[i])
        {
            count += (n - arr[i - 1] + 1 + (arr[i] - 1));
        }
    }
    cout << count << endl;
}
