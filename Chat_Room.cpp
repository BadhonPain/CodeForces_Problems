#include <iostream>
using namespace std;
int main()
{
    string chat;
    cin >> chat;
    string target = "hello";
    int i = 0;
    for (char ch : chat)
    {
        if (ch == target[i])
        {
            i++;
            if (i == 5)
            {
                break;
            }
        }
    }
    cout << (i == 5 ? "YES" : "NO") << endl;
}