#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string s3;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[i])
        {
            s3 += '0';
        }
        else
            s3 += '1';
    }

    cout << s3 << endl;
    return  0;
}