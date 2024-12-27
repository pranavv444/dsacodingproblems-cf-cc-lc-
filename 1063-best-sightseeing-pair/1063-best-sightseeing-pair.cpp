class Solution {
public:
    int value=0;
    int func(int i,vector<int>&values){
        if(i<0) return 0;
        int x=values[i],prev=func(i-1,values);
        value=max(value,prev+x-i);
        return max(prev,x+i);
    }
    int maxScoreSightseeingPair(vector<int>& values) {
        const int n=values.size();
        func(n-1,values);
        return value;

    }
};