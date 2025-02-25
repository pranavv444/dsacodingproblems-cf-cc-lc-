class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod=1000000007;
        int odd=0,even=1;
        int res=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==1){
                res=(res+even)%mod;
                odd++;
            }
            else{
                res=(res+odd)%mod;
                even++;
            }
        }
        return res;
    }
};