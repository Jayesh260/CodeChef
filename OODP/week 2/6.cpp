#include <bits/stdc++.h>
using namespace std;
int main() {
    int num,random=(rand()%10)+1;
    while(true){
        cout<<"enter the prediction"<<endl;
        cin>>num;
        if(num==random){
            cout<<"Well guessed!"<<endl;
            break;
        }
    }
    return 0;
}
