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
#endif
}

void func() {
    string s1, s2;
    cin >> s1 >> s2;

    for (char &c : s1) c = tolower(c);
    for (char &c : s2) c = tolower(c);

    if (s1 == s2) cout << 0 << '\n';
    else if (s1 > s2) cout << 1 << '\n';
    else cout << -1 << '\n';
}

int main() {
    fastIO();
    ll t = 1;
    //cin >> t;
    while (t--) {
        func();
    }
    time;
    return 0;
}