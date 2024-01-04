#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        float d1,d2;
        cin>>x1>>y1>>x2>>y2;
        d1=sqrt((x1*x1)+(y1*y1));
        d2=sqrt((x2*x2)+(y2*y2));
        if(d1>d2)
        cout<<"Alex"<<endl;
        else if(d1<d2)
        cout<<"Bob"<<endl;
        else
        cout<<"Equal"<<endl;
    }
	return 0;
}
