#include <iostream>
using namespace std;
int main()
{
   int n, a;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        a = n % 10;
        if (a == 4 || a == 7)
        {
            count++;
        }
        n= n/10;
    }
    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}