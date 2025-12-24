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

        int max_quality = -1;
        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > max_quality)
            {
                max_quality = b;
                idx = i;
            }
        }
        cout << idx + 1 << endl;
    }
}
