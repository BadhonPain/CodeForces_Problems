#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
         
        int difference = abs(a-b);
        cout<< int(ceil((difference/10.0)))<<endl;
    }
}