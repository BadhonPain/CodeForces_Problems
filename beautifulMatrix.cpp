#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] != 0)
            {
                if (i != 2)
                {
                    swap(arr[i][j], arr[i + 1][j]);
                    count++;
                }
                else if (j != 2)
                {
                    swap(arr[i][j], arr[i][j + 1]);
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}