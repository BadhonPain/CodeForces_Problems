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
        vector<int> arr;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            freq[x]++;
        }
        int abs = 0;
        for (int i = 0; i < k; i++)
        {
            if (freq[i] == 0)
                abs++;
        }
        int count_k = freq[k];
        cout << max(count_k, abs) << endl;
    }
}