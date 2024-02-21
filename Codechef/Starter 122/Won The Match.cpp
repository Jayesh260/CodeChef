#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	int runs[22],wicket[22];
	int score[22];
	int max=0,play=0;
	for(int i=0;i<22;i++){
	    cin>>runs[i]>>wicket[i];
	    score[i]=runs[i]+(wicket[i]*20);
	    if(score[i]>max){
	        max=score[i];
	        play=i;
	    }
	}
	cout<<play+1<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
