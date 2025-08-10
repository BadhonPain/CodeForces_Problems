#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
        if (arr[i] <= arr[minIndex]) 
            minIndex = i;
    }

    int moves = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex)
        moves--;

    cout << moves << endl;
    return 0;
}
