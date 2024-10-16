#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    if(k==1){
	        cout<<2*v[n-1]+v[0]+v[n-2]<<endl;
	    }
	    else{
	        int res=v[0]+v[n-k-1]+v[n-1]+v[n-2];
	        cout<<res<<endl;
	    }
	}
	return 0;

}
