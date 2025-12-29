#include <iostream>
#include <string>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (s.find("2026") != string::npos || s.find("2025") == string::npos) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}