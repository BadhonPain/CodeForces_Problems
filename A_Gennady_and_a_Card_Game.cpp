#include <bits/stdc++.h>
using namespace std;

int main()
{
    string table_card;
    cin >> table_card;
    string given_cards;
    for (int i = 0; i < 5; i++)
    {
        cin >> given_cards;
        if (table_card[0] == given_cards[0] || table_card[1] == given_cards[1])
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}