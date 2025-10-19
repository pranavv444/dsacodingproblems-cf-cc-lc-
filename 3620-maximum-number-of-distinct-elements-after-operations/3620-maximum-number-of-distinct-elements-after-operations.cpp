#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=2L*k+1){
            return n;
        }
        sort(nums.begin(),nums.end());
        long long curr=LLONG_MIN;
        int ans=0;
        for(int num:nums){
            long long target=max(curr+1,(long long) num-k);

            if(target<=num+k){
                curr=target;
                ans++;
            }
            else{
                curr=max(curr,(long long) num);
            }
        }
        return ans;
    }
};