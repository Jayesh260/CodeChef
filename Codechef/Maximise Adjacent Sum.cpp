#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	int n;
	cin>>n;
	int arr[n],sum=0;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    sum+=arr[i];
	}
	sort(arr,arr+n);
	cout<<(sum*2)-(arr[0]+arr[1])<<endl;
	
// 	sum*2- (2 samllest)
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
