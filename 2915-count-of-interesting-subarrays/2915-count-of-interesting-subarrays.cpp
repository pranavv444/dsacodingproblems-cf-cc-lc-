class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        long long res=0;
        int pref=0;
        unordered_map<int,long long>cntmap;
        cntmap[0]=1;
        for(int num:nums){
            if(num%modulo==k){
                pref++;
            }
            int mod=pref%modulo;
            int target=(mod-k+modulo)%modulo;
            res+=cntmap[target];
            cntmap[mod]++;
        }
        return res;
    }
};