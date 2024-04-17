#include<bits/stdc++.h>
using namespace std;
string checkelements(vector<int>&arr){
    if(arr[0]!=arr[arr.size()-1]){
        return "NO";
    }
    else{
        int first=arr[0];
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]<first){
                return "NO";
            }
        }
        return "YES";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        string result=checkelements(A);
        cout<<result<<endl;
    }

}