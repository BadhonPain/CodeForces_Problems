#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    if ((n ==1) || (m==1))
    {
      cout << "Akshat\n";
      return 0;
    }
    
    int count = 0;
    
    while (n &&m)
    {
       n--;
       m--;
        count++;    
    }
    if (count % 2 == 0)
    {
        cout << "Malvika\n";
    }
    else
        cout << "Akshat\n";
}