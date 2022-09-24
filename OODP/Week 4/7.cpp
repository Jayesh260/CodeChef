#include <iostream>
using namespace std;
class Reverse{
    public:
    Reverse(int n){
        int rev_num=0;
        while(n>0){
            rev_num=10*( rev_num+(n%10));
            n/=10;
            }
            cout<<"Number in reverse: "<<rev_num/10;
    };
~Reverse(){
    cout<<"\nDestructor Executed";
    }
};
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    Reverse rev(num);
    }