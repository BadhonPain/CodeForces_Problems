#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragon;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        dragon.push_back({a, b});
    }
    sort(dragon.begin(), dragon.end());
    for (int i = 0; i < n; i++)
    {
        if (s <= dragon[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            s += dragon[i].second;
        }
    }
    cout << "YES" << endl;
}