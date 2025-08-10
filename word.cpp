#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int upperCount = 0, lowerCount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i])) // (s[i] -65 >=32)
        {
            lowerCount++;
        }
        else
            upperCount++;
    }

    if (lowerCount > upperCount || lowerCount == upperCount)
    {
        for (int j = 0; j < s.length(); j++)
        {
            s[j] = tolower(s[j]);
        }
    }
    else
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout <<s <<endl;
}