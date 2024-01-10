#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
lli n;
cin>>n;
lli ans=sqrtl(n);
if(n%2==1){
    ans++;
}
cout<<ans/2<<endl;
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
