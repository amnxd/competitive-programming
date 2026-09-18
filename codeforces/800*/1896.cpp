#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    long long t;
    std::cin >> t;

    while(t--) {
        long long n;
        std::cin >> n;

        std::vector<long long> v(n);

        for(auto &i : v)
            std::cin >> i;

        if(v[0] == 1)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}