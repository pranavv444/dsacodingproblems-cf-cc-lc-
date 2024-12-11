class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        vector<int>small(n,0);
        vector<int>large(n,0);
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(rating[i]>rating[j]) small[i]++;
                if(rating[i]<rating[j]) large[i]++;
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(rating[i]>rating[j]) res+=small[j];
                if(rating[i]<rating[j]) res+=large[j];
            }
        }
        return res;
    }
};