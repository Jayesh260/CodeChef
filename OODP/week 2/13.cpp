#include <bits/stdc++.h>
using namespace std;
int main() {
    int month;
    cout<<"enter the month 'jan=1,feb=2,mar=3.....' "<<endl;
    cin>>month;
    if(month==(month%2!=0)){
        cout<<"30 days"<<endl;}
    else if(month==2){
        cout<<"28 or 29 days"<<endl;}
    else{
    cout<<"31 days"<<endl;}
    return 0;
}
