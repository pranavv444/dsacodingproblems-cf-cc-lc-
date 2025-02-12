#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int mx[82]={0};
        int res=-1;
        for (int x:nums){
            int sum=0,temp=x;
            while(temp!=0){
                sum+=temp%10;
                temp/=10;
            }
            if(mx[sum]!=0){
                res=max(res,x+mx[sum]);
            }
            mx[sum]=max(mx[sum],x);
        }
        return res;
    }
};