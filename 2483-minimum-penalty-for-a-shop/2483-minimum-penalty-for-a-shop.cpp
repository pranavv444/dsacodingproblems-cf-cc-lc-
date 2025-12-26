class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int y=count(customers.begin(),customers.end(),'Y');
        int x=0;
        int penalty=x+y;
        int minp=penalty,mini=0;
        for(int i=1;i<=n;i++){
            int var=customers[i-1]=='Y';
            y-=var;
            x+=(1-var);
            penalty=x+y;
            if(minp>penalty){
                minp=penalty;
                mini=i;
            }
        }
        return mini;
    }
};