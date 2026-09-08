#include<bits/stdc++.h>
using namespace std;

int ans(vector<int> nums, int n, int k){
    int d=0, maxd=0, last=0;
    for(int i=0; i<nums.size(); i++){
        d = nums[i]-last;
        maxd = max(d, maxd);
        last = nums[i];
    }
    maxd = max(2*(k-last), maxd);
    return maxd;
}

int main(){
  int test;
  cin>>test;
  while(test--){
    int n , k; cin >> n >> k;
    vector<int> nums(n);  
    for (int i = 0 ; i < n ; i++) cin >> nums[i];
    cout << ans(nums, n, k) << endl;
  }
  
}