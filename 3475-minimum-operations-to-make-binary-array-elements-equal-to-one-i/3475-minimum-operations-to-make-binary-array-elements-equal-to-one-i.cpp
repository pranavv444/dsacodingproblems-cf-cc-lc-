class Solution {
public:
    int minOperations(vector<int>& array) {
        int n=array.size();
        int count=0;
        for(int i=0;i<n-2;i++){
            if(array[i]==0){
                array[i]=1;
                array[i+1]=1-array[i+1];
                array[i+2]=1-array[i+2];
                count++;
            }
        }
        for(int i=n-2;i<n;i++){
            if(array[i]==0){
                return -1;
            }
        }
        return count;
    }
};