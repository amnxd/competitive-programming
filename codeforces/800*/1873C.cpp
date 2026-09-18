#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int pts = 0;

        for (int row = 0; row < 10; row++) {
            string s;
            cin >> s;

            for (int col = 0; col < 10; col++) {
                if (s[col] == 'X') {
                    pts += min({row + 1, 10 - row, col + 1, 10 - col});
                }
            }
        }

        cout << pts << '\n';
    }
}