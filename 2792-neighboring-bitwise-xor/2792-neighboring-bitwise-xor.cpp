class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int x=0;
        for(auto value:derived){
            x^=value;
        }
        return x==0;
    }
};