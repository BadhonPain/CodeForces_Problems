#include <iostream>
using namespace std;
int main()
{
    int shoe[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> shoe[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (shoe[i]!=  shoe[j])
            {
                count++;
            }
        }
    }

    cout << 4-count << endl;
}