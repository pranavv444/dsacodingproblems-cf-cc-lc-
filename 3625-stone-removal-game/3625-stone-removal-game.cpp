class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int remstones=n;
        int currremove=10;
        bool aliceturn=true;
        while(remstones>=currremove){
            remstones-=currremove;
            currremove--;
            aliceturn=!aliceturn;
        }
        return !aliceturn;
        
        
    }
};