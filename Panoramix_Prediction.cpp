#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    else if (n <= 3)
        return true;

    else if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (isPrime(b))
    {
        int checking_prime_num = a + 1;
        int next_prime;
        while (1)
        {
            if (isPrime(checking_prime_num))
            {
                next_prime = checking_prime_num;
                break;
            }
            else
                checking_prime_num++;
        }
        if (b == next_prime)
        {
            cout << "YES\n"
                 << endl;
        }
        else cout << "NO\n"
             << endl;
    }
    else
        cout << "NO\n"
             << endl;
}