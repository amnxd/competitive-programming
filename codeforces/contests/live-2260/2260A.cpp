#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi  = vector<int>;
using vll = vector<ll>;

#define all(c)   (c).begin(), (c).end()
#define rall(c)  (c).rbegin(), (c).rend()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define mp       make_pair
#define F        first
#define S        second

const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const ll LLINF = 1e18 + 7;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n; cin >> n;

    vi v(n);
    for (int &x : v) cin >> x;

    int easy = 0;
    for (int &i : v) {

        if (i == 0) easy++;
    }

    if ( easy < 2 ){
        cout << -1 << '\n';
    }
    else{
        int ans = v[0] + v[n-1];
        cout << ans << '\n';
    }
}

int main() {
    setup_io();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
