#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int aCount = 0, dCount = 0;
    string s;
    getline(cin, s);
    if (s.length() == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                aCount++;
            }
            else if (s[i] == 'D')
                dCount++;
        }

        if (aCount > dCount)
        {
            cout << "Anton" << endl;
        }
        else if (aCount < dCount)
        {
            cout << "Danik" << endl;
        }
        else
            cout << "Friendship" << endl;
    }
}