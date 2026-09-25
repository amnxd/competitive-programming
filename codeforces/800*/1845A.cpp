#include <bits/stdc++.h>
using namespace std;   

// why are you looking at my submissions?

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
        int n, k, x; cin >> n >> k >> x;

        if( n>=1 && k>=n && x!=n ){
            cout << "YES\n";
            cout << 1 << '\n';
            cout << n << " ";
            cout << '\n';
            continue;
        }

        if( n>=1 && k>=1 && x!=1 ){
            cout << "YES\n";
            cout << n << '\n';
            for(int i=0; i<n; i++){
                cout << 1 << " ";
            }
            cout << '\n';
            continue;
        }

        if( n%2==0 && k>=2 && x!=2 ){
            cout << "YES\n";
            cout << n/2 << '\n';
            for(int i=0; i<n/2; i++){
                cout << 2 << " ";
            }
            cout << '\n';
            continue;
        }

        if( n>=3 && n%2==1 && k>=3 && x==1 ){
            cout << "YES\n";
            cout << 1 + (n-3)/2 << '\n';
            cout << 3 << " ";
            for(int i=0; i<(n-3)/2; i++){
                cout << 2 << " ";
            }
            cout << '\n';
            continue;
        }
        
        cout << "NO\n";
        
    }
    
    return 0;
}