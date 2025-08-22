#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int arr[3];
        int mx = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
                mx = arr[i];
        }

        int count_max = 0;
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == mx)
                count_max++;
        }

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == mx)
            {

                if (count_max == 1)
                {
                    cout << 0;
                }
                else
                {

                    cout << 1;
                }
            }
            else
            {
                cout << mx - arr[i] + 1;
            }

            if (i != 2)
                cout << " ";
        }
        cout << endl;
    }
}