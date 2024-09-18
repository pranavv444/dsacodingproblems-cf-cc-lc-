#include<bits/stdc++.h>
using namespace std;
int compare( const void *a, const void *b){
    return *(int *)a - *(int *)b;

}
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;  
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n<=3){
            cout<<0 <<endl;
            continue;
        }
        qsort(arr,n,sizeof(int),compare);
        int result=min(arr[n-1]-arr[2],arr[n-2]-arr[1]);
        result=min(result,arr[n-3]-arr[0]);
        cout<<result<<endl;
    
    
    }
    return 0;


}