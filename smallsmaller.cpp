#include <bits/stdc++.h>
using namespace std;
int countone(const string&s,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int x=countone(s,n);
	    int y=n-x;
	    if(x==0){
	        cout<<n<<endl;
	    }
	    else{
	        if(x%2==0){
	            cout<<0<<endl;;
	        }
	        else{
	            cout<<1<<endl;;
	        }
	    }
	}
	return 0;

}
