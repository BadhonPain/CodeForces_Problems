#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string ticket;
        cin>> ticket;
        if ( (int(ticket[0])-48 + int(ticket[1])-48 + int(ticket[2])-48) == (int(ticket[3])-48 + int(ticket[4])-48 + int(ticket[5])-48))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}