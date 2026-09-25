#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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

// const int MOD = 1e9 + 7; // 998244353
// const int INF = 1e9 + 7;
// const ll LLINF = 1e18 + 7;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin >> n;
    vector<int> v;
    
    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        if(i && v.back() > x ){
            v.pb(1);
        }
        v.pb(x);
    }

    cout << v.size() << '\n';
    for(int i: v) {
        cout << i << " ";
    }
    cout << '\n';
}

int main() {
    setup_io();

    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

