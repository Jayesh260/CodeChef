#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int share;
        share=n/(k+1);
        cout<<n-(share*k)<<endl;
    }
	return 0;
}
