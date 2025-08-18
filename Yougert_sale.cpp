#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (n == 1)
        {
            cout << a << endl;
        }
        else if (n % 2 == 0)
        {
            cout << min((n * a), (n * b) / 2) << endl;
        }
        else
            cout << min((n * a), (((n-1)* b) /2) + a) << endl;
    }
}