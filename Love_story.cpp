#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test ;
    string s2 = "codeforces";
    int count = 0;
    while (test--)
    {
        string s1;
        cin >> s1;
        for (int i = 0; i < s1.length(); i++)
        {
            if (!(s1[i] == s2[i]))
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
}