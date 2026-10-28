#pragma GCC optimize("O3,unroll-loops")
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
#define F        first
#define S        second
const int MOD = 1e9 + 7; // 998244353
const int INF = 1e9 + 7;
const ll LLINF = 1e18 + 7;
void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int sz; cin >> sz;
    vi v(sz);
    unordered_map<int, int> mp;
    
    int ans = 0;

    for(int &i: v){
        cin >> i;
        mp[i]++;
    }
    
    int p = mp[1], n = mp[-1];

    if( p >= n && p%2 == 0 ){
        cout << 0 << '\n'; 
    }
    else{
        while( p < n ){
            p += 2;
            n -= 2;
            ans++;
        }
        cout << ans << '\n';
    }

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