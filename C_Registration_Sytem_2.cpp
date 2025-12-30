#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    map<string, int> database;
    while (test--)
    { // Time complexity is O(nlogn)
        string s;
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s]++;
        }
    }
}