#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int to_win = 6 - max(a, b) +1;
    if (to_win==4)
    {
      cout << 2 << "/" << 3 << endl;  
      return 0;
    }
    else if (to_win==5)
    {
      cout << 5 << "/" << 6 << endl;  
      return 0;
    }
    
    int numerator = 1;
    int denominator = 6/ to_win;
    cout << numerator << "/" << denominator << endl;
}