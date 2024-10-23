#include <bits/stdc++.h>
using namespace std;
int minsum(int n,vector<int>&a){
    int alast=a[n];
    while(true){
        bool swapped=false;
        for(int i=0;i<n;i++){
            if(a[i]<=2*alast){
                if(alast<a[i]){
                    swap(a[i],a[n]);
                    alast=a[n];
                    swapped=true;
                }
            }
        }
        if(!swapped) break;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        
    }
    return sum;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n+1);
	    for(int i=0;i<=n;i++){
	        cin>>a[i];
	    }
	    cout<<minsum(n,a)<<endl;
	}
	return 0;

}
