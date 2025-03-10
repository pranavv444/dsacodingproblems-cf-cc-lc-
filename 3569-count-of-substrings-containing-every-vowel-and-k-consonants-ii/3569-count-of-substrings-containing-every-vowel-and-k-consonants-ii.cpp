class Solution {
public:
    bool isvowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    long long atleastk(string &word,int k){
        int n=word.size();
        long long res=0;
        int conso=0;
        int left=0;
        unordered_map<char,int>vowelmap;
        for(int right=0;right<n;right++){
            if(isvowel(word[right])){
                vowelmap[word[right]]++;
            }
            else{
                conso++;
            }
            while(vowelmap.size()==5 && conso>=k){
                res+=n-right;
                if(isvowel(word[left])){
                    vowelmap[word[left]]--;
                    if(vowelmap[word[left]]==0){
                        vowelmap.erase(word[left]);
                    }
                    
                }
                else{
                    conso--;
                }
                left++;
               
            }
            
        }
        return res;
    }
    long long countOfSubstrings(string word, int k) {
        return atleastk(word,k)-atleastk(word,k+1);
        
    }
};