#include<iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int arr[4];
        for(int i=0; i<4; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for(int i=0; i<4; i++)
        {
            flag ^= arr[i];
        }
        if(!flag) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
}