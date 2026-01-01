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
        int imperfect_count1 = 0;
        int imperfect_count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 1 && arr[i] % 2 == 0)
                imperfect_count1++;
            else if (i % 2 == 0 && arr[i] % 2 == 1)
                imperfect_count2++;
        }
        if (imperfect_count1 != imperfect_count2)
            cout << -1 << endl;
        else
            cout << imperfect_count2 << endl;
    }
}