#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int l1, l2;
        string s1, s2, name;
        cin >> l1 >> s1 >> l2 >> s2 >> name;
        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == 'D')
            {
                s1.push_back(s2[i]);
            }
            else
            {
                s1.insert(s1.begin(), s2[i]);
            }
        }
        cout << s1 << endl;
    }
}