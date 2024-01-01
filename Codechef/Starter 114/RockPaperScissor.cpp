#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<char> sol(n,'P');
	int cnt=0;
	for(int i=0;i<n;i++)
	if((sol[i]=='P'&&s[i]=='R'))cnt++;
	if(cnt<=n/2+1){
		int cnt2;
		cnt2=(n/2)+1-cnt;
		for(int i=n-1;i>=0;i--){
			if(cnt2>0){
				if(s[i]=='P'){
					sol[i]='S';
					cnt2--;
				}
				else if(s[i]=='S'){
					sol[i]='R';
					cnt2--;
				}
			}
		}
	}
	string ans;
	for(auto x:sol)
	ans+=x;
	cout<<ans<<endl;
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
