#include <bits/stdc++.h>
using namespace std;
int main() {
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" *";
        }
        cout<<"\n";
    }
    for(int i=5;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}
