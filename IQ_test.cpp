#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int iq[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> iq[i];
    }
    int even_majority = 0;
    int odd_majority = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (iq[i] % 2 == 0)
            even_majority++;
        else
            odd_majority++;
    }
    if (even_majority > odd_majority)
    {

        for (int i = 1; i <= n; i++)
        {
            if (iq[i] % 2 != 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (iq[i] % 2 == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}