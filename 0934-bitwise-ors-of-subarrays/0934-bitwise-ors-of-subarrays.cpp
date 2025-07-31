class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        vector<int>res;
        int n=arr.size();
        for(int i=0;i<n;i++){
            const int bit=arr[i];
            int skip=0,taken=bit;
            res.push_back(taken);
            for(int j=i-1;j>=0;j--){
                skip|=arr[j];
                taken=skip|bit;
                if(skip==taken) break;
                res.push_back(taken);
            }
        }
        sort(res.begin(),res.end());
        return unique(res.begin(),res.end())-res.begin();
    }
};