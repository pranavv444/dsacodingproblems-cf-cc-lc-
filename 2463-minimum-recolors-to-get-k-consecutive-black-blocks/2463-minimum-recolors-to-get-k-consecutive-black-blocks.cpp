class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int blackcount=0,res=INT_MAX;
        for(int i=0;i<blocks.size();i++){
            if(i-k>=0 && blocks[i-k]=='B'){
                blackcount--;
            }
            if(blocks[i]=='B'){
                blackcount++;
            }
            res=min(res,k-blackcount);
            
        }
        return res;
    }
};