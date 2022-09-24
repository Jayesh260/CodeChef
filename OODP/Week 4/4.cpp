#include <iostream>
using namespace std;
class Volume{
    public:
    Volume( int side){
        cout<<"Volume of the cube of side "<<side<<" is "<<side*side*side;
}
~Volume( ){
    cout<<"\nDestructor Executed";
    }
};
int main( ){
    int side;
    cout<<"Enter the side of the cube: ";
    cin>>side;
    Volume v(side);
}