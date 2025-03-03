class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less,high,res(nums.size()); 
        int cnt=0;
        for(int num:nums){
            if(num<pivot){
                less.push_back(num);
            }
            else if(num==pivot) cnt++;
            else {
                high.push_back(num);
            }
        }
        int ind=0;
        for(int num:less){
            res[ind++]=num;
        }
        for(int i=0;i<cnt;i++){
            res[ind++]=pivot;
        }
        for(int num:high) res[ind++]=num;
        return res;

    }
};