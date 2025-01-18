class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        long long res=0;
        for(int i=0;i<n;i++){
            res+=abs(arr[i]-brr[i]);
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        long long res2=k;
        for(int i=0;i<n;i++){
            res2+=abs(arr[i]-brr[i]);
        }
        return min(res,res2);
    }
};