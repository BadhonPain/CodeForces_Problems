#include <bits/stdc++.h>
using namespace std;

bool isSquare(int n)
{
    if (n == 1)
        return false;

    int root = sqrt(n);
    if ((root * root) == n)
    {
        return true;
    }
    return false;
}
bool wired_even(int n)
{
    if ((n == 4) || (n == 2))
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (isSquare(arr[i]) && (wired_even(arr[i])))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}