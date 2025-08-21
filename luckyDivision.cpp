#include <iostream>
using namespace std;
bool is_lucky(string s)
{
    bool not_lucky = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 4 || s[i] != 7)
        {
            not_lucky = true;
            break;
        }
    }

    if (not_lucky)
    {
        return false;
    }
    else
        return true;
}
int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    if (is_lucky(s))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}