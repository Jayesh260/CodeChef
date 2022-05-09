/*
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int glasses;
        cin>>glasses;
        cout<<(((float)glasses*50)/(float)100)*30<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        float glasses,sugercane,leaves,rent;
        cin>>glasses;
        sugercane=((glasses*50)/100)*20;
        leaves=((glasses*50)/100)*20;
        rent=((glasses*50)/100)*30;
        cout<<(glasses*50)-(sugercane+leaves+rent)<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
#include<vector>
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,NI,cane,mint,rent;
        cin>>N;
        NI=50*N;
        cane=0.2*NI;
        mint=0.2*NI;
        rent=0.3*NI;
        cout<<NI-(cane+mint+rent)<<'\n';
    }
}
*/