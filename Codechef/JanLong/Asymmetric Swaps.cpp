#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[2*n];
        for(int it=0;it<(2*n);it++){
            cin>>arr[it];
        }
        std::sort(arr,arr+(2*n));
        long long int minim=arr[(2*n)-1]-arr[0];
        for(int it=0;it<=n;it++){
            minim=min(minim, arr[n+it-1]-arr[it]);
        }
        cout<<minim<<endl;
    }
	return 0;
}
