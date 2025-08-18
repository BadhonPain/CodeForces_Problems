#include <iostream>
using namespace std;
// this code is ok but if you submit this you should face time out (TLE)
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        bool has_divisor = false;
        for (int i = 3; i < n; i += 2)
        {
            if ((n % i == 0))
            {
                has_divisor = true;
                break;
            }
        }
        if (has_divisor)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}