#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	int n;
    cin>>n;
	int arr[n];
    bool ans=true;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]<=4){
	        ans=false;
	    }
	}
	if (ans)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
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
