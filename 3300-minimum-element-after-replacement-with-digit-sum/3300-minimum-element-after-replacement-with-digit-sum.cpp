class Solution {
public:
    int sumofdigits(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num /=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int minsum=INT_MAX;
        for(int num:nums){
            int sum=sumofdigits(num);
            minsum=min(minsum,sum);
        }
        return minsum;
        
    }
};