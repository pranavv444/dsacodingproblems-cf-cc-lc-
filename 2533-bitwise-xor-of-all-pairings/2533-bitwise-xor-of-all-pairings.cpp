class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        int x=0,y=0;
        if(a%2!=0){
            for(int num:nums2){
                y^=num;
            }
        }
        if(b%2!=0){
            for(int num:nums1){
                x^=num;
            }
        }
        return x^y;
    }
};