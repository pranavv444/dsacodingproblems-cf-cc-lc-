class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>answer;
        vector<int>arr;
        findcomb(0,target,candidates,answer,arr);
        return answer;
    }
    void findcomb(int index,int target,vector<int>&ds,vector<vector<int>>&answer,vector<int>&arr){
        if(target==0){
            answer.push_back(arr);
            return;
        }
        for(int i=index;i<ds.size();i++){
            if(i>index && ds[i]==ds[i-1]){
                continue;
            }
            if(ds[i]>target){
                break;
            }
            arr.push_back(ds[i]);
            findcomb(i+1,target-ds[i],ds,answer,arr);
            arr.pop_back();
        }
    }
};