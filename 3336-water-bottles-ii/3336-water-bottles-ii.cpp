class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int result=numBottles;
        while(numBottles>=numExchange){
            numBottles-=numExchange-1;
            numExchange++;
            result++;
        }
        return result;
    }
};