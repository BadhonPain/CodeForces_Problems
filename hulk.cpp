#include <iostream>
using namespace std;
int main()
{
string one= "I hate", two=" that I love", three = " that I hate", bonus = " it";
int n;
cin >> n;
if (n==1)
{
   one.append(bonus);
   cout<< one << endl;
}
else if (n==2)
{
   one.append(two).append(bonus);
   cout<< one << endl;
}
else if (n==3)
{
   one.append(two).append(three).append(bonus);
   cout<< one << endl;
}








}