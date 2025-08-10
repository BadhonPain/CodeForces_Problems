#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;

    for (int k = 1; k <= test; k++)
    {

        int n;
        cin >> n;

        cout << (n - 1) / 2 << endl;
    }
}