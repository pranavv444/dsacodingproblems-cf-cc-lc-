class Solution {
public:
    bool canChange(string start, string target) {
        if(start==target) return true;
        int left=0,right=0;
        for(int i=0;i<start.length();i++){
            char curr=start[i];
            char goal=target[i];
            if(curr=='R'){
                if(left>0) return false;
                right++;
            }
            if(goal=='L'){
                if(right>0) return false;
                left++;
            }
            if(goal=='R'){
                if(right==0) return false;
                right--;
            }
            if(curr=='L'){
                if(left==0) return false;
                left--;
            }
        }
        return left==0 && right==0;

    }
};