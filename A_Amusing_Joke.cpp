#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string newString = s1 + s2;
    sort(newString.begin(), newString.end());
    sort(s3.begin(), s3.end());
    if (s3 == newString)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
