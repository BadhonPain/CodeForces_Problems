#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length() - 2; i += 2)
    {
        if (s.length() == 1)
        {
            break;
        }

        for (int j = i + 2; j < s.length(); j += 2)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    cout << s << endl;
}