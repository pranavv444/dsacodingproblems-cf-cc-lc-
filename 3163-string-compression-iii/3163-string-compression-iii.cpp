class Solution {
public:
    string compressedString(string word) {
        string answer="";
        int n=word.size();
        int count=1;
        for(int i=1;i<n;i++,count++){
            if(count<9 && word[i]==word[i-1]){
                continue;
            }
            answer+=to_string(count)+word[i-1];
            count=0;
        }
        answer+=to_string(count)+word.back();
        return answer;
    }
};