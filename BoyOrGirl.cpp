#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.length() ; i++)
    {
        bool unique = true;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
        cout << "IGNORE HIM!" << endl;
}