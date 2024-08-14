#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<2*y+1<<endl;
	    }
	    else if(x==y){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;

}
