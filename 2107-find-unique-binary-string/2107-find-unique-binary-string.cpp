class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res=string(nums.size(),'0');
        if(find(nums.begin(),nums.end(),res)==nums.end()){
            return res;
        }
        for(int i=0;i<nums.size();i++){
            res[i]='1';
            if(find(nums.begin(),nums.end(),res)==nums.end()){
                return res;
            }
            res[i]='0';
        }
        return res;
    }
};