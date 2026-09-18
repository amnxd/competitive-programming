#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll x, y, k; cin >> x >> y >> k;

    ll mono = 0;

    for (ll i = 0; i < k; i++) {
        mono += (y + i) % (x + i);
    }

    cout << mono << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}