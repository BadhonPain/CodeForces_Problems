#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int first_occur = -1, last_occur = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++;
                if (first_occur == -1)
                    first_occur = i;
                last_occur = i;
            }
        }
        if (first_occur + x - 1 >= last_occur)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}