#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int count = 0;
    int homeArr[test];
    int awayArr[test];

    for (int i = 0; i < test; i++)
    {
        cin >> homeArr[i] >> awayArr[i];
    }
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < test; j++)
        {
            if (homeArr[i] == awayArr[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;
}