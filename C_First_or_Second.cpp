#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll total_abs = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_abs += abs(a[i]);
        }

        if (n == 2) {
            cout << max(a[0], -a[1]) << "\n";
            continue;
        }

        ll ans = -8e18; 
        for (int i = 0; i < n; i++) {
            ll current = total_abs - abs(a[i]);
            if (i == 0) {
                ans = max(ans, current - abs(a[1]) - a[1]);
            } else if (i == 1) {
                ans = max(ans, current - abs(a[0]) + a[0]);
            } else {
                ll head = max({a[0] + abs(a[1]), -a[1] + abs(a[0]), a[0] - a[1]});
                ans = max(ans, current - abs(a[0]) - abs(a[1]) + head);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}