#include <iostream>
using namespace std;

int main()
{
    long long n, target;
    cin >> n >> target;

    if (target <= (n + 1) / 2)
    {
        cout << 2 * target - 1 << endl;
    }
    else
    {
        cout << 2 * (target - (n + 1) / 2) << endl;
    }

    return 0;
}