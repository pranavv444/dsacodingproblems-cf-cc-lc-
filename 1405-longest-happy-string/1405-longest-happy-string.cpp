class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        int charA=0,charB=0,charC=0;
        int lenmax=a+b+c,i=0;
        string res;
        while(i<lenmax){
            if((charA!=2 && a>=b && a>=c) || (a>0 && (charB==2 || charC==2))){
                res+='a';
                charA++;
                charB=0;
                charC=0;
                a--;
            }
            else if((charB!=2 && b>=a && b>=c) ||(b>0 && (charA==2 || charC==2))){
                res+='b';
                charB++;
                charA=0;
                charC=0;
                b--;
            }
            else if((charC!=2 && c>=a && c>=b) || (c>0 && (charA==2 || charB==2))){
                res+='c';
                charC++;
                charA=0;
                charB=0;
                c--;
            }
            i++;
        }
        return res;
    }
};

static const int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();