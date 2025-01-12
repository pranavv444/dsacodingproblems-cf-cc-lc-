class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size();
        if(n%2==1){
            return false;
        }
        stack<int>openind;
        stack<int>unlockind;
        for(int i=0;i<n;i++){
            if(locked[i]=='0'){
                unlockind.push(i);
            }
            else if(s[i]=='('){
                openind.push(i);
            }
            else if(s[i]==')'){
                if(!openind.empty()){
                    openind.pop();
                }
                else if(!unlockind.empty()){
                    unlockind.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!openind.empty() && !unlockind.empty() && openind.top()<unlockind.top()){
            openind.pop();
            unlockind.pop();
        }
        if(openind.empty() && !unlockind.empty()){
            return unlockind.size()%2==0;
        }
        return openind.empty();
    }

};