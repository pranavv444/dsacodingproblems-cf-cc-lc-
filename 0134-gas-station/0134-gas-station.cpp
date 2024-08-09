class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=accumulate(cost.begin(),cost.end(),0);
        int sumgas=accumulate(gas.begin(),gas.end(),0);
        if(sum>sumgas){
            return -1;
        }
        int currgas=0;
        int startind=0;
        for(int i=0;i<gas.size();i++){
            currgas+=gas[i]-cost[i];
            if(currgas<0){
                currgas=0;
                startind=i+1;
            }
        }
        return startind;
        
    }
};