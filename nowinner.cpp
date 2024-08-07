#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,m;
	    cin>>a>>b>>c>>m;
	   // int score[3]={a,b,c};
	   // sort(score,score+3);
	   // int minscore=score[0];
	   // int midscore=score[1];
	   // int maxscore=score[2];
	    
	   // int maxpossiblescore=maxscore+m;
	   // int minpossiblescore=minscore;
	   // int maxmatchneed=maxscore- minscore-1;
	   // if(m>=maxmatchneed){
	   //     cout<<"Yes"<<endl;
	   // }
	   // else{
	   //     cout<<"No"<<endl;
	   // }
	   int maxscore=max({a,b,c});
	   int minscore=min({a,b,c});
	   int middlescore=a+b+c-maxscore-minscore;
	   if((maxscore- middlescore <=m)|| (middlescore- minscore<=m)){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
	

}
