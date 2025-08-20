#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int a_counter = 0, b_counter = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                a_counter++;
            }
            else
                b_counter++;
        }
        if (a_counter > b_counter)
        {
            cout << "A" << endl;
        }
        else
            cout << "B" << endl;
    }
}