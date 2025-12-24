#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    size_t idx = 0;
    while ((idx = s1.find("WUB")) != string::npos)
    {
        s1.erase(idx, 3);
        if (idx != 0 && s1[idx - 1] != ' ')
        {
            s1.insert(idx, " ");
        }
    }
    cout << s1 << endl;
}