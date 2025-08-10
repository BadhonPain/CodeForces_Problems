#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, m;
        cin >> n >> m;

        int mat[n][m];
        int rowMax = 0, colMax = 0;
        int MAX = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] > MAX)
                {
                    MAX = mat[i][j];
                    rowMax = i;
                    colMax = j;
                }
            }
        }

        for (int j = 0; j < m; j++)
        {
            mat[rowMax][j]--;
        }

        for (int i = 0; i < n; i++)
        {
            if (i != rowMax)
            {
                mat[i][colMax]--;
            }
        }

        int mx = mat[0][0];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(mx, mat[i][j]);
            }
        }

        cout << mx << endl;
    }

    return 0;
}
