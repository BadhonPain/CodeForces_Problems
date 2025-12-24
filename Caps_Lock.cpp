#include <iostream>
using namespace std;

int main()
{
    string word;
    getline(cin, word);
    bool is_capital = true;
    bool is_capital2 = true;
    if (islower(word[0]))
    {
        for (int i = 1; i < word.length(); i++)
        {
            if (islower(word[i]))
            {
                is_capital = false;
                break;
            }
        }
        if (is_capital)
        {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.length(); i++)
            {
                word[i] = tolower(word[i]);
            }

            cout << word << endl;
        }
        else
            cout << word << endl;
    }
    else
    {

        for (int i = 1; i < word.length(); i++)
        {
            if (islower(word[i]))
            {
                is_capital2 = false;
                break;
            }
        }
        if (is_capital2)
        {
            for (int i = 0; i < word.length(); i++)
            {
                word[i] = tolower(word[i]);
            }
            cout << word << endl;
        }
        else
            cout << word << endl;
    }

    return 0;
}