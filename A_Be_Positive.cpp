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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int minus_one_count = count(arr.begin(), arr.end(), -1);
        int zero_count = count(arr.begin(), arr.end(), 0);
        if (minus_one_count % 2 == 1)
            cout << zero_count + 2 << endl;
        else
            cout << zero_count << endl;
    }
}