class CustomStack {
public:
    vector<int>v;
    int currsize=0, maxSize=0;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if(currsize==maxSize) return;
        currsize++;
        v.push_back(x);
    }
    
    int pop() {
        if(currsize==0){
            return -1;
        }
        int value=v[currsize-1];
        v.erase(v.begin()+currsize);
        currsize--;
        return value;
    }
    
    void increment(int k, int val) {
        if(currsize<=k){
            for(int& it:v){
                it+=val;
            }
        }
        else{
            for(int i=0;i<k;i++){
                v[i]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */