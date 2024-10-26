class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles,currBottles=0;
        while(true){
            if(numBottles-numExchange<0){
                res+=currBottles;
                numBottles+=currBottles;
                currBottles=0;
            }
            currBottles++;
            numBottles-=numExchange;
            if(numBottles<0) {
                break;
            }
        }
        return res;
    }
};