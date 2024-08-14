#include <bits/stdc++.h>
using namespace std;


const int maxsum=200; 

vector<bool>test(int maxnum){
    vector<bool>prime(maxnum+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=maxnum;i++){
        if(prime[i]){
            for(int j=i*i;j<=maxnum;j+=i){
                prime[j]=false;
            }
        }
    }
    return prime;
}
int main() {
	// your code goes here
	vector<bool>prime=test(maxsum);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>freq(101,0);
	    vector<int>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    bool f=false;
	    
	    for(int i=1;i<=100 && !f;i++){
	        for(int j=i;j<=100 && !f;j++){
	            if(freq[i]>0 && freq[j]>0){
	                if(i!=j || freq[i]>1){
	                    int sum=i+j;
	                    if(!prime[sum]){
	                        int findex=-1,sindex=-1;
	                        for(int k=0;k<n;k++){
	                            if(a[k]==i && findex==-1){
	                                findex=k+1;
	                            }
	                            else if(a[k]==j && sindex==-1){
	                                sindex=k+1;
	                            }
	                            if(findex!=-1 && sindex!=-1 && findex!=sindex){
	                                cout<<findex<<" "<<sindex<<"\n";
	                                f=true;
	                                break;
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
	    if(!f){
	        cout<<-1<<"\n";
	    }
	}
	return 0;
	

}
