#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long int,vector<long long int>,greater<long long int>>minheap(nums.begin(),nums.end());
        long long int res=0;
        while(minheap.size()>1 && minheap.top()<k){
            long long int num1=minheap.top();
            minheap.pop();
            long long int num2=minheap.top();
            minheap.pop();
            minheap.push(num1*2+num2);
            res++;
        }
        return res;
    }
};