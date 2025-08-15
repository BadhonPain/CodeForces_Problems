#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] != arr[1])
        {
            if (arr[1] == arr[2])
                cout << 1 << endl;
            else
                cout << 2 << endl;
            continue;
        }
        if (arr[size - 1] != arr[size - 2])
        {
            if (arr[size - 1] == arr[0])
                cout << size - 1 << endl;
            else
                cout << size << endl;
            continue;
        }

        for (int i = 1; i < size - 1; i++)
        {

            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
