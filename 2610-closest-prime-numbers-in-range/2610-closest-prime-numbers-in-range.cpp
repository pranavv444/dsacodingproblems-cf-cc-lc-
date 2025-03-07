class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool>sieve(right+1,true);
        sieve[0]=sieve[1]=false;
        for(int i=2;i*i<=right;i++){
            if(sieve[i]){
                for(int j=i*i;j<=right;j+=i){
                    sieve[j]=false;
                }
            }
        }
        vector<int>prime;
        for(int i=left;i<=right;i++){
            if(sieve[i]){
                prime.push_back(i);
            }
        }
        if(prime.size()<2){
            return {-1,-1};
        }
        int mingap=INT_MAX;
        vector<int>res={-1,-1};
        for(int i=1;i<prime.size();i++){
            int gap=prime[i]-prime[i-1];
            if(gap<mingap){
                mingap=gap;
                res={prime[i-1],prime[i]};
            }
        }
        return res;
    }
};