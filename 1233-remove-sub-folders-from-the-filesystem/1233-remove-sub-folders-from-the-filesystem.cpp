class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>res;
        res.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
            string lastfolder=res.back();
            lastfolder.push_back('/');
            if(folder[i].compare(0,lastfolder.size(),lastfolder)!=0){
                res.push_back(folder[i]);
            }
        }
        return res;
    }
};