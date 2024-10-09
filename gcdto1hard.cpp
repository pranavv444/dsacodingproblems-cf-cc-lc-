#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            a[i][j]=2;
	        }
	    }
	    if(n>m){
	        for(int i=0;i<m;i++){
	            a[i][i]=3;
	        }
	        for(int i=m;i<n;i++){
	            a[i][0]=3;
	        }
	    }
	    else{
	        for(int i=0;i<n;i++){
	            a[i][i]=3;
	        }
	        for(int i=n;i<m;i++){
	            a[0][i]=3;
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}

}
