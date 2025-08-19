#include <iostream>
using namespace std;
int main()
{
    int round;
    cin >> round;
    int mishika_score = 0, chris_score = 0;
    while (round--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            mishika_score++;
        }
        else  if (a<b)
        {
            chris_score ++;
        }
        
            
    }
    if (mishika_score > chris_score)
    {
        cout << "Mishka\n";
    }
    else if (mishika_score < chris_score)
    {
        cout << "Chris\n";
    }
    else
        cout << "Friendship is magic!^^\n";
}