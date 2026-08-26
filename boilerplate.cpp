#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef long double ld;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define endl "\n"
const int MOD = 998244353, mod = 1e9 + 7, maxA = 1e5 + 5;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
}

void func() {
    ll n, k; cin>>n>>k;
    vector<ll> nums(n);
    ll sum =0;
    for(int i=0; i<n; i++) cin>>nums[i];
    sort(nums.end(), nums.begin());
    for(int i=0; i<k; i++){
        if(i<k) sum+=nums[i];
    }
    cout<<sum<<endl;
}

int main() {
    fastIO();
    ll t=1;
    // cin >> t;
    while (t--) {
        func();
    }

    return 0;
}