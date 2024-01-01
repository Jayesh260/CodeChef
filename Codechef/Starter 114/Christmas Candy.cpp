#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
void solve(){
	// int n,count=0;
	// cin>>n;
	// int arr[n];
	// for(int i=0;i<n;i++)
	// cin>>arr[i];
	// bool arra[n]={false};
	// for(int i=0;i<n;i++){
	// 	for(int j=i;j<n;j++){
	// 		if(arr[j]<arr[i])
	// 		arra[j]=true;
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	if(arra[i]==true)
	// 	count++;
	// }
	// cout<<count<<endl;
	int b;
    cin >> b;
    vector<int> arr(b);
    for (int i = 0; i < b; ++i) {
        cin >> arr[i];
    }
    int ct = 0;
    int mini = arr[0];
    for (int i = 1; i < b; ++i) {
    	if (arr[i] < mini) {
            ct += 1;
        } 
		else{
            mini = arr[i];
        }
    }
    cout << ct << endl;
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
