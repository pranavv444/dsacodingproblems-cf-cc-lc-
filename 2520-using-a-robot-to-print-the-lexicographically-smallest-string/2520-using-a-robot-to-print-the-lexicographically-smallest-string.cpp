class Solution {
public:
    char lexo(vector<int>vt){
        for(int i=0;i<26;i++){
            if(vt[i]) return 'a'+i;
        }
        return 'a';
    }
    string robotWithString(string s) {
        stack<char>st;
        string t="";
        vector<int>vt(26);
        for(char ch:s){
            vt[ch-'a']++;
        }
        for(char ch:s){
            st.push(ch);
            vt[ch-'a']--;
            while(!st.empty() && st.top()<=lexo(vt)){
                t+=st.top();
                st.pop();
            }
        }
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        return t;
    }
};