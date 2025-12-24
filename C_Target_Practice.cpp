#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int score = 0;
        for (int i = 1; i <= 10; i++)
        {
            string row;
            cin >> row;
            for (int j = 1; j <= 10; j++)
            {
                if (row[j - 1] == 'X')
                {
                    int ring = min({i, j, 11 - i, 11 - j});
                    score += ring;
                }
            }
        }
        cout << score << "\n";
    }
    return 0;
}
