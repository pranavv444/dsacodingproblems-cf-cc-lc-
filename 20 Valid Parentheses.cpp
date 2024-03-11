class Solution {
public:
   bool matches(int top,int ch){
       if((ch==')' &&  top=='(') || (ch=='}' &&  top=='{') || (ch==']' &&  top=='[')){
           return true;
       }
       else
       {
           return false;
       }
   }


    bool isValid(string s) {
       stack<char>st; 
     for(int i=0;i<s.length();i++){
         char ch=s[i];
         // If opening bracket , push in stack 
         if(ch=='(' || ch=='{' || ch=='['){
             st.push(ch);
         }
         else
         {
              // If closing bracket ,stack top check & pop 
             if(!st.empty()){
                 char top=st.top();
                 if(matches(top,ch)){
                     st.pop();
                 }
                 else
                 {
                     return false;
                 }
             }
             else
             {
                 return false;
             } 
         }
     }

    // string pura traverse kr liya ho toh  
     if(st.empty()){
         return true;
     }
     else
     {
         return false;
     }
    }
};