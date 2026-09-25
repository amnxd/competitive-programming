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

#define all(c)   (c).begin(), (c).'\n'()
#define rall(c)  (c).rbegin(), (c).rend()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define mp       make_pair
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

int main() {
    setup_io();

    int t = 1;
    cin >> t;
    
    while (t--) {
        int x, k; cin >> x >> k;

        if( x%k != 0 ){
            cout << 1 << '\n';
            cout << x << '\n';
            continue;
        }
        
        if( x>2 && x % 2 ==0 && k==2 ){
            cout << 2 << '\n';
            cout << x-1 << " " << 1 << '\n';
        }
    }
    
    return 0;
}