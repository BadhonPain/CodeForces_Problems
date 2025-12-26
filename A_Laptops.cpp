#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> laptop;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        laptop.push_back({a, b});
    }
    sort(laptop.begin(), laptop.end());
    bool alex = false;
    for (int i = 0; i < n - 1; i++)
    {
        if ((laptop[i].first < laptop[i + 1].first) && (laptop[i].second > laptop[i + 1].second))
        {
            alex = true;
        }
    }
    if (alex)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
}