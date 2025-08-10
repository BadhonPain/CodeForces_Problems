#include<iostream>
using namespace std;
 
int main() {
    int n, sum, count = 0;
    cin >> n;
    int qsn[3];
 
    for (int j = 0; j < n; j++) {
        sum = 0;
        for (int i = 0; i < 3; i++) {
            cin >> qsn[i];
            sum += qsn[i];
        }
        if (sum >= 2) {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}
