#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N, S;
    ll L;
    cin >> N >> S >> L;

    vector<ll> A(N);
    for (int i = 1; i < N; i++) {
        cin >> A[i];
    }
    vector<ll> dist(N + 1, 0);

    for (int i = S - 1; i >= 1; i--) {
        dist[i] = dist[i + 1] + A[i];
    }

    for (int i = S + 1; i <= N; i++) {
        dist[i] = dist[i - 1] + A[i - 1];
    }

    int ans = 1;

    for (int l = 1; l <= S; l++) {
        ll left = dist[l];

        // Find maximum r >= S
        int lo = S;
        int hi = N;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;

            ll right = dist[mid];

            ll cost = left + right + min(left, right);

            if (cost <= L) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        int r = hi;

        if (r >= S) {
            ans = max(ans, r - l + 1);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}