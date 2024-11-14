class Solution {
public:
    bool productsdistributed(int n,vector<int>&quantities,int mid){
        int stores=0;
        for(auto x:quantities){
            stores+=x/mid;
            if(x%mid) stores++;
            if(stores>n) return 0;
        }
        return stores<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int s=1,e=100000,res=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(productsdistributed(n,quantities,mid)){
                res=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
};