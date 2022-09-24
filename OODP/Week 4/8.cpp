#include<iostream>
using namespace std;
class Sample_Sum{
    public:
    Sample_Sum(int a,int b){
        int c=a+b;
        cout<<"Sum of "<<a<<"+"<<b<<"="<<c;
    }
    ~Sample_Sum(){
        cout<<"\nDestructor Executed";
    }
};

int main(){
    Sample_Sum add(3,4);
}