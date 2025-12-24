
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    if (n == 1)
    {
        cout << n << endl;
        return 0;
    }

    int currentCount = 0;
    int maxCount = 1;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            count++;
            maxCount = max(count, maxCount);
        }
        else
        {
            count = 1;
        }
    }
    cout << maxCount << endl;

    return 0;
}