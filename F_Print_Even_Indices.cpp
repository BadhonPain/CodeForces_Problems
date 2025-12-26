#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void printEvenIndices(int i, ll arr[], int size)
{
    if (i >= size)
        return;
    printEvenIndices(i + 2, arr, size);
    cout << arr[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printEvenIndices(0, arr, n);
}