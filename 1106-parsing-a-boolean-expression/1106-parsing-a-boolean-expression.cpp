class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char>st;
        for(char currchar:expression){
            if(currchar==',' || currchar=='('){
                continue;
            }
            if(currchar=='t' || currchar=='f' || currchar=='!' || currchar=='&' || currchar=='|'){
                st.push(currchar);
            }
            else if(currchar==')'){
                bool istrue=false,isfalse=false;
                while (st.top()!= '!' && st.top()!= '&' && st.top()!= '|'){
                    char topval=st.top();
                    st.pop();
                    if(topval=='t'){
                        istrue=true;
                    }
                    if(topval=='f'){
                        isfalse=true;
                    }
                }
                char x=st.top();
                st.pop();
                if(x=='!'){
                    st.push(istrue?'f':'t');
                }
                else if(x=='&'){
                    st.push(isfalse?'f':'t');
                }
                else{
                    st.push(istrue?'t':'f');
                }
            }
        }
        return st.top()=='t';
    }
};