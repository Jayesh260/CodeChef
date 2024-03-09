#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
    int n,ans=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        int num=i,cnt=0;
        for(int j=2;j*j<i;j++){
            if(num%j==0){
            cnt++;
            while(num%j==0){
                num/=j;
                }
            }
            if(cnt>2)
            break;
        }
        if(num>1){
            cnt++;
        }
        if(cnt==2){
            ans++;
        }
        
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    solve();
    return 0;
}
