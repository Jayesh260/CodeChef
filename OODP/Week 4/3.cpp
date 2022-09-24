#include <iostream>
using namespace std;
class Cube{
    public:
    Cube(int n){
        for(int i=1;i<=n;i++)
        cout<<"Cube of " <<i<< "is :"<<i*i*i<<endl;
    }
~Cube( ){
    cout<<"\nDestructor executed";
    }
    };

int main(){
    int num;
    cout<<"Please enter the number: ";
    cin>>num;
    Cube c(num);
}