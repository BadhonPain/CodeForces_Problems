#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll minA = LLONG_MAX, minB = LLONG_MAX;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            minA = min(minA, arr[i]);
            minB = min(minB, brr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] > minA) && (brr[i] > minB))
            {
                ll countA, countB;
                ll k = 0;
                countA = arr[i] - minA;
                countB = brr[i] - minB;
                k += (min(countA, countB));
                count += k;
                if (countB < countA)
                {
                    count += (arr[i] - k - minA);
                }
                else
                    count += (brr[i] - k - minB);
            }
            else if (arr[i] > minA)
            {
                count += (arr[i] - minA);
            }
            else if (brr[i] > minB)
            {
                count += (brr[i] - minB);
            }
        }
        cout << count << endl;
    }
}