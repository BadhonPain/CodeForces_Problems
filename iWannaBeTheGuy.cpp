#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int level;
    cin >> level;
    int level_array[level];
    for (int i = 1; i <= level; i++)
    {
        level_array[i] = i;
    }

    int cleared_array[level];

    int num1;
    cin >> num1;
    int arr[num1];
    for (int i = 0; i < num1; i++)
    {
        cin >> arr[i];
        cleared_array[arr[i]] = arr[i];
    }
    int num2;
    cin >> num2;
    int brr[num1];
    for (int i = 0; i < num2; i++)
    {
        cin >> brr[i];
        cleared_array[brr[i]] = brr[i];
    }
    bool cleared_all = true;
    for (int i = 1; i <= level; i++)
    {
        if (level_array[i] != cleared_array[i])
        {
            cleared_all = false;
            break;
        }
    }
    if (cleared_all)
    {
        cout << "I become the guy." << endl;
    }
    else
        cout << "Oh, my keyboard!" << endl;
}