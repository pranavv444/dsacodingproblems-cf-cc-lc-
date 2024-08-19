class Solution {
public:
    int minSteps(int n) {
        if(n==1) return 0;
        int step=0;
        int multiple=2;
        while(n>1){
            while(n%multiple==0){
                step+=multiple;
                n /=multiple;
            }
            multiple++;
        }
        return step;
        
    }
};