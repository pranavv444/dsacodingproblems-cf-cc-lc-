class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int>ans;
        int n=expression.size();
        for(int i=0;i<n;i++){
            char ops=expression[i];
            if(ops=='+' || ops=='-' || ops=='*'){
                vector<int>v1=diffWaysToCompute(expression.substr(0,i));
                vector<int>v2=diffWaysToCompute(expression.substr(i+1));
                for(int a:v1){
                    for(int b:v2){
                        if(ops=='+') ans.push_back(a+b);
                        else if(ops=='-') ans.push_back(a-b);
                        else if(ops=='*') ans.push_back(a*b);
                    }
                }
            }
        }
        if(ans.empty()){
            ans.push_back(stoi(expression));
        }
        return ans;
    }
};