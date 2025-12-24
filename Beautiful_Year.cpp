#include <iostream>
using namespace std;
int main()
{
    int year, a, b, c, d;
    cin >> year;
    int temp = 0;
    while (1)
    {
        year++;
        temp = year;
        a = temp / 1000;
        temp = temp % 1000;
        b = temp / 100;
        temp = temp % 100;
        c = temp / 10;
        temp = temp % 10;
        d = temp;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    cout << year << endl;
}