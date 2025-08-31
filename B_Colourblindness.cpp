#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool is_yes = true;

        for (int i = 0; i < n; i++)
        {
            if (!((s1[i] == s2[i]) ||
                  (s1[i] == 'G' && s2[i] == 'B') ||
                  (s1[i] == 'B' && s2[i] == 'G')))
            {

                is_yes = false;
                break;
            }
        }

        if (is_yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
