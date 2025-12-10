#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int a[size];
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                evenCount++;
            }
            else
                oddCount++;
        }

        if (oddCount == 0)
        {
            cout << "NO" << endl;
        }
        else if (oddCount)
        {
            if (!evenCount && (size % 2 == 0))
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
}