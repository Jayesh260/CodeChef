#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n;
        int a[1000000];
        a[0]=pow(2,n);
        while(n--){
            for(int i=1;i<n;i++){
                a[i]=(a[i-1]/2);
            }
            }
        }
        return 0;
    }
