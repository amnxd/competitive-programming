#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin >> N;

    long long one = 0;
    long long ten = 0;
    long long hundred = 0;

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        int bills = (A + 999) / 1000;

        int change = bills * 1000 - A;

        hundred += change / 100;
        change %= 100;

        ten += change / 10;
        change %= 10;

        one += change;
    }

    cout << one << ' ' << ten << ' ' << hundred << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}