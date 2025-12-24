#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        int max_count = 0, occuring_blank = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                occuring_blank++;
                max_count = max(max_count, occuring_blank);
            }
            else
                occuring_blank = 0;
        }

        cout << max_count << endl;
    }
}