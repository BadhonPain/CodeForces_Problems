#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); 

    string pangram;
    getline(cin, pangram); 

    
    for (int i = 0; i < n; i++)
    {
        if (isupper(pangram[i]))
        {
            pangram[i] = tolower(pangram[i]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool isDistinct = true;
        for (int j = 0; j < i; j++)
        {
            if (pangram[i] == pangram[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct && isalpha(pangram[i])) 
        {
            count++;
        }
    }

    if (count == 26) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
