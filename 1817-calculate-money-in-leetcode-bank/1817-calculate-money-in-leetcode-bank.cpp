class Solution {
public:
    int totalMoney(int n) {
        int res=0,cnt=0,sum=0;
        for(int i=1;i<=n;i++){
            if(cnt==7){
                res=i/7+1;
                cnt=0;
            }
            else{
                res++;
            }
            sum+=res;
            cnt++;
        }
        return sum;
    }
};