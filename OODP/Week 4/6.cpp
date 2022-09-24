#include <iostream>
using namespace std;
class Div{
    public:
    Div(){
        int sum=0;
        for(int i=100;i<200;i++){
            if(i%9==0)
            cout<<i<<endl;
            sum+=i;
            }
        cout<<"\nSum: "<<sum;
    }
    ~Div(){
    cout<<"\nDestructor Executed";
    }
};
int main(){
    Div d;
    }