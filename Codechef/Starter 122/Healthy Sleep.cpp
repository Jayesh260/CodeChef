#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	int n;
	cin>>n;
	if(n<8)
	cout<<"LESS";
	else if(n==8)
	cout<<"PERFECT";
	else 
	cout<<"MORE";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t=1;
// 	cin>>t;
	while(t--)
	solve();
	return 0;
}
