#include <iostream>
using namespace std;
int finding_minimum_digit(int x)
{

    if (x == 0)
    {
        return 0;
    }

    int min_digit = 9;
    int current_digit;

    while (x)
    {
        current_digit = x % 10;
        if (current_digit < min_digit)
        {
            min_digit = current_digit;
        }
        x = x / 10;
    }

    return min_digit;
}
int main()
{
    int test;
    cin >> test;
    while (test)
    {
        int number;
        cin >> number;
        cout << finding_minimum_digit(number) << endl;
        test--;
    }
}