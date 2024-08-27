class Solution {
public:
    int findComplement(int num) {
        if(num==0){
            return 1;
        }
        unsigned int comp=~0;
        while(num & comp){
            comp<<=1;
        }
        return ~comp & ~num;
    }
};