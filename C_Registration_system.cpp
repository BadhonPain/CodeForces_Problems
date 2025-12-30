#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    string arr[test];
    int i = 0;
    while (test--)
    { // TLE: beacuse it's time complexity O(n^2), almost 10k steps needed
        string s;
        cin >> s;
        bool print_ok = false;
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == s)
            {
                print_ok = false;
                count++;
            }
            else
                print_ok = true;
        }
        if ((print_ok || i == 0) && count == 0)
            cout << "OK" << endl;
        else
            cout << s + to_string(count) << endl;
        arr[i] = s;
        i++;
    }
}