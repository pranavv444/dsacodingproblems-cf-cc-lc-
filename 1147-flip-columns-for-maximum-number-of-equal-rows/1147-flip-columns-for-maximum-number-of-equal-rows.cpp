class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string,int>freq;
        for(const auto&row:matrix){
            string pattern;
            if(row[0]==0){
                for(int ind:row){
                    pattern+=to_string(ind);
                }
                
                
            }
            else{
                    for(int ind:row){
                        pattern+=to_string(ind ^1);
                    }
                }
            freq[pattern]++;
        }
        int maxfreq=0;
        for(const auto& pair:freq){
            maxfreq=max(maxfreq,pair.second);
        }
        return maxfreq;
    }
};