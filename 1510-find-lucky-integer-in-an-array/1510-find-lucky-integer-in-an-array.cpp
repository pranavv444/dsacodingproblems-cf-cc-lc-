class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>frq;
        for(int num:arr){
            frq[num]++;
        }
        int luck=-1;
        for(auto&[key,value]:frq){
            if(key==value){
                luck=max(luck,key);
            }
        }
        return luck;
    }
};