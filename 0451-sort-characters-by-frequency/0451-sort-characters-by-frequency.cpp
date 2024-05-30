class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>>ps;
		for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
		for(auto i:mp){
            ps.push(make_pair(i.second,i.first));
        }
        string ans="";
   
		while(!ps.empty()){
            int a=ps.top().first;
            char b=ps.top().second;
            for(int i=0;i<a;i++){
                ans+=b;
            }
            ps.pop();
        }
        return ans;
    }
};