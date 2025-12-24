#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int hh, mm;
        cin >> hh >> mm;
        cout << (23 - hh) * 60 + (60-mm) << endl;
    }
}