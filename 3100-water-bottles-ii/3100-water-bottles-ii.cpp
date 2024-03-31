class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptybottle=0;
        int drinkbottle=0;
        while(numBottles>0 || emptybottle>=numExchange){
            if(emptybottle>=numExchange){
                emptybottle-=numExchange;
                numExchange++;
                numBottles++;
            }
            drinkbottle+=numBottles;
            emptybottle+=numBottles;
            numBottles=0;

        }
        return drinkbottle;
    }
};