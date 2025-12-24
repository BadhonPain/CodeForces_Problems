#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int arr[test];
    int count = 0;
    for (int i = 0; i < test; i++)
    {
        cin >> arr[i];
        if (i == 0)
            continue;

        if ((*max_element(arr, arr + i) < arr[i]) || (*min_element(arr, arr + i) > arr[i]))
        {
            count++;
        }
    }
    cout << count << endl;
}