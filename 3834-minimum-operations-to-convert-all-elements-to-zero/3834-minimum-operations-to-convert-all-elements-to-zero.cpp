#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        nums.push_back(0);
        vector<int>vt;
        int cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            while(!vt.empty()){
                if(nums[i]>vt.back()){
                    vt.push_back(nums[i]);
                    break;
                }
                else if(nums[i]<vt.back()){
                    vt.pop_back();
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(vt.empty() && nums[i]!=0){
                vt.push_back(nums[i]);
            }
        }
        return cnt;
    }
};