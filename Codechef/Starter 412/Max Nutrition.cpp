#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int type[n],value[n];
        
        for(int i=0;i<n;i++)
            cin>>type[i];
        for(int i=0;i<n;i++)
            cin>>value[i];
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++){
            int typ=type[i];
            int val=value[i];
            ans[typ]=max(ans[typ],val);
        }
        int sol=0;
        for(int i=1;i<=n;i++){
            sol+=ans[i];
        }
        cout<<sol<<endl;
    }
	return 0;
}
