class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int a=0;
        for(char it:s){
            if(it=='('){
                st.push(it);
            }
            else{
                if(st.empty()){
                    a++;
                }
                else{
                    st.pop();
                }
            }
            
        }
        return a+st.size();
    }
};