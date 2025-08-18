#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "Second\n";
        }
        else if (((n + 1) % 3 == 0) || ((n - 1) % 3 == 0))
        {
            cout << "First\n";
        }
    }
}