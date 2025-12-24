#include <bits/stdc++.h>
using namespace std;
int needed_cube(int n)
{
    return (n * (n + 1) / 2);
}

int main()
{
    int n;
    cin >> n;
    int overall_cube_needed = 0;
    int i = 1;
    while (1)
    {
        overall_cube_needed += needed_cube(i);
        if (overall_cube_needed > n)
        {
            break;
        }

        i++;
    }
    cout << i - 1 << endl;
}