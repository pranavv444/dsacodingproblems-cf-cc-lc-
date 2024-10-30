#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	cin>>n;
	string s;
	cin>>s;
	int res=0;
	for(int i=0;i<n;i++){
	    if(s[i]==s[0]){
	        res=max(res,i+1);
	    }
	    else if(s[i]==s[n-1]){
	        res=max(res,n-i);
	    }
	}
	cout<<res<<endl;
	    
	}
	return 0;
	
	

}
