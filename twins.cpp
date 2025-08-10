#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int coin[n];
    int total1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
        total1 += coin[i];
    }
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (coin[j] < coin[j + 1])
            {
                swap(coin[j], coin[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    int total2 = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        total2 += coin[i];
        count++;
        if (total2 > (total1 / 2))
            break;
    }
    cout << count << endl;
}