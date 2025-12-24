#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int n;
    for (int i = 0; i < test; i++)
    {
        cin >> n;
        int a = ceil(n / 3.0);
        int b = floor(n / 3.0);
        if ((a+2*b)==n)
        {
            cout << a << " " << b << endl;
        }
        else 
        cout << b << " " << a << endl;
        
    }
}