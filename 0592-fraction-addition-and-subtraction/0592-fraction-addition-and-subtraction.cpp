class Solution {
public:
    string fractionAddition(string expression) {
        int num=0,deno=1;
        int i=0;
        int n=expression.size();
        while(i<n){
            int sign=1;
            if(expression[i]=='+' || expression[i]=='-'){
                if(expression[i]=='-') sign=-1;
                i++;
            }
            int nume=0;
            while(i<n && isdigit(expression[i])){
                nume=nume*10+(expression[i]-'0');
                i++;
            }
            nume*=sign;
            i++;
            int den=0;
            while(i<n && isdigit(expression[i])){
                den=den*10+(expression[i]-'0');
                i++;
            }
            num=num*den+nume*deno;
            deno*=den;
            int gcdvalue=gcd(abs(num),deno);
            num /=gcdvalue;
            deno /=gcdvalue;
        }
        return to_string(num) +"/"+ to_string(deno);
    }
};