#include <bits/stdc++.h>
using namespace std;

int main()
{
    int per_shovel, r;
    cin >> per_shovel >> r;
    int result = -1;
    int i = 1;
    while (!(result % 10 == 0))
    {
        result = i * per_shovel - r;
        if ((i * per_shovel) % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
        i++;
    }
    cout << i - 1 << endl;
}
