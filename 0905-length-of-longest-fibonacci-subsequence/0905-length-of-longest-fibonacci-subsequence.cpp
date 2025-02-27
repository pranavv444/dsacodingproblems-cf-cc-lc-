class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        if(n<=2) return 0;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++){
            ump[arr[i]]=i;
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pre=arr[j];
                int prev=arr[i];
                int len=2;
                while(ump.find(pre+prev)!=ump.end()){
                    len++;
                    maxi=max(maxi,len);
                    int m=pre;
                    pre+=prev;
                    prev=m;
                }
            }
        }
        return maxi>2?maxi:0;
    }
};