class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int answer=0,c1=0,c2=0;
        unordered_map<int,int>counts{{0,-1}};
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c2++;
            }
            else{
                c1++;
            }
            int diff=c2-c1;
            if(counts.find(diff)!=counts.end()){
                answer=max(answer,i-counts[diff]);
            }
            else{
                counts[diff]=i;
            }
        }
        return answer;
        
    }
};