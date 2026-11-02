#include <iostream>
using namespace std;

using ll = long long;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;

    for (ll k = 1; k <= n; k++) {
        ll total = k * k * (k * k - 1) / 2;
        ll attacking = 4 * (k - 1) * (k - 2);
        cout << total - attacking << '\n';
    }
}

int main() {
    setup_io();
    solve();
    return 0;
}