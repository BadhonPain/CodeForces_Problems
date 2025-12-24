#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool level = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            level = false;
            break;
        }
    }
    if (level == true)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
}