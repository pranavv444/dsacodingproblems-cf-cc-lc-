class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int n=original.size();
        long long low=bounds[0][0];
        long long high=bounds[0][1];
        long long pref=0;
        for(int i=1;i<n;i++){
            pref+=static_cast<long long>(original[i])-original[i-1];
            long long currlow=bounds[i][0]-pref;
            long long currhigh=bounds[i][1]-pref;
            low=max(low,currlow);
            high=min(high,currhigh);
            if(low>high){
                return 0;
            }
            
        }
        return static_cast<int>(high-low+1);
    }
};