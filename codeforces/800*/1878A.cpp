#include<bits/stdc++.h>

int main(){
    int t; std::cin >> t;
    
    while( t-- ){
        int n, k; std::cin >> n >> k;
        
        std::vector<int> v(n);
        for(int &i: v ) std::cin >> i;

        bool ck = false; 
        for(auto it: v) {
            if( it == k ) ck = true;
        }
    
        std::cout << ( ck ? "YES\n" : "NO\n" ) ;
    }
}
