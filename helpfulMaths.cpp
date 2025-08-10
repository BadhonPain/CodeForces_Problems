#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length() - 1; i += 2)
    {

        for (int j = 0; j < s.length() - 1 - i; j += 2)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
    cout << s << endl;
}