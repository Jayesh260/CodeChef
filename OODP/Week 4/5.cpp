#include <iostream>
using namespace std;
class Pyramid{
    public:
    Pyramid(){
        for(int i=0;i<5;i++){
            for(int j=0;j<5-i;j++)
            cout<<" ";
            for(int k=0;k<(2*i-1);k++)
            cout<<"*";
            cout<<"\n";
            }
    };
~Pyramid( ){
    cout<<"\nDestructor Executed";
}
};
int main( ){
    Pyramid p;
}