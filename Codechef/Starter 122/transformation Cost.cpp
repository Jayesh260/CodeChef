#include <bits/stdc++.h>
#include <string>    
using namespace std;
typedef long long int lli;
void solve(){
	int nt;
    cin>>nt; 
    int count=0;
    int position=0;
    for(int i=31;i>=0;i--){
        if(nt & (1LL<<i)){
            if(position==0){position=i;}
                if(count==0 or count==2){count++;}
            }
        else{
            if(count==1){count=2;}
        }
    }
    // if(cnt!=3){
        // cout<<0<<endl;
        // continue;
    // }
    int curnum=0;
    int ans=1e18;
    // cout<<pos<<endl;
    for(int i=position;i>=0;i--){
    curnum=curnum+pow(2,i);
    // cout<<curnum<<endl;
    if(curnum<nt){continue;}
    ans=min(ans,curnum-nt);
    }
    cout<<ans<<endl;
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
