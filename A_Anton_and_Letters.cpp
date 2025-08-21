#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    s.erase(remove_if(s.begin(), s.end(),
                      [](char ch)
                      { return !isalpha(ch); }),
            s.end());
    int count = s.length();
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1]== s[i])
        {
            count--;
        }
    }

    cout << count << endl;
}