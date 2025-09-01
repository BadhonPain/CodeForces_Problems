#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;
        char rythm[500][5];
        int idx[500];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> rythm[i][j];
                if (rythm[i][j] == '#')
                {
                    idx[i] = j + 1;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            cout << idx[i] << " ";
        }
        cout << "\n";
    }
}
