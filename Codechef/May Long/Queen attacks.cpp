#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y,moves,bish,rook;
        cin>>n>>x>>y;
        bish=(min(x,y)-1)+(n-max(x,y))+(min(x,(n+1)-y)-1)+n-max(x,(n+1)-y);
        rook=(n-1)+(n-1);
        moves=bish+rook;
        cout<<moves<<endl;
    }
	return 0;
}