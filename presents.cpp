#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int giftTo[n+1];
    int giftFrom[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> giftTo[i];
        giftFrom[giftTo[i]] = i ;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << giftFrom[i] << " ";
    }
}