#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string sa,sb;
	    cin>>sa>>sb;
	    vector<bool>a(26,false),b(26,false);
	    for(char c:sa){
	        a[c-'a']=true;
	    }
	    for(char c:sb){
	        b[c-'a']=true;
	    }
	    bool found=false;
	    for(int i=0;i<26;i++){
	        if(!a[i] && !b[i]){
	            found=true;
	            break;
	        }
	    }
	    if(found){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;

}
