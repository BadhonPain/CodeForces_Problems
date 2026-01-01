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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        bool all_present = true;
        int mex = -1;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != i)
            {
                all_present = false;
                idx = i;
                break;
            }
        }
        if (all_present)
            mex = n;
        else
            mex = idx;
        if (mex == k)
            cout << 0 << endl;
        else
        {
            if (count(arr.begin(), arr.end(), k) != 0)
                cout << count(arr.begin(), arr.end(), k) << endl;
            else
                cout << 1 << endl;
        }
    }
}