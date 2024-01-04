#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int spd;
        cin>>spd;
        (spd<=70)?cout<<"0"<<endl:(spd>70&&spd<=100)?cout<<"500"<<endl:cout<<"2000"<<endl;
    }
	return 0;
}
