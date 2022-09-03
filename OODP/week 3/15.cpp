#include <iostream>
using namespace std;
class factorial{
    public:
    int n=1;
    int fact=1;
    void input(){
        cout<<"enter the number"<<endl;
        cin>>n;
    };
    void facto(){
        while(n>0){
            fact*=n;
            n--;
        }
        cout<<"the factorail of the number is "<<fact<<endl;
    };
};
int main() {
    factorial f;
    f.input();
    f.facto();
    return 0;
}
