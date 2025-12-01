class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        int x=batteries.size();
        long long totalenergy=0;
        for(int b:batteries){
            totalenergy+=b;
        }
        sort(batteries.begin(),batteries.end());
        for(int i=x-1;i>=0;i--){
            if(batteries[i]>totalenergy/n){
                totalenergy-=batteries[i];
                n--;
            }
            else break;
        }
        return totalenergy/n;
    }
    
};