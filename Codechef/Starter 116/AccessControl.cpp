#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	lli n,x,tp=0,main=0; 
	cin>>n>>x;
	string s; 
	cin>>s;
    if(s[0]=='0'){
        cout<<"NO\n";
    }else{
        for(lli i=0;i<n;i++){
            if(s[i]=='0'){
                tp++;
                if(tp>x){
                    main++;
                }
            }else{
                tp=0;
            }
        }
        if(main>0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t=1;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
