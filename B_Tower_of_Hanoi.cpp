#include <bits/stdc++.h>
using namespace std;
int TowerOfHanoi(int n, int a, int b, int c)
{
    int cost = 0;
    if (n == 1)
    {
        cost += 
        return;
    }
    TowerOfHanoi(n - 1, a, c, b);
    TowerOfHanoi(n - 1, b, a, c);
    return cost;
}
int main()
{
    int n;
    cin >> n;
    int cost = TowerOfHanoi(n, 1, 2, 3);
    cout << cost << endl;
}