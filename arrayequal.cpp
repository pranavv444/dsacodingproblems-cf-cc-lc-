#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long x[n];
	    map<int,int>mm;
	    for(int i=0;i<n;i++){
	        cin>>x[i];
	        if(x[i]!=0){
	            mm[x[i]]++;
	        }
	    }
	    if(mm.size()==1 || mm.size()==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;

}
