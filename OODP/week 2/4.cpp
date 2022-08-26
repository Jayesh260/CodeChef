#include<bits/stdc++.h>
using namespace std;
void func(){
    int first,second,third;
    cout<<"enter the first number"<<endl;
    cin>>first;
    cout<<"enter the second number"<<endl;
    cin>>second;
    cout<<"enter the third number"<<endl;
    cin>>third;
    if(first>second&&second>third)
    cout<<"the greatest number is "<<first<<endl;
    else if(second>first&&second>third)
    cout<<"the greatest number is "<<second<<endl;
    else
    cout<<"the greatest number is "<<third<<endl;
}
int main(){
    func();
    return 0;
}
