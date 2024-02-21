#include <bits/stdc++.h> 
using namespace std;
typedef long long int lli;
void solve(){
    lli n,m,xo,yo,l;
	cin>>n>>m>>xo>>yo>>l;
	lli cells=1;
    if(l==1){
        cout<<(n*m)<<endl;
    }
    else{
        lli up=(xo-1)/l,down=(n-xo)/l,left=(yo-1)/l,right=(m-yo)/l;
        cells = 1LL + (up + down) + (left + right) + (up + down) * (long long)(left + right);
        cout<<cells<<endl;
    }
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
