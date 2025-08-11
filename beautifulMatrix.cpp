#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool found = false;
    int found_row, found_collum ;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          if (arr[i][j]==1)
          {
            found = true;
            found_row =i;
            found_collum =j;
            break;
            
          }
          
        }
    }
    if (found)
    cout << abs(found_row-2) + abs(found_collum-2)  << endl;
}