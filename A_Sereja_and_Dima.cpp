#include <bits/stdc++.h>
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
    int starting_idx= -1, ending_idx = -1;
    int sereja_point = 0, dima_point = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i]> arr[n-1-i])
            {
                sereja_point+= arr[i];
            }
            else sereja_point+= arr[n-1-i];
            
        }
        else
            dima_point += arr[i];
    }
    cout << sereja_point << " " << dima_point << endl;
}