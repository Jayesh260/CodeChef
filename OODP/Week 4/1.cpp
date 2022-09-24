#include <iostream>
using namespace std;
class DecToBin{
    public:
    DecToBin(int n){
        int binary[10],i;
        for(i=0;n>0; i++){
            binary[i]=n%2;
            n/=2;
        }
    cout<<"Binary Number: ";
    for(i=i-1;i>=0;i--)
    cout<<binary[i];
    }
    ~DecToBin( ){
        cout<<"\nDestructor executed";
    }
};
int main( ){
    int n;
    cout<<"Please enter a decimal number: ";
    cin>>n;
    DecToBin decTobin(n);
}
