class Solution {
public:
    int passThePillow(int n, int time) {
        int pillow=time/(n-1);
        int index=time%(n-1);
        if(pillow%2){
            return n-index;
        }
        else{
            return index+1;
        }
        
    }
};

static int fastIO = []
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();