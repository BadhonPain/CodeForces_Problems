#include <iostream>

using namespace std;

int main()
{

    int k;
    cin >> k;

    while (k--)
    {
        int n, m;
        cin >> n >> m;

        int sum = 2 * max(m, n) - 1;
        if (m == n)
            sum += 1;
        cout << sum << endl;
    }
}