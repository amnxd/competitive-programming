#include<bits/stdc++.h>
using namespace std;

bool ans(vector<int> nums, int n, int k){
    vector<int> sortNums = nums;
    sort(sortNums.begin(), sortNums.end());
    if(sortNums==nums) return true;
    else if(k<2) return false;
    else return true; 
}

int main(){
  int test;
  cin>>test;
  while(test--){
    int n , k; cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0 ; i < n ; i++) cin >> nums[i];
    cout << (ans(nums,n,k)?"YES":"NO") << endl;
  }
  
}