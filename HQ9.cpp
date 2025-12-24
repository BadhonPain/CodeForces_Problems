#include <iostream>
using namespace std;
int main()
{
    bool is_valid = false;
    string hq9;
    getline(cin, hq9);
    for (int i = 0; i < hq9.length(); i++)
    {
        if (hq9[i] == 'H' || hq9[i] == 'Q' || hq9[i] == '9')
        {
            is_valid = true;
            break;
        }
    }
    if (is_valid)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}