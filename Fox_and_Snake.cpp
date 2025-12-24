#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    char design[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            design[i][j] = '#';
            if (i % 2 != 0)
                design[i][j] = '.';
        }
    }
    for (int i = 1; i < r; i += 4)
    {
        design[i][c - 1] = '#';
    }
    for (int i = 3; i < r; i += 4)
    {
        design[i][0] = '#';
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << design[i][j];
        }
        cout << endl;
    }
}