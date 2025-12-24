#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            s.erase(i, 1);
            i--;
        }
    }

    for (int i = s.length() - 1; i >= 0; i--)
    {
        s.insert(i, ".");
    }

    cout << s << endl;
}