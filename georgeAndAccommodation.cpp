#include <iostream>
using namespace std;
int main()
{
    int roomNum;
    cin >> roomNum;
    int existing = 0, capacity = 0;
    int count = 0;
    for (int i = 0; i < roomNum; i++)
    {
        cin >> existing >> capacity;
        if (capacity - existing >= 2)
            count++;
    }
    cout << count << endl;
}