#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += b - a;
        arr[i] = sum ;
    }

    cout << *max_element(arr, arr + n) << endl;
}
