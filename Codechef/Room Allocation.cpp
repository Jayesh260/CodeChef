#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	int n;
	cin>>n;
	int arr[n];
	int rooms=0;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]>2){
	        rooms+=ceil(arr[i]/2.0);
	    }
	    else
	    rooms++;
	}
	cout<<rooms<<endl;
	
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
