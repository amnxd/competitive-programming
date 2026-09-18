#pragma GCC optimize ("O3")
#include <bits/stdc++.h>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
    int t;
    std::cin >> t;

    while(t--) {
        int n, k;
        std::cin >> n >> k;

        std::string s;
        std::cin >> s;
				
        std::unordered_map<char, int> mp;
        
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        
        int ct = 0;
        
        for(const auto &pair: mp){
			if( pair.second % 2 == 1) ct++;
		}

        if (ct <= k + 1)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}

