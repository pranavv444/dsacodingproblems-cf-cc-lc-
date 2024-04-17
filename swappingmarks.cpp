#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int reversedA=(a%10)*10+(a/10);
        int reversedB=(b%10)*10+(b/10);
        int maxa=max(a,reversedA);
        int minb=min(b,reversedB);
        if(maxa>minb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}