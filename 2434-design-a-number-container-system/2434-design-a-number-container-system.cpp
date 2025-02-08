class NumberContainers {
private:
    unordered_map<int,int>saved;
    unordered_map<int,set<int>>reserve;
public:
    NumberContainers() {}
    
    
    void change(int index, int number) {
        if(saved.find(index)!=saved.end()){
            int oldnum=saved[index];
            reserve[oldnum].erase(index);
            if(reserve[oldnum].empty()){
                reserve.erase(oldnum);
            }
        }
        saved[index]=number;
        reserve[number].insert(index);
    }
    
    int find(int number) {
        return(reserve.find(number)!=reserve.end() && !reserve[number].empty())? *reserve[number].begin():-1;
        
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */