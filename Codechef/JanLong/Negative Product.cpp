


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    (a*b<0||b*c<0||c*a<0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
