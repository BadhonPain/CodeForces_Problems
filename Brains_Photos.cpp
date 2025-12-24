#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    char photo[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> photo[i][j];
        }
    }
    bool is_coloured = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (photo[i][j] == 'C' || photo[i][j] == 'M' || photo[i][j] == 'Y')
            {
                is_coloured = true;
            }
        }
    }
    if (is_coloured)
    {
        cout << "#Color\n";
    }
    else
        cout << "#Black&White\n";
}