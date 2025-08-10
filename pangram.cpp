#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    if (s.length() == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < i; j++)
           {
            if (s[i]!= s[j])
            {
               count ++;
            }
            
           }
           
        }
        if (count == n - 1)
            cout << "YES" << endl;
        else
            cout << "N0" << endl;
    }
}