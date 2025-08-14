#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int result = 0;
    while (num)
    {
        result += num / 100;
        num %= 100;
        result += num / 20;
        num %= 20;
        result += num / 10;
        num %= 10;
        result += num / 5;
        num %= 5;
        result += num / 1;
        num %= 1;
    }
    cout << result << endl;
}
