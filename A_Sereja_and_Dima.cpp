#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    int sp = 0;
    int dp = 0;
    int count = 0;
    while (start <= end)
    {
        if (count % 2 == 0)
        {
            if (arr[start] > arr[end])
            {
                sp += arr[start];
                start++;
            }
            else
            {
                sp += arr[end];
                end--;
            }
        }
        else

        {
            if (arr[start] > arr[end])
            {
                dp += arr[start];
                start++;
            }
            else
            {
                dp += arr[end];
                end--;
            }
        }
        count++;
    }
    cout << sp << " " << dp << endl;

    return 0;
}