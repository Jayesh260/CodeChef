// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int q;
//         cin>>q;
//         while(q--){
//             int count=0;
//             int l,r,x;
//             cin>>l>>r>>x;
//             for(int i=l-1;i<=r-1;i++){
//                 if((arr[i]^x)>(arr[i]&x)){
//                     count=count+1;
//                 }
//             }
//             cout<<count<<"\n";
//         }
//     }
// 	return 0;
// }

//tesst 2
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     using std::cout;
//     using std::cin;
//     std::ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int T;
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         int ARR[N];
//         for(int i=0;i<N;i++){
//             cin>>ARR[i];
//         }
//         int AA[N+1][33];
//         for(int i=1;i<=N;i++){
//             int tmp=ARR[i-1];
//             for(int j=0;j<33;j++){
//                 AA[i][j]=AA[i-1][j];
//             }
//             int p=32;
//             if(tmp!=0){
//                 p=int(log(tmp)/log(2));
//             }
//             AA[i][p]++;
//         }
//         int q;
//         cin>>q;
//         for(int i=0;i<q;i++){
//             int x,l,r,cn=0,sc,pw=32;
//             cin>>x>>l>>r;
//             if(r!=0){
//                 pw=int(log(r)/log(2));
//             }
//             cn=AA[l][pw]-AA[x-1][pw];
//             int ans=(l-x+1)-cn;
//             cout<<ans<<'\n';
//         }
//     }
// }

//test 3

#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int ARR[N];
        for(int i=0;i<N;i++){
            cin>>ARR[i];
        }
        int AA[N+1][33];
        for(int i=1;i<=N;i++){
            int tmp=ARR[i-1];
            for(int j=0;j<33;j++){
                AA[i][j]=AA[i-1][j];
            }
            int p=32;
            if(tmp!=0){
                p=int(log(tmp)/log(2));
            }
            AA[i][p]++;
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x,l,r,cn=0,sc,pw=32;
            cin>>x>>l>>r;
            if(r!=0){
                pw=int(log(r)/log(2));
            }
            cn=AA[l][pw]-AA[x-1][pw];
            int ans=(l-x+1)-cn;
            cout<<ans<<'\n';
        }
    }
}