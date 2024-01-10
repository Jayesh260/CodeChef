#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
lli n,m;
cin>>n>>m;
vector<lli> v(n),a(m);
for(lli i=0;i<n;i++){

cin>>v[i];
}
for(lli i=0;i<m;i++){
cin>>a[i];
    
}

lli mx=*max_element(a.begin(),a.end());
if(mx>=n){
mx=0;
}
else{
    mx=n-mx;
}
sort(v.begin()+mx,v.end());
for(auto &x:v) {
cout<<x<<" ";
}
cout<<endl;
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
