class Solution {
public:
    int maxDistance(string s, int k) {
        int res=0,north=0,south=0,east=0,west=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='N') north++;
            else if(c=='S') south++;
            else if(c=='E') east++;
            else if(c=='W') west++;

            int a=abs(north-south);
            int b=abs(east-west);
            int mid=a+b;
            int dist=mid+min(2*k,i+1-mid);
            res=max(res,dist);
        }
        return res;
    }
};