#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string res;
    
    if (k == 0) {
       
        res = string(n, '0');
    } else if (k == n) {
        
        res = string(n, '1');
    } else {
        
        res = string(n - k, '0') + string(k, '1');
    }
    
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}